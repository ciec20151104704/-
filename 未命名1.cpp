#include<stdio.h>
#include<stdlib.h>
int main()
{

	FILE *fp;
	char *s;
	int len=0;
	fp=fopen("vbn.txt","r");

	fseek(fp,0,SEEK_END);
	len=ftell(fp);
	s=(char *)malloc(len);
	printf("lenth=%d\n",len);
	fclose(fp);
	return 0;
}







