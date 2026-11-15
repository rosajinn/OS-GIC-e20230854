Class Activity

Name: Thea Rosa
ID: e20230854

#Task 1A
	What flags did you pass to open()?
I used O_WRONLY, O_CREAT, and O_TRUNC.

O_WRONLY opens the file for writing only.
O_CREAT creates the file if it does not already exist.
O_TRUNC removes any existing contents of the file before writing.

	What is 0644?
0644 is a file permission mode.

6 = owner can read and write.
4 = group can read only.
4 = others can read only.

Therefore the owner has read/write permission, while group and others have read-only permission.

	What does fopen (öutput.txt", "w") do internally?
fopen("output.txt", "w") internally opens or creates the file, prepares buffering, truncates the file if it already exists, and returns a FILE pointer. Using system calls, I had to manually call open(), write(), and close().

#Task 1B
	What does read() return?
read() returns the number of bytes actually read.

A positive value means bytes were read.
0 means end of file.
-1 means an error occurred.

This is different from fgets(), which returns a pointer to the buffer on success and NULL on failure or end of file.

	Why do you need a loop?
A file may be larger than the buffer size. Therefore read() may only read part of the file in one call. The loop continues reading until read() returns 0, indicating the end of the file.

