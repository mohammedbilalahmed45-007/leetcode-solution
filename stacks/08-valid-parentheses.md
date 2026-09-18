## Problem: Valid Parentheses (Easy–Medium)

**Link:** [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)

### Approach
Use a stack for opening brackets. Every closing bracket must match the most recent opening bracket.

### Complexity
- Time: O(n)
- Space: O(n)

### Notes
Incorrect nesting such as ([)] returns false.
