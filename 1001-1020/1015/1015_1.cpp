#include<iostream>
#include <algorithm>
using namespace std;
struct student
{
	int idnum;
	int moral;
	int talent;
};
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
int main()
{
	int n,L,H,cnt=0,a=0,b=0,c=0,d=0;
	cin >> n >> L >> H;
	student std0[n], std1[n],std2[n],std3[n],std4[n];
	for(int i=0;i<n;i++)
	{
		cin >> std0[i].idnum >> std0[i].moral >> std0[i].talent;
	}
	
	for(int i=0;i<n;i++)
	{
		
		if(std0[i].moral<L || std0[i].talent<L)continue;//两个分数都不到线 
		if(std0[i].moral >=L && std0[i].talent>=L)
		{
			cnt++;
			if(std0[i].moral>=H && std0[i].talent>=H)
			{
				std1[a++]=std0[i];
			}
			else if(std0[i].moral>=H && std0[i].talent<H)
			{
				std2[b++]=std0[i];
			}
			else if(std0[i].moral < H && std0[i].talent < H && std0[i].talent<=std0[i].moral)
			{
				std3[c++]=std0[i];
			}
			else
			{
				std4[d++]=std0[i];
			}
		}

	}
	cout << cnt << "\n";
	if(a)sort(std1,(std1+a),cmp);
	if(b)sort(std2,(std2+b),cmp);
	if(c)sort(std3,(std3+c),cmp);
	if(d)sort(std4,(std4+d),cmp);
	for(int i=0;i<a;i++)
	{
		printf("%d %d %d\n",std1[i].idnum,std1[i].moral,std1[i].talent)	;	
	}
	for(int i=0;i<b;i++)
	{
		printf("%d %d %d\n",std2[i].idnum,std2[i].moral,std2[i].talent)	;
	}
	for(int i=0;i<c;i++)
	{
		printf("%d %d %d\n",std3[i].idnum,std3[i].moral,std3[i].talent)	;
	}
	for(int i=0;i<d;i++)
	{
		printf("%d %d %d\n",std4[i].idnum,std4[i].moral,std4[i].talent)	;	
	}
	return 0;
}