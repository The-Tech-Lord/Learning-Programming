let welcome;
let age = 21;
if (age < 18) {
	welcome = function() {
		console.log("Hello!");
	}
} else {
	welcome = function() {
		console.log("Greetings!");
	}
}
welcome();

let welcome2 = (age < 18) ?
	function() { console.log("Hello!"); } :
	function() { console.log("Greetings!"); };
welcome2();
