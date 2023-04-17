 #include<stdio.h>
main()
{
	FILE *p;
	char data[100];
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
