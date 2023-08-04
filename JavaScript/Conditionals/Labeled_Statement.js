outerloop:
for (var i = 0; i < 5; i++) {
	console.log("A");

	innerloop:
	for (var j = 0; j < 5; j++) {
		if (j > 3) break;
		if (i == 2) break innerloop; // Seems to be syntax exclusive to labels for break and continue
		if (i == 4) continue outerloop;
		console.log("B");
	}
}
