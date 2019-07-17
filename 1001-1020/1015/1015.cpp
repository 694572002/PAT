#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N,L,H;//考生总数N<100000,最低录取分数线L>=60,H为优先录取分数 
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
			if(a.moral>=H &&a.talent>=H)//第一类
				ans[0].push_back(a);
			else if(a.moral>=H &&a.talent<H)//第二类                                                                                                                                                                                               
				ans[1].push_back(a); 
			else if(a.moral<H && a.talent<H && a.talent<a.moral)
				ans[2].push_back(a);        //第三类 
			else
				ans[3].push_back(a);      //第四类 
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