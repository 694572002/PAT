#include <iostream>
using namespace std;
int main()
{
	int num[11];
	for(int i=0;i<10;i++)
	cin>>num[i];
	if(num[0]==0)//û�������� 
	{
		for(int i=1;i<10;i++)
		{
			if(num[i]!=0)
			{
				while(num[i]--)cout << i ;//�ж��ٸ�i������ٸ�i 
			}
		}
	}
	int j=1;
	if(num[0]!=0)//�������� 
	{
		while(!num[j++]);// �ҵ���С�ģ������������ 
		cout << j-1;//���һ��������С�� 
		num[j-1]--;
		for(int i=0;i<10;i++)
		{
			if(num[i]!=0)
			{
				while(num[i]--)cout << i ;
			}
		}
		
	}
	return 0;
}

