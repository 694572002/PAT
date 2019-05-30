#include <iostream>
#include<algorithm>
//参考了以下博客的思想 
//https://blog.csdn.net/qq_36122764/article/details/82026053
//1从第一个数开始，首先判断该值是否为1，将不是1的值进行卡拉兹运算，
//每次进行卡拉兹运算得到的结果与所有待验证的数进行比较，
//如果发现有值相同的待验证数，则说明该待验证数不是关键数，将其赋值为1
//2将所有数检测完毕之后，数组中不为1的数即为关键数。 
using namespace std;
int main()
{
	int i=0,n,num[100];
	int j= 0; 
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> num[i];
	}
	for(i=0;i<n;i++)
	{
		int k = num[i];
		while(k!=1)  //如果待验证的数不为1 
		{
			if(k%2==0)k=k/2;
			else k = (3*k +1)/2;
			
			for( j = 0;j < n;j++)  //每次运算结果都与待验证的数进行比较， 
			{
				if(num[j]==k)num[j]=1; //运算结果与待验证的数相等，则把待验证的数设为1 
			}	
		}
	}
	sort(num,num+j,greater<int>()); //数组进行升序排列 

	for(int z= 0;z<n;z++)
	{
		if(num[z]!=1 && num[z+1]!=1)cout << num[z] <<' ';
		if(num[z]!=1 && num[z+1]==1)cout << num[z];
	}
}