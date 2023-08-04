let arr = ["Bilbo", "Gandalf", "Nazgul"];
arr.forEach((item, index, beans) => {
	console.log(item + " " + index + " " + beans);
});

/* Under the hood
 * Array.protoupe.forEach = function (callback) {
 * 	   if (callback && typeof callback === 'function') {
 * 	       for (var i = 0; i < this.length; i++ {
 *             callback(this[i], i, this);
 * 	       }
 * 	   }
 * }
 * */

["beans", "apples", "bananas"].forEach(console.log);
["beans", "apples", "banan"].forEach((item, index, array) => {
	console.log(`${item} is at index ${index} in ${array}`);
});
