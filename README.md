# Push_Swap
Using simple push and rotate operations and two stacks (A and B), this program is designed to sort any array of numbers.

NOTE: Despite being encouraged to research time complexity and a variety of sorting algorithms, this project is graded on how few stack altering operations were used to sort the stack and not the time cost of applied algorithm.

## Implementation
All numbers start as inputed in stack A. Stack B is empty.
Only numbers at the top of each stack can be pushed to the other stack.
Assigning a weight to each number in A stack gives us the order in which to place them at their final sorted position in B stack by using the least operations.

	Weight = #rotations required to push from A stack + #rotations required on B stack before getting its sorted position at the top

## Resources
Algorithmic time complexity https://www.freecodecamp.org/news/time-complexity-of-algorithms/
