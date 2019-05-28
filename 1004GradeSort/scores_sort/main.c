#include <stdio.h>

struct student
{
	char name[11];
	char num[11];
	int scores;
};

int main()
{
	int cnt=0,i,j,max=0,min=0;
	scanf("%d",&cnt);
	struct student stu[cnt];
	for(i=0;i<cnt;i++)
	{
		scanf("%s %s %d",&stu[i].name,&stu[i].num,&stu[i].scores);
	}
	//printf("name:%s,num:%s,scores:%d\n",stu[0].name,stu[1].num,stu[2].scores);
	
	
	for(j=1;j<cnt;j++)
	{
		if(stu[j].scores > stu[max].scores)max=j;
		if(stu[j].scores < stu[min].scores)min=j;
	}
	printf("%s %s\n",stu[max].name,stu[max].num);
	printf("%s %s",stu[min].name,stu[min].num);
	
	return 0;
}
