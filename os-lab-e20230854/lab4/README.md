OS Lab4 -Linux I/O Redirecttion and Pipelines
Name: Thea Rosa
ID: e20230854

Objective
	This lab practiced Linux I/O redirection and pipelines using: grep, cut, wc, tee, and redirection operators.
	The goal was to select records, extract fields, count matching records, and seperate normal output from error output.

#Core1
Pipeline Stage
1. grep '^paid,' data/events.csv
	- Selected only records whose first field exactly matched the status word.
	- The pattern ^paid, prevented matching look-alike values such as paid-late
2. cut -d, -f2
	- Extracted only the quantity field from the selected records
3. wc -1
	- Counted the number of matching record.
	- It counted lines, not the quantites store in the file.

#Core2
No-Match Test
The file data/no-match.csv contained no records with my status word. 
