#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
int main()
{
	struct stat std;
	int fd;
	
	stat("L1A1Q1.c", &std);
	printf("File size =%lu\n",(std.st_size));
	
	printf("File inode =%lu \n", std.st_ino);
	
	printf("size disc of blocks =%lu \n",std.st_blksize);
	
	printf("\n \n");
	close(fd);
	return 0;
}
