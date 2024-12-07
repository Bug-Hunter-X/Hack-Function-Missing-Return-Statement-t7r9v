function foo(x: int): int {
  return x + 1;
}

function bar(x: int): int {
  return foo(x) * 2;
}

function baz(x: int): int {
  return bar(x) - 1;
}

function main(): void {
  var x = 10;
  var y = baz(x);
  echo y; // Expected: 21, Actual: 20
}

// The bug is in the baz function.  It's missing a return statement. 
// The compiler does not always catch this error.