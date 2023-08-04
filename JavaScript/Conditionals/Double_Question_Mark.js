let user;
console.log(user ?? "Anonymous"); // Since user wasn't defined we returned the default value to the function, Anonymous
								  // ?? Would return the first *define* value while || would return the first *truthy* value

user = "John";
console.log(user ?? "Anonymous");

let firstName = null;
let lastname = null;
let nickName = "Supercode";
console.log(firstName ?? lastname ?? nickName ?? "Anonymous");
