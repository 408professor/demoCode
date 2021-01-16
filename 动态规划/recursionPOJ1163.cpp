/*	北大POJ在上面的数字三角形中寻找一条从顶部到底边的路径，使得路径上所经过的数字之和最大。
	路径上的每一步都只能往左下或 右下走。只需要求出这个最大和即可，不必给出具体路径。 
	三角形的行数大于1小于等于100，数字为 0 - 99
	输入格式：

    5      //表示三角形的行数    接下来输入三角形

    7

    3   8

    8   1   0

    2   7   4   4

    4   5   2   6   5
	
	
MaxSum[i][j]=1.D[i][j](r=N时) 2.Max(MaxSum(r+1,j),MaxSum(r+1,j+1))+D[i][j];(其他情况)//核心公式
*/

#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

#define MAX 101
int iLine,iXpath,iYpath;
int iDot[MAX][MAX]; 
int iMaxsum[MAX][MAX]; 

int Maxsum(int x,int y)
{
	if( iMaxsum[x][y] != -1 )         
		return iMaxsum[x][y];    //不要重复计算，否则递归时会重复计算多次，导致超时。所以我们保存在这个数组里。
	if(x==iLine)   
		iMaxsum[x][y] = iDot[x][y]; //最后一行上的点，直接为端点本身。
	else{    
		iXpath = Maxsum(x+1,y);       
		iYpath = Maxsum(x+1,y+1);       
		iMaxsum[x][y] = max(iXpath,iYpath)+ iDot[x][y];  //"状态转移方程"核心公式
	}    
	return iMaxsum[x][y]; 
}
int main()
{
	int i,j;
	cin>>iLine;
	for(int i =1;i<=iLine;i++)
	{
		for(j=1;j<=i;j++)
		{
			cin>>iDot[i][j];
			iMaxsum[i][j]=-1;
		}
	}
	cout << Maxsum(1,1) << endl; 
	while(1);
	return 0;
}