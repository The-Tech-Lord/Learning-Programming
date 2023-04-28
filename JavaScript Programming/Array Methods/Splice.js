// Removes Index 1
let arr = ["I", "study", "JavaScript"];
arr.splice(1, 1);
console.log(arr);

// Replace Index 0-3 with "Let's", "dance"
let arr2 = ["I", "study", "JavaScript", "right", "now"];
arr2.splice(0, 3, "Let's", "dance");
console.log(arr2);

// Delete first two values
let arr3 = ["I", "study", "JavaScript", "right", "now"];
arr3.splice(0, 2);
console.log(arr3);

// Insert without deleting
let arr4 = ["I", "study", "JavaScript"];
arr4.splice(2, 0, "complex", "language");
console.log(arr4);
