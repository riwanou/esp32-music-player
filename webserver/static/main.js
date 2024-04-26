/**
 * Button status
 */

function setButtonStatus(isOn) {
	const buttonStatusEl = document.getElementById("button-status");
	if (isOn) {
		buttonStatusEl.classList.remove("button-off");
		buttonStatusEl.classList.add("button-on");
	} else {
		buttonStatusEl.classList.remove("button-on");
		buttonStatusEl.classList.add("button-off");
	}
}

// Fetch button status
setInterval(async () => {
	const res = await fetch("api/button-status");
	const data = await res.json();
	setButtonStatus(data.value === "1");
}, 200);

/**
 * Oled text
 */

function getOledInputValue() {
	const oledInputEl = document.getElementById("oled-input");
	const value = oledInputEl.value;
	oledInputEl.value = "";
	return value;
}

async function onOledSend() {
	await fetch("api/oled-send", {
		method: "POST",
		body: JSON.stringify({ value: getOledInputValue() }),
	});
}

/**
 * Song selection
 */

let currentSong = 0;
const nbSongs = document.getElementById("song-ol").children.length;

function setCoverImageUrl(coverUrl) {
	const coverEl = document.getElementById("song-cover");
	coverEl.setAttribute("src", coverUrl);
}

function selectCurrentSong() {
	const songEl = document.querySelector(`#song-list li[value="${currentSong}"]`);
	const coverUrl = songEl.getAttribute("cover-url");
	console.log("Selecting song: ", songEl.value, coverUrl);
	setCoverImageUrl(coverUrl);
	const oldSelectedSong = document.getElementsByClassName("song-select");
	if (oldSelectedSong[0]) {
		oldSelectedSong[0].classList.remove("song-select");
	}
	currentSong = songEl.value;
	songEl.classList.add("song-select");
}

async function updateSongInServer() {
	await fetch("api/player-set", {
		method: "POST",
		body: JSON.stringify({ value: currentSong }),
	});
}

async function getCurrentSong() {
	const res = await fetch("api/current-song");
	const data = await res.json();
	currentSong = data.value;
	selectCurrentSong();
}

getCurrentSong();

async function onSongClick(event) {
	/** @type {HTMLElement} */
	const songEl = event.target;
	if (songEl.value === currentSong || songEl.nodeName !== "LI") return;

	currentSong = songEl.value;
	selectCurrentSong()

	await updateSongInServer();
}

/**
 * Song control
 */

function setPlayButton(isPlaying) {
	if (isPlaying) {
		document.getElementById("song-play").style.display = "none";
		document.getElementById("song-pause").style.display = "block";
	} else {
		document.getElementById("song-pause").style.display = "none";
		document.getElementById("song-play").style.display = "block";
	}
}

// Fetch player pause status
setInterval(async () => {
	const res = await fetch("api/is-paused");
	const data = await res.json();
	setPlayButton(!data.value);
}, 200);

async function setPlayerPause(isPaused) {
	await fetch("api/player-pause", {
		method: "POST",
		body: JSON.stringify({ value: isPaused }),
	});
}

async function onPlay() {
	await setPlayerPause(false);
}

async function onStop() {
	await setPlayerPause(true);
}

async function onNext() {
	currentSong = (currentSong + 1) % nbSongs;
	selectCurrentSong()
	await updateSongInServer();
}

async function onPrevious() {
	currentSong = (currentSong - 1 + nbSongs) % nbSongs;
	selectCurrentSong()
	await updateSongInServer();
}
