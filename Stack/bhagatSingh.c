#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void usleep();
int main()
{
    FILE *fp;
	char ch;
	
	fp=fopen("bhagatsingh.txt","r");
	if(fp==NULL)
	{
		printf("\n\t\a*************** Error -> File does not exit ***************************");
	}
	else
	{
	
    while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
        {
		   break;
        }
		   printf("%c",ch);
           usleep(100000);
          
	}
    }
	
	fclose(fp);
    return 0;
}