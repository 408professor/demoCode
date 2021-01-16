/*
hdoj2037 贪心算法——今年暑假不AC

“今年暑假不AC？”
“是的。”
“那你干什么呢？”
“看世界杯呀，笨蛋！”
“@#$%^&*%...”

确实如此，世界杯来了，球迷的节日也来了，估计很多ACMer也会抛开电脑，奔向电视了。
作为球迷，一定想看尽量多的完整的比赛，当然，作为新时代的好青年，你一定还会看一些其它的节目，比如新闻联播（永远不要忘记关心国家大事）、非常6+7、超级女生，以及王小丫的《开心辞典》等等，假设你已经知道了所有你喜欢看的电视节目的转播时间表，你会合理安排吗？（目标是能看尽量多的完整节目）

Input
输入数据包含多个测试实例，每个测试实例的第一行只有一个整数n(n<=100)，表示你喜欢看的节目的总数，然后是n行数据，每行包括两个数据Ti_s,Ti_e (1<=i<=n)，分别表示第i个节目的开始和结束时间，为了简化问题，每个时间都用一个正整数表示。n=0表示输入结束，不做处理。
 
Output
对于每个测试实例，输出能完整看到的电视节目的个数，每个测试实例的输出占一行。

Sample Input
12
1 3
3 4
0 7
3 8
15 19
15 20
10 15
8 18
6 12
5 10
4 14
2 9
0
 
Sample Output
5
*/
#include <stdio.h>
#include <stdlib.h>//C中没有sort函数，但是可以用qsort函数
typedef struct {
	int iStart;
	int iEnd;
}program,*pProgram;

int cmpEndTime(const void * A,const void * B)
{
	pProgram aTemp= (pProgram )A;
	pProgram bTemp= (pProgram )B;
	//return aTemp->iEnd<bTemp->iEnd;C++中sort函数的比较函数可以这么写，但是C中不起作用。
	if(aTemp->iEnd>bTemp->iEnd)
	{
		return 1;
	}
	else if(aTemp->iEnd<bTemp->iEnd)
	{
		return -1;
	}
	else{
		return 0;
	}
}

int main()
{
	int iprogramCounts=0,iTotal=1,iTemp=0;
	program ArrayProgram[200];
	printf("How many programs do you want to see?\r\n ");
	scanf("%d",&iprogramCounts);
	printf("Please enter %d programs include start and end time .\r\n ",iprogramCounts);
	for(int i = 0 ; i< iprogramCounts;i++)
	{
		scanf("%d%d",&ArrayProgram[i].iStart,&ArrayProgram[i].iEnd);
	}
	qsort(ArrayProgram,iprogramCounts,sizeof(program),cmpEndTime);
	iTemp= ArrayProgram[0].iEnd;
	for(int j = 0; j< iprogramCounts; j++)
	{
		if(ArrayProgram[j].iStart>=iTemp)
		{
			
			iTotal++;
			iTemp = ArrayProgram[j].iEnd;
		}
		//printf("%d   %d\n",ArrayProgram[j].iStart,ArrayProgram[j].iEnd);//测试排序后结构体数组输出
	}
	printf("You can see %d programs\n ",iTotal);
	while(1);
	
	return 0;
}
