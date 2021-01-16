#include <stdio.h>

void qucikSort(int arr[],int left,int right);
int main()
{
	
	int iStudents=0,iTemp=0,arrayScore[20];
	printf("How many students do you want to sort? \r\n");
	scanf("%d",&iStudents);
	for(int i=0; i<iStudents;i++)
	{
		printf("Enter Score \n");
		scanf("%d",&arrayScore[i]);
	}
	qucikSort(arrayScore,0,iStudents-1);
	for(int i=0; i<iStudents;i++)
	{
		printf("%d\t",arrayScore[i]);
	}
	while(1);
	return 0;
}

void qucikSort(int iArr[],int iLeft,int iRight)
{
	if(iLeft>iRight)
	return;
	int i=iLeft,j=iRight,iTemp=iArr[i];//iTemp为基准数
	while(i<j)
	{
		while(iTemp<iArr[j]&&i<j) 
		{
			j--;//当队尾的元素大于等于基准数据时,向前挪动iRight指针
		}
		if(i<j)
		{
			iArr[i++]=iArr[j];
		}
		while(iTemp>iArr[i]&&i<j)
		{
			i++;//当队首元素小于等于基准数据时,向前挪动iLeft指针
		}
		if(i<j)
		{
			iArr[j--]=iArr[i];
		}
	}
	iArr[i]=iTemp;
	qucikSort(iArr,iLeft,i-1);
	qucikSort(iArr,i+1,iRight);
}
