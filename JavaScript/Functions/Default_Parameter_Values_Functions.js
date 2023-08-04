function someFunction() {
	return "AAAAAAAAAAAAAAAAAAAAAA";
}

function showMessage(from, text = someFunction()) {
	console.log(from + ": " + text);
}
showMessage("Anna", "Yoyo");
showMessage("Anna");
