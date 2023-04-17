#include<stdio.h>
main()
{
	FILE *p;
	char data[100];
	p=fopen("FH.txt","w");
	if(p==NULL)
	{
		printf("File Not Open");
	}
	else
	{
		printf("Enter Data :");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		printf("Data Enter Sucessfully.");
	}
	fclose(p);
}
