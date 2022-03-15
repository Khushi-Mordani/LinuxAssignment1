#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
int main()
{
	int fd,len;
	int x;
	char read_buf[60];
	char write_buf[60]="Linux Kernel new programm!!";

	fd = open ("abc.txt",O_CREAT |O_RDWR,0777); //open and read write

	len = write(fd,write_buf,60);
	printf("data from buffer %d\n",len);

	lseek(fd,0,SEEK_SET); //To reposition of pointer
	if(fd<0)
	printf("File does not exist");

	read(fd,read_buf,len);//read from buffeer
	printf("data from buffer %s\n",read_buf);

	close(fd);
	return 0;
}
