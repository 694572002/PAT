#include <iostream>
using namespace std;
int main()
{
	int sn,n=3,i=3,cnt=0;
	char c;
	cin >> sn >> c;
	if(sn<7)
	{
		cout << c << '\n';
	 	sn-- ;
	}
	else if(sn>=7)
	{
		sn--;
		for(i=3;sn>i;i+=2)//打印沙漏的行数 
		{
			if(sn - 2*i >= 0)
				sn = sn - 2*i;
		}
		for(int j=i-2;j>=1;j=j-2)//先打印沙漏上半部分 
		{
			
			for(int k=0;k<j;k++)
				cout << c ;
			cout << '\n';
			cnt++;//记住每多一行，下一行就多一个空格再输出 
			if(j!=1)
			{
				for(int k=0;k<cnt;k++)//输出空格 
				cout << ' ';	
			}
					
		}
		cnt--;
		for(int j=3;j<=i-2;j=j+2)//打印沙漏下半部分 
		{
			
			cnt--;
			for(int k=0;k<cnt;k++)
			cout << ' ';
			for(int k=0;k<j;k++)
				cout << c ;
			cout << '\n';
					
		}
	}

	if(sn>=0)cout << sn;
	return 0;
}