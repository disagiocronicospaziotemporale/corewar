.name "dav"
.comment "I only live"

l2:		sti r1, %:live, %1
		aff r1
		and r1, %0, r1

live:	live %1
		zjmp %:live
