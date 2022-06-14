const memoize = (func) => {
  const cache = {};
  return (...args) => {
    const argsKey = JSON.stringify(args);
    if (!cache[argsKey]) {
      cache[argsKey] = func(...args);
    }
    return cache[argsKey];
  };
};

const square = memoize((number) => {
  let total = 0;
  for (let index = 0; index < number; index++) {
    for (let index2 = 0; index2 < number; index2++) {
      total++;
    }
  }
  return total;
});

const startTime = new Date();
console.log(square(3000));
console.log("Time: ", new Date() - startTime);

const startTime2 = new Date();
console.log(square(3000));
console.log("Time: ", new Date() - startTime2);
