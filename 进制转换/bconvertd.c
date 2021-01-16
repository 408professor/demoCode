#include <stdio.h>
#include <string.h>//字符串查找小数点
#include <math.h> //幂函数
int main()
{
	
	float dNumber;
	int iIpart=0,iLength=0,iNum=0,iIndex=0,iIntLength=0,iDeltLength=0;
	char strInput[100]="\0";
	char * strInt=NULL;
	char * strDelt="\0";
	printf("Enter a binary number. \r\n");
	gets(strInput);
	for(int i =0;strInput[i]!='\0';i++)
	{
		iLength++;//无法用sizeof得到长度。
	}
	if(strchr(strInput,'.'))
	{
		strInt=strtok(strInput,".");
		strDelt= strtok(NULL,".");
		iIntLength=strlen(strInt);
		for(int i=0;strInt[i]!='\0';i++,iIndex++)//这里第二个条件也可以用长度，为了强调用法
		{
			if(strInt[iIntLength-i-1]=='1')
			{
				iNum+=pow(2,iIndex);
			}
		}
		if(strDelt!=NULL)//这里只能用NULL判断，用长度或者首元素都会访存错误。
		{
			iDeltLength=strlen(strDelt);
			iIndex=-1;
			for(int i=0;i<iDeltLength;i++,iIndex--)
			{
				if(strDelt[i]=='1')
				{
					dNumber+=pow(2,iIndex);
				}
			}
			printf("%f",(float)(iNum+dNumber));
		}
		else
		{
			printf("%d",iNum);
		}
	
	}
	else
	{
		for(int i=0;i<iLength;i++,iIndex++)
		{
			if(strInput[iLength-i-1]=='1')
			{
				iNum+=pow(2,iIndex);
			}
		}
		printf("%d",iNum);
	}
	while(1);
	return 0;
}