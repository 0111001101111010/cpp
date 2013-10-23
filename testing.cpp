

do {
flag[i] = TRUE;
tturn = j;
while (flag[j] && (tturn == j));
	//CRITICAL SECTION
	flag[i] = FALSE;
	//REMAINDER SECTION
} while (TRUE);

Mutual exclusion because only way thread enter critical section
when flag[j] ==FALSE or turn == TRUE.
Only way to enter section is by flipping flag[] inside loop
turn = j allows the other thread to make progress
