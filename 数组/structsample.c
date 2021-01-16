#include <stdio.h>
struct student{
	int iId;
	char strName[8];
	int iScore;
}num[200];


_Bool cmpscore(struct student a,struct student b);
int main()
{
	
	int iStuCounts=0;
	printf("How many students do you want to record? ");
	scanf("%d",&iStuCounts);
	for(int i=0; i<iStuCounts;i++)
	{
		printf("Enter ID \n");
		scanf("%d",&num[i].iId);
		printf("Enter Name \n");
		scanf("%s",&num[i].strName);
		printf("Enter Score \n");
		scanf("%d",&num[i].iScore);
	}
	for(int j=0; j<iStuCounts;j++)
	{
		printf("Student %s ,ID is %d and scores %d .\n",num[j].strName,num[j].iId,num[j].iScore);
	}
	/*if(cmpscore(num[0],num[1]))
	{
		printf("%s is better than %s",num[0].strName,num[1].strName);
	}
	else
	{
		printf("%s is better than %s",num[1].strName,num[0].strName);
	}*/
	while(1);
	return 0;
}

_Bool cmpscore(struct student a,struct student b)
{
	/*按成绩排序，如果相等则按学号比较,按学号升序排列*/
	if(a.iScore==b.iScore)
	{
		return a.iId<b.iId;
	}else
	{
		return a.iScore>b.iScore;
	}
	
	
}