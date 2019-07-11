#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	
	double c1,c2;
	int hour,min,sec;
	
	cin >> c1 >> c2;
	sec =(c2-c1+50)/100; //不用round函数就sum=(c2-c10+50)/100 
						//不能使用ceil函数 
	
	hour = sec/3600;
	min = sec%3600/60;
	sec = sec%3600%60;
	
	printf("%02d:%02d:%02d",hour,min,sec);
	//cout << hour << ':' << min << ':' << sec;//格式不对 
	
	return 0;
}