#include <stdio.h>
int main()
{
	int iNumber=0,iIter=2;
	printf("Enter a number :  ");
	scanf("%d",&iNumber);
	for(;iIter<iNumber;iIter++)
	{
		if(iNumber%iIter==0)
		break;
	}
	if(iNumber<=1||iIter<iNumber)
	{
		printf("\n%d is not a prime.",iNumber);
	}
	else
	{
		printf("\n%d is a prime.",iNumber);
	}
	while(1);
	return 0;
}
