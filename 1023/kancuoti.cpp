//������ɵĺ�����ǣ�������һ���µ���Ŀ 
//�������һ�����֣�����������50��Ȼ�������С����
#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(int a ,int b)
{
	return a<b;
}
int main()
{
	int num[51],i=0;int k=1;
	while(cin >> num[i++]) //�������ɸ���δ֪������int
	{
		if(cin.get()=='\n')break;
	}
	sort(num,(num+i),cmp);
	if(num[0]!=0)//û���㣬ֱ����� 
	{
		for(int j=0;j<i;j++)cout << num[j];	
	}
	if(num[0]==0)//���� 
	{
			while(num[k++]==0);
			cout << num[k-1];//���һ��������С�� 
			for(int a=0;a<i;a++)
			{
				if(a==(k-1))continue;
				cout << num[a] ;
			}	
	}
	return 0;
} 