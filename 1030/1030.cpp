//˼·�����������������
//Ȼ��Ա� , M <=minp �Ƿ����
//��������min������һλ��ֱ������Ϊֹ��
//����������4���㲻��ͨ��
//��Ϊ������˼·��ȱ�ݣ���������
//������ѡ�񾡿��ܶ��������һ���������С�������� 

#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(long int a , long int b)
{
	return a < b;
}
int main()
{
	int flag=0;
	long int n,p,max,min,minp;
	cin >> n >> p;
	long int array[n];
	for(int i=0;i<n;i++)
	{
		cin >> array[i];
	}
	sort(array,array+n,cmp);
	max=array[n-1];
	//min=array[0];
	int j=0;
	for(int i=0;i<n;i++)
	{
		minp=array[i]*p;
		if(minp>=max)
		{
			j=i;
			flag=1;
			break;
		}
	}
	
	if(flag)cout << (n-j);
	else cout << 0;
	return 0;
}

