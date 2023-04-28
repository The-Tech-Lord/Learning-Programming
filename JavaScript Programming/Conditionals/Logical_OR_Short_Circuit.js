let a;
let b = null;
let c = undefined;
let d = 4;
let e = 'five';

// Once it hits the first truthy value it short circuits
// and any other possibly truthy values after wouldn't be considered
let f = a || b || c || d || e;
console.log(f);
