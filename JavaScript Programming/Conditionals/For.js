let i = 0;
for (; i < 3;) {
	console.log(i++);
	for (; i < 5;) {
		console.log(i++);
	}
}
