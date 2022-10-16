#include<stdio.h>
main()
{
	char gender,ms;
	int age;
	printf("Enter the gender M/m/F/f\n");
	scanf("%c",&gender);
	if(gender=='M' || gender=='m' || gender=='F' || gender=='f')
	{
		printf("Enter ur marital status R/r/U/u\n");
		fflush(stdin);
		scanf("%c",&ms);
		if(ms=='R' || ms=='r' || ms=='U' || ms=='u')
		{
			printf("Enter ur age\n");
			scanf("%d",&age);
			if(age>=18 && age<=20)
			{
				printf("pension alotted 5000\n");
			}
			else
			{
				printf("not eligible");
			}
		}
		else
		{
			printf("invalid marital status\n");
		}
	}
	else
	{
		printf("invalid gender");
	}
}
