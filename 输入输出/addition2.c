#include <stdio.h>
int main()
{
	int iNumberA=0,iNumberB=0;
	while(1)
	{
		printf("enter a number\n");
		scanf("%d",&iNumberA);
		printf("enter another number\n");
		scanf("%d",&iNumberB);
		printf("%d add %d is %d\n",iNumberA,iNumberB,iNumberA+iNumberB);
		
	}

	return 0;
	
}