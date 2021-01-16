#include <stdio.h>
int main()
{
	int iCounts=0,iResult=0,iArray[200];
	printf("How many numbers do you want to count? ");
	scanf("%d",&iCounts);
	for(int i=0;i<iCounts;i++)
	{
		scanf("%d",&iArray[i]);
		if(iArray[i]>5)
		iResult++;
	}
	printf("Total account is %d",iResult);
	while(1);
	return 0;
}