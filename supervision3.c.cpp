#include<stdio.h>
main()
{
	FILE *p;
	char data[100];
	p=fopen("FH.txt","a");
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
		printf("Data Enter Sucessfully...");
	}
	fclose(p);

printf("\n<--------------------------------------------------->");
    
    	p=fopen("FH.txt","r");
	if(p==NULL)
	{
		printf("File Not Open");
	}
	else
	{
		while(fgets(data,50,p)!=NULL)
		{
		 printf("%s",data);
		}
	}
	fclose(p);
}
