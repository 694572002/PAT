#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N,L,H;//��������N<100000,���¼ȡ������L>=60,HΪ����¼ȡ���� 
const int kind=4;
struct student
{
	int idnum;
	int moral;
	int talent;
}a;
bool cmp(student a,student b)
{
	if(a.moral+a.talent == b.moral+b.talent)
	{
		if(a.moral==b.moral)
			return a.idnum< b.idnum;
		else
			return a.moral>b.moral;
	}
	else
		return a.moral+a.talent > b.moral+b.talent;
}

vector<student> ans[kind];

int main()
{
	cin >> N >> L >> H;
	int num =0;
	for(int i=0;i<N;i++)
	{
		scanf("%d %d %d",&a.idnum,&a.moral,&a.talent);
		if(a.moral>=L && a.talent>=L)
		{
			if(a.moral>=H &&a.talent>=H)//��һ��
				ans[0].push_back(a);
			else if(a.moral>=H &&a.talent<H)//�ڶ���                                                                                                                                                                                               
				ans[1].push_back(a); 
			else if(a.moral<H && a.talent<H && a.talent<a.moral)
				ans[2].push_back(a);        //������ 
			else
				ans[3].push_back(a);      //������ 
			num++;
		}
	}
	cout << num <<endl;
	for(int i=0;i<kind;i++)
	{
		sort(ans[i].begin(),ans[i].begin()+ans[i].size(),cmp);
		for(int j=0;j<ans[i].size();j++)
		{
			printf("%d %d %d\n",ans[i][j].idnum,ans[i][j].moral,ans[i][j].talent);
		}
	}
	return 0;
}