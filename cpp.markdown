 Notes 08/10/2013 04:44:59 AM 
-------
#inline functions use scope operations :: 
#template
#inline static line

datatypes can you list them all
-------------------------------
	-Vector
	-Stack
	-Deque
	-list
	-map
	-multimap
	-hash
08/10/2013 05:32:24 AM
Recursion
	Cases for Loops VS Recursion
	-Expressiveness - Simpler to write (recursion wins) 
	-Performance - Faster to run (performance wins)
Activation Stack
	-Activation Records 
	-Everything is actually just a loop
	-Machine and Compiler Dependent
		-Saved State				<Activation record>   				(Address)
		-Params                     <Activation record> <--- Top Frame
		-Function                   <Activation record> 
		-incomplete Activation Record  <top of record>
	-Example of above
		-dist (j=0,i=0) <--saved state
		-processDataset <--function
		-underground cables <--- function
		-main <-- top of stack
	-Stacks powerful to rewrite instead of Recursion (PROTIPZ)
	-Tail Recursive	
		****A function is called tail-recursive if each activation of the function will make at most a single recursive call, and will return immediately after that call (with no further calculation performed upon the return value from the call). Tail recursive routines have an immediate, and simple pattern of conversion.
		:Example: Binary Search- Split, look, split, look, split look

*Any recursive algorithm can be converted to an iterative form by using a stack to capture the “history” of
• local variables
General idea is:
• recursive calls get replaced by push
• depending on details, may push new values, old values, or both
• returns from recursive calls get replaced by pop
• main calculation of recursive routine gets put inside a loop
• at start of loop, set variables from stack top and pop the stack

Simplifying Recursion
• We seldom need to save every parameter and local variable.
• For example, pure inputs whose values are never changed won’t need to be put onto the stack.
• If a recursive call occurs at the very end of the routine, we might not need to set up the simulated return.
• If two or more recursive calls immediately follow one another, we can put them both on the stack immediately,
rather than simulate a return in between the two.
You need to look carefully at the algorithm you are converting to see if these or other simpliﬁcations are possible

Quicksort
• set a middle point 
  EX:  10,15,3,5,1,0,9,10,12
  Set a middle 	9->
  				When something on the left is > 9 save
  				when something on the right is < 9 swap
  				continue and reset the middle 


08/10/2013 06:48:37 AM

Algorthim Styles
* Divide and Conquer
* Generate and Test
	Not very smart method to doing things 
*BACKTRACKING IMPORTANT SHIT RIGHT HERE
	-A variation of generate-and-test is backtracking. Backtracking is a technique that can be applied to problems where you have a large, but ﬁnite number of variables, each of which may take on a number of discrete values, and there issome overall test to decide if the entire set of assignments represents an acceptable solution.
		+large
		+finite number of variables
		+overall test of discrete values is acceptable
	The essence of backtracking is:
1. Number the solution variables [v0, v1, . . . , vn-1].   
2. Number the possible values for each variable [c0, c1, . . . , ck-1].
3. Start by assigning c0 to each vi.
4. If we have an acceptable solution, stop.
5. If the current solution is not acceptable, let i = n-1.
6. If i < 0, stop and signal that no solution is possible.
7. Let j be the index such that vi= cj. If j < k-1, assign cj+1 to vi and go back to step 4.
8. But if j ¸ k-1, assign c0 to vi , decrement i, and go back to step 6.

+for sudoku
	1. 1-9 assignment
	2. possible values for each? the fuck LIKE THE REMAINING possibilities after placing one
	3. ASSIGN THE POSSIBILITIES TO EACH VARIABLE
	4. PROCEED --> if solution acceptable stop
	5. IF THE CURRENT SOLUTION IS NOT ACCEPTABLE let i = n -1 which means -> go back one variation
	6. IF I < 0 means number of variation is down to none say POOP. 
	7. 

08/10/2013 08:56:16 AM
	Sudoku self notes 