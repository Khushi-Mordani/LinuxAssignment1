#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>

int main()
{
	int fd,len;
	
	char writebuf[300]="Hello! how are you?";
	char readbuf[300];
	
	fd=open("data.txt",O_CREAT|O_RDWR,777);
	len = write(fd,writebuf,300);
	printf("return value of write option:%d\n",len);
	
	printf("SEEK_SET:%ld\n",lseek(fd,0,SEEK_SET));
	
	lseek(fd,4,SEEK_SET);
	printf("SEEK_CURR:%ld\n",lseek(fd,0,SEEK_CUR));
	
	
	printf("SEEK_END:%ld\n",lseek(fd,0,SEEK_END));
	
	read(fd,readbuf,len);
	printf("Data from buffer: %s\n",readbuf);
	
	close(fd);
	return 0;		
}
