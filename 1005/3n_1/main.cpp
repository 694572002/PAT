#include <iostream>
#include<algorithm>
//�ο������²��͵�˼�� 
//https://blog.csdn.net/qq_36122764/article/details/82026053
//1�ӵ�һ������ʼ�������жϸ�ֵ�Ƿ�Ϊ1��������1��ֵ���п��������㣬
//ÿ�ν��п���������õ��Ľ�������д���֤�������бȽϣ�
//���������ֵ��ͬ�Ĵ���֤������˵���ô���֤�����ǹؼ��������丳ֵΪ1
//2��������������֮�������в�Ϊ1������Ϊ�ؼ����� 
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
		while(k!=1)  //�������֤������Ϊ1 
		{
			if(k%2==0)k=k/2;
			else k = (3*k +1)/2;
			
			for( j = 0;j < n;j++)  //ÿ���������������֤�������бȽϣ� 
			{
				if(num[j]==k)num[j]=1; //�����������֤������ȣ���Ѵ���֤������Ϊ1 
			}	
		}
	}
	sort(num,num+j,greater<int>()); //��������������� 

	for(int z= 0;z<n;z++)
	{
		if(num[z]!=1 && num[z+1]!=1)cout << num[z] <<' ';
		if(num[z]!=1 && num[z+1]==1)cout << num[z];
	}
}