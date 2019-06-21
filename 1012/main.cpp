#include <iostream>
using namespace std;
/*
A1 = 能被 5 整除的数字中所有偶数的和；
A2 = 将被 5 除后余 1 的数字按给出顺序进行交错求和，即计算 n1-n2+n3-n4...；
A3 = 被 5 除后余 2 的数字的个数；
A4 = 被 5 除后余 3 的数字的平均数，精确到小数点后 1 位；
A5 = 被 5 除后余 4 的数字中最大数字。
*/
int main()
{

	int n,A4_cnt=0,flag0=0,flag1=0,A5_max=0;
	double A4=0,A4_sum=0.0;
	cin >> n;
	int num[n];
	int A1=0,A2=0,A3=0,A5=0;
	for(int i =0;i<n;i++)
	{
		cin >> num[i];
	}
	for(int j =0; j<n; j++)
	{
		if((num[j]%5)==0 && (num[j]%2) ==0)
		{
				A1 +=num[j];
				flag0=1;	
		}
		if((num[j]%5)==1)
		{
			
			if((flag1%2)==0)
			{
				A2 +=num[j];
				
			}
			if((flag1%2)==1)
			{
				A2 -=num[j];
				
			}
			flag1++;				
		}
		if((num[j]%5)==2)
		{
			A3++;
		}
		if((num[j]%5)==3)
		{
			A4_cnt++;
			A4_sum += num[j];
			A4 = A4_sum /A4_cnt;
			
		}
		if((num[j]%5)==4)
		{
			if(num[j]>A5)A5=num[j];			
		}
	}
	if(A1==0 && flag0 == 0)cout << 'N' << " ";
	else cout << A1 << " ";
	if(A2==0 && flag1 == 0)cout << 'N' << " ";
	else cout << A2 << " ";
	if(A3==0)cout << 'N' << " ";
	else cout << A3 << " ";
	if(A4==0)cout << 'N' << " ";
	else printf("%.1f ",A4);
	if(A5==0)cout << 'N' ;
	else cout << A5 ;
	return 0;
	
}
