#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	string num;
	int e=0,flag2=0,mark=0,mul=0;
	double multi=0;
	char a;
	a=cin.get();
	if(a=='-')cout<<'-'; //�и��ž���� 
	cin >> num;
	for(int i=3;i<num.length();i++) //��ס�ڶ���+-�ŵ�λ�� 
	{
		if(num[i]=='+')
		{
			flag2=0;e=i;
		}	
		if(num[i]=='-') 
		{
			flag2=1;e=i;
		}
	}
	//https://blog.csdn.net/qq_41700374/article/details/82257652
	for(int i=(e+1);i<num.length();i++) //�ַ���ת���� ����0�ĸ��� 
	{
		mul = mul *10 +(num[i]-'0');
		
	}
	//cout << mul << '\n';
	if(flag2==0)
	{
		cout << num[0];
		if(mul>=((e-1)-1))
		{
			for(int i=2;i< mul+2;i++) //mul�Ǹ�����i��2��ʼ��
			{						  //������i<mul+2 
				if(i<(e-1))cout << num[i];
				else if(i >=(e-1)) cout << 0;	//���� 
			}
		}
		if(mul < ((e-1)-1))
		{
			for(int i=2;i<(e-1);i++)
			{
				
				if(i==(mul+2))cout << num[1] << num[i] ;  //�ƶ�С����
				else cout << num[i];
			}
		}
	}
	if(flag2)
	{
		//cout << num[0];
		cout << 0 << '.';
		for(int j=0;j<mul-1;j++) //���� 
		{
			cout << 0;
		}
		cout << num[0]; //С����ǰ������� 
		for(int j=2;j< (e-1);j++) //С������浽��ĸE֮������� 
		{
			cout << num[j];
		}

	}
	return 0;
}