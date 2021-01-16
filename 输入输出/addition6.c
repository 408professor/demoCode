#include <stdio.h>
int main()
{
	int iNumberA=0,iTimes=0,iSub=0,iArrays=0;
	printf("How many arrays ?Enter a number\n");
	scanf("%d",&iArrays);
	while(iArrays--)
	{
		
		iSub=0;
		printf("How many times ?Enter a number\n");
		scanf("%d",&iTimes);
		while(1)
		{
			if(iTimes==0)
			{
				break;
			}
			printf("enter a number\n");
			scanf("%d",&iNumberA);
			iSub+=iNumberA;
			printf("sub is %d\n",iSub);
			iTimes--;
		}
		
		
	}
	
	printf("Goodbye!\n");
	while(1);
	return 0;
	
}