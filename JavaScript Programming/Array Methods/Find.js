let users = [
	{id: 1, name: "John"},
	{id: 2, name: "Pete"},
	{id: 3, name: "Mary"},
];

console.log(users.find(item => item.id == 1).name);
