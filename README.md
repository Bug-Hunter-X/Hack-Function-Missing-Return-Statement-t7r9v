# Hack Function Missing Return Statement Bug

This repository demonstrates a subtle bug in Hack where a missing return statement in a function can lead to unexpected behavior. The compiler doesn't always consistently catch this type of error, making it a potential source of unexpected runtime issues.

## Bug Description
The `baz` function is missing a return statement in the original code. This leads to the function returning an undefined value, resulting in an incorrect calculation in the `main` function. The compiler sometimes fails to detect this. This is a common error that might not be apparent immediately due to compiler not always throwing errors. 

## How to Reproduce
1. Clone this repository.
2. Compile and run the `bug.hh` file.  Observe the incorrect output.
3. Compare this to the fixed code in `bugSolution.hh`.

## Solution
The solution involves adding a explicit return statement to the baz function.  This ensures the function returns the expected value.