#include<stdio.h>

main()
{
	int s,e,i;
	
	FILE *even;
	FILE *odd;
	even= fopen("Even Value.txt","w");
	odd= fopen("Odd Value.txt","w");
	
	printf("Enter The Starting Value: ");
	scanf("%d",&s);
	printf("Enter The Ending Value: ");
	scanf("%d",&e);
	
	printf("Even Values Are: ");
	for(i=s;i<=e;i++)
	{
		if(i%2==0)
		{
			fprintf(even,"Even Values: %d\n",i);
			printf(" %d,",i);
		}
	}
	printf("\nOdd Values Are:");
	for(i=s;i<=e;i++)
	{
		if(i%2!=0)
		{
			fprintf(odd,"Odd Values: %d\n",i);
			printf(" %d,",i);
		}
	}
}