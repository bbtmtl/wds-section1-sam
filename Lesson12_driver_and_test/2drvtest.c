#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int fd;
	int val = 1;
	fd = open ("/dev/zyz", O_RDWR);
	if (fd<0)
		printf("cannot open!\n");
	write(fd, &val, 4);
	
	return 0;

}
