#include<iostream>
using namespace std;
struct birth
{
	char name[6];
	int year;
	int mon;
	int day;
};
int main()
{
	int n,cnt,old_year,old_mon,old_day,younge_year,younge_mon,younge_day,younge_i=0,old_i=0;
	cin >> n;
	cnt=n;
	birth a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%s %d/%d/%d",&a[i].name,&a[i].year,&a[i].mon,&a[i].day);

	}
	//cout << a[0].name << ' ' <<a[0].year;
	younge_year=old_year=a[0].year;
	younge_mon=old_mon=a[0].mon;
	younge_day=old_day=a[0].day;
	for(int i=0;i<n;i++)
	{
		if(a[i].year > 2014 || a[i].year < 1814){cnt--;continue;}
		if((a[i].year ==2014 && a[i].mon>9) ||(a[i].year ==2014 && a[i].mon==9 && a[i].day>6)){cnt--;continue;}
		if((a[i].year ==1814 && a[i].mon<9) ||(a[i].year ==1814 && a[i].mon==9 && a[i].day<6)){cnt--;continue;}
		
		if(younge_year < a[i].year || (younge_year == a[i].year && younge_mon < a[i].mon) || (younge_year == a[i].year && younge_mon == a[i].mon && younge_day < (a[i].day-1)))
		{
			younge_year=a[i].year;
			younge_mon=a[i].mon;
			younge_day=a[i].day;
			younge_i=i;
		}
		if(old_year > a[i].year || (younge_year == a[i].year && younge_mon > a[i].mon) || (younge_year == a[i].year && younge_mon == a[i].mon && younge_day > (a[i].day+1)))
		{
			old_year=a[i].year;
			old_mon=a[i].mon;
			old_day=a[i].day;
			old_i=i;
		}
	}
	cout << cnt << ' ';
	if(cnt)cout << a[old_i].name << ' ' << a[younge_i].name;
	
	return 0;
}
///
/*
#include<iostream>
#include<string>
using namespace std;
struct pep//利用结构来存储3个相似的变量
{
  string name,data;
}a,young,old;
int main()
{
  int n,num=0;
  string up="2014/09/06",down="1814/09/06";//利用string的性质来直接比较大小
  young.data=down;
  old.data=up;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a.name>>a.data;
    if(a.data>=down&&a.data<=up)
    {
      num++;
      if(a.data>young.data)
      young=a;
      if(a.data<old.data)
      old=a;
    }
}
if(num)
{
  cout<<num<<" "<<old.name<<" "<<young.name;
}
else
{
  cout<<0;
}
return 0;
}
*/
