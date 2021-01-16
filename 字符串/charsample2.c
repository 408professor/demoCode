#include <stdio.h>
int main()
{
	int iTimes=0;
	char cChar1,cChar2,cChar3;
	printf("How many chars do you want to enter? ");
	scanf("%d",&iTimes);
	while(iTimes--)
	{
		char strInput[100]="\0";
		gets(strInput);
		printf("%s\n",strInput);
		
	}
	while(1);
	return 0;
}