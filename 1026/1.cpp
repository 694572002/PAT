#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	
	double c1,c2;
	int hour,min,sec;
	
	cin >> c1 >> c2;
	sec =(c2-c1+50)/100; //����round������sum=(c2-c10+50)/100 
						//����ʹ��ceil���� 
	
	hour = sec/3600;
	min = sec%3600/60;
	sec = sec%3600%60;
	
	printf("%02d:%02d:%02d",hour,min,sec);
	//cout << hour << ':' << min << ':' << sec;//��ʽ���� 
	
	return 0;
}