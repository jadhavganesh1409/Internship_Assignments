let add = (x, y) => {
  console.log(x + y);
};

add(2, 4);
// Using Bind Method
let addTwo = add.bind(this, 2);
addTwo(10);

let addThree = add.bind(this, 3);
addThree(10);

// Using closures
let multiply = (x) => {
  return (y) => {
    console.log(x * y);
  };
};

let multiplyByTwo = multiply(2);
multiplyByTwo(4);

let multiplyByThree = multiply(3);
multiplyByThree(4);
