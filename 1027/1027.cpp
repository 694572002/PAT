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
		for(i=3;sn>i;i+=2)//��ӡɳ©������ 
		{
			if(sn - 2*i >= 0)
				sn = sn - 2*i;
		}
		for(int j=i-2;j>=1;j=j-2)//�ȴ�ӡɳ©�ϰ벿�� 
		{
			
			for(int k=0;k<j;k++)
				cout << c ;
			cout << '\n';
			cnt++;//��סÿ��һ�У���һ�оͶ�һ���ո������ 
			if(j!=1)
			{
				for(int k=0;k<cnt;k++)//����ո� 
				cout << ' ';	
			}
					
		}
		cnt--;
		for(int j=3;j<=i-2;j=j+2)//��ӡɳ©�°벿�� 
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