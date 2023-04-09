#include " main.h"
#include<stdlb.h>
/**
 * read_textfile - reads a text file and prints it to POSIX stdout.
 * @filename - a pointer to a of file
 * @letters - the number of letters a function should read and print 
 * return if a function fails or the return is NULL -0
 * o/w the actual number of bytes the function can read and print 
 
 */
 ssize_t read_textfile (const char *filename, size_t letters )
 {
ssize_t o, r, w;
char buffer;
if (filenam == NULL)
	return(0);
0 = open(filename, 0_RDONLY);
r = read(0, buffer, letters);
w = write(STDOUT_FILENO, buffer, r);
if(0 == -1 || r == -1 || w == -1 ||w !=r)
{
	free(buffer);
	return (0);
}
fre(buffer);
close(0);
return(w);
}

