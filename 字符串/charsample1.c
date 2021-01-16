#include <stdio.h>
int main()
{
	int iTimes=0;
	char cChar1,cChar2,cChar3;
	printf("How many chars do you want to enter? ");
	scanf("%d",&iTimes);
	getchar();//此函数如果不加，会读入换行符，导致输出错误。
	while(iTimes--)
	{
		scanf("%c%c%c",&cChar1,&cChar2,&cChar3);
		getchar();//此函数如果不加，会读入换行符，导致输出错误。
		printf("%c%c%c\n",cChar1,cChar2,cChar3);
	}
	while(1);
	return 0;
}