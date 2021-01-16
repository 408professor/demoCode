#include <stdio.h>
void integerpart(int iInput);
void decimalpart(float dInput);
int main()
{
	float dNumber;
	int iIpart=0;
	printf("Enter a decimal number. \r\n");
	scanf("%f",&dNumber);
	//printf("%s",chIntpart);
	
	integerpart((int)dNumber);
	decimalpart(dNumber-(int)dNumber);
	while(1);
	return 0;
	
}

void integerpart(int iInput)
{
	int iOutput[20],iLength=0;
	if(iInput==0)
	{
		iOutput[0]=iInput;
	}else
	{                                     
		while(iInput>0)
		{
			int iRemainder=0,iResult=0;
			iRemainder=iInput%2; 
			iOutput[iLength++]=iRemainder;  //iInput%2; //为null
			iInput=iInput/2;
		}
		for(int i=0;i<iLength;i++)
		{
			printf("%d",iOutput[iLength-i-1]);
		}
	}

}

void decimalpart(float fInput)
{
	if(fInput==0)
	{
		return;//若输入整数直接返回，不写小数点。
	}
	int iOutput[20],iLength=0,iTemp=0;
	/*int i=0;
	i=2*fInput;
	printf("%d",i);//此时0.5代入为1，而(int)时，小数永为0*/
	while(8-iLength)//控制小数部分位数。
	{
		if(fInput*2>1)
		{
			fInput=(fInput*2)-1;
			iOutput[iLength++]=1;
		}
		else if(fInput*2==1)
		{
			fInput=(fInput*2)-1;
			iOutput[iLength++]=1;
			break;
		}
		else
		{
			fInput=fInput*2;
			iOutput[iLength++]=0;
		}
	}
	printf(".");
	for(int i=0;i<iLength;i++)
	{
		printf("%d",iOutput[i]);
	}
}