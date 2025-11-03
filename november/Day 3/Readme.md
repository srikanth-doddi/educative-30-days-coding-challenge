# Number of Steps to Reduce a Binary Number to One



[![LinkedIn Post](https://img.shields.io/badge/LinkedIn%Post-232F3E?style=flat-square&logo=amazonaws&logoColor=white)](https://www.linkedin.com/posts/srikanthdoddi_coding-algorithms-binary-activity-7390906802915381248--EZC?utm_source=share&utm_medium=member_desktop&rcm=ACoAACDf8YAB5R14Kp0Qyb8FNe0OW73Ikv8GrxY) 


## Problem Statement

You are given a string, `str`, representing a binary number. Your task is to find the number of steps required to reduce this binary number to `1` by applying the following rules:

- If the number is even, divide it by 2.
- If the number is odd, add 1 to it.

It is guaranteed that all test cases will eventually reach 1.

## Constraints

- \(1 \leq \text{str.length} \leq 500\)
- `str` only consists of characters '0' or '1'.
- The binary string starts with '1' (i.e., `str[0] == '1'`).

## Example

For example, given `str = "1101"` (which is decimal 13), the steps to reduce to 1 are:

1. 13 is odd, add 1 → 14
2. 14 is even, divide by 2 → 7
3. 7 is odd, add 1 → 8
4. 8 is even, divide by 2 → 4
5. 4 is even, divide by 2 → 2
6. 2 is even, divide by 2 → 1

Total steps = 6

## Dive Deep

Try to understand the process with examples to get a clear insight into the step-by-step operations required to solve this problem.

