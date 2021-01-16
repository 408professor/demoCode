#include <stdio.h>
int main()
{
	
	int iStudents=0,iScore=0,arrayScore[101];//桶的大小是原来排序数组中最大元素的值加一，即100分。
	for(int i=0;i<=100;i++)
	{
		arrayScore[i]=0;
	}
	printf("How many students do you want to sort? \r\n");
	scanf("%d",&iStudents);
	for(int i=0; i<iStudents;i++)
	{
		printf("Enter Score \n");
		scanf("%d",&iScore);
		arrayScore[iScore]++;
	}
	for(int j=0;j<=100;j++)
	{
		
		for(int q=0;q<arrayScore[j];q++)
		{
			printf("%d\t",j);
		}
	}
	while(1);
	return 0;
}