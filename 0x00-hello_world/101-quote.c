#include<unistd.h>

/**
 * main - Entry point
 *
 * Description: print a array using write function
 * 	write(int fd,const void *buf,size_t count);
 * 	
 * Return 1 (Failed)
*/

int main(void)
{

	char arr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, arr, 59);
	return(1);
}
