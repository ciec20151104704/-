#include "stdio.h"
#include "stdlib.h"
int main()
{
	char str[88];
	FILE *fp;
	char ch;
	fp=fopen("export.gpx","r");
	
	if(fp==NULL)
	{
		printf("打开文件错误，可能文件不存在");
		exit(-1); 
	}
	else
    {
    ch=fgetc(fp);
	while(fgets(str,20,fp)!=NULL)	
	{
	printf("%s",str);
	}
	fclose(fp);
    }
    return 0;
	
}

