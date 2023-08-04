function showMessage(text) {
	if (text === undefined) {
		text = 'Empty message';
	}
	console.log(text);
}
showMessage("Hello");
showMessage();

function showMessage2(text) {
	text = text || 'empty message';
	console.log(text);
}
showMessage('Yo');
showMessage();
