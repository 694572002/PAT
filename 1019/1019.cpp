#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
bool cmp(int a,int b)
{
	return a>b;
}


int main()
{
	char s1[4];
	int max,min,next;
     //输入是0-10^4的输入，不能这么写 for(int i=0;i<4;i++)
	cin >> s1;
	if(strlen(s1)==1){s1[3]=s1[0];s1[0]=s1[1]=s1[2]='0';}
	if(strlen(s1)==2){s1[3]=s1[0];s1[2]=s1[1];s1[0]=s1[1]='0';}
	if(strlen(s1)==3){s1[3]=s1[2];s1[2]=s1[1];s1[1]=s1[0];s1[0]='0';}
	//int j=4;
	while(1)//s1!="6174"
	{
		sort(s1,s1+4,cmp);
		for(int i=0;i<4;i++)
		{
			cout << s1[i];
		}
		cout << " " << "-" << " ";
		max=(s1[0]-'0')*1000+(s1[1]-'0')*100+(s1[2]-'0')*10+(s1[3]-0);
		sort(s1,s1+4);
		for(int i=0;i<4;i++)
		{
			cout << s1[i];
		}
		min=(s1[0]-'0')*1000+(s1[1]-'0')*100+(s1[2]-'0')*10+(s1[3]-0);
		next =max-min;
		//cout << " = " << next << "\n";
		s1[0] = next/1000%10+'0' ;
		s1[1] = next/100%10+'0' ;
		s1[2] = next/10%10+'0';
		s1[3] = next/1%10+'0';
		cout << " = " << s1[0] << s1[1] << s1[2] << s1[3]<< "\n";
		if(next==0 ||next==6174)break;
	}	
	return 0;
}