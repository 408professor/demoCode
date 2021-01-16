#include <stdio.h>
int main()
{
	
	int iStudents=0,iTemp=0,arrayScore[20];
	printf("How many students do you want to sort? \r\n");
	scanf("%d",&iStudents);// scanf返回值不等于EOF
	for(int i=0; i<iStudents;i++)
	{
		printf("Enter Score \n");
		scanf("%d",&arrayScore[i]);
	}
	for(int i=0;i<iStudents-1;i++)//比较次数
	{
		for(int j=0;j<iStudents-1;j++)//比较过程
		{
			if(arrayScore[j]>arrayScore[j+1])//比较
			{
				iTemp=arrayScore[j+1];
				arrayScore[j+1]=arrayScore[j];
				arrayScore[j]=iTemp;
			}
		}
	}                                                    
	for(int i=0; i<iStudents;i++)
	{
		printf("%d\t",arrayScore[i]);
	}
	while(1);
	return 0;
}