#include <stdio.h>
int main()
{
	int iNumberA=0,iNumberB=0,iTimes=0;
	printf("How many times ?Enter a number\n");
	scanf("%d",&iTimes);
	while(iTimes--)
	{
		printf("enter a number\n");
		scanf("%d",&iNumberA);
		printf("enter another number\n");
		scanf("%d",&iNumberB);
		if(iNumberA==0&&iNumberB==0)
		{
			break;
		}
		printf("%d add %d is %d\n",iNumberA,iNumberB,iNumberA+iNumberB);
		
	}
	printf("Goodbye!\n");
	while(1);
	return 0;
	
}