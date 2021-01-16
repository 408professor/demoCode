/*
	        最好情况	                        最坏情况
选择排序	比较N*（N-1）/2次，交换0次			比较N*（N-1）/2次，交换N*（N-1）/2次，赋值N*（N-1）/2次
插入排序	比较N-1次，交换0次					比较N*（N-1）/2次，交换N*（N-1）/2次，赋值3*N*（N-1）/2次

那么观察该复杂度公式得出已下结论：
	从比较次数来看：序列越有序则插入排序所需比较次数越少；而选择排序比较次数恒为N*（N-1）/2次。
	从赋值情况来看：在相同比较次数下(也就是最坏情况下)，选择排序比插入排序和改进插入排序赋值次数少。
	因此，对于改进插入排序和选择排序的比较，不能笼统的说谁快，而是要根据具体情况的。取决于序列的有序程度。*/
#include <stdio.h>
int main()
{
	
	int iStudents=0,iMin=0,iTemp=0,arrayScore[20];
	printf("How many students do you want to sort? \r\n");
	scanf("%d",&iStudents);
	for(int i=0; i<iStudents;i++)
	{
		printf("Enter Score \n");
		scanf("%d",&arrayScore[i]);
	}
	for(int i=0;i<iStudents;i++)
	{
		iMin = i;//假设第一个元素就是最小的
		for(int j =i+1;j<iStudents;j++)
		{
			if(arrayScore[j]<arrayScore[iMin])
			{
				iMin=j;//保存最小元素的下标,多次覆盖导致变成最小。
			}
		}
			iTemp=arrayScore[iMin];
			arrayScore[iMin]=arrayScore[i];
			arrayScore[i]=iTemp;
	}
	for(int i=0; i<iStudents;i++)
	{
		printf("%d\t",arrayScore[i]);
	}
	while(1);
	return 0;
}