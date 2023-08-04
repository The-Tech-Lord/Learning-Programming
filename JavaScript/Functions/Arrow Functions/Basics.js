let func = () => console.log("Hello world!");
func();

let add = (a, b) => a + b;
console.log(add(5, 6));

let age = 15;
let welcome = (age < 18) ?
	() => console.log("Hello!") :
	() => console.log("Greetings!");
welcome();

let sum = (a, b) => {
	let result = a + b;
	return result;
};
console.log(sum(5, 7));

// Practice
function ask(question, yes, no) {
	if (confirm(question)) yes();
	else no();
}

ask(
	"Do you agree?",
	function() { console.log("You agreed"); },
	function() { console.log("You canceled the execution"); }
);

function ask2(question, yes, no) {
	if (confirm(question)) yes();
	else no();
}

ask2 (
	"Do you agree?",
	() => console.log("You agreed"),
	() => console.log("You canceled the execution")
);
