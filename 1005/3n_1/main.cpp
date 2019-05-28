

#include <iostream>
using namespace std;
int main(void)
{
	int n,a =0,b =0,k=0,j=0,i=0,num[100]={0},key[100]={0},max[100]={0};
	//scanf("%d",&n);
	cin >> n;
	while(k<n)cin >> key[k++];
		while(n!=1)
		{
		  if(n%2==0)
		  {
			n = n >> 1;
			num[i]=n;
			i++;
		  }
		  else
		  {
			n = (3*n+1)>>1;
			num[i]=n;
			i++; 
		  }
		}
	for(j=0;j<i-1;j++)
    {
	//	printf("%d ",num[j]);
	    cout << num[j] << " ";
	}
	cout << endl;

    for(j= 0;j<i-1;j++)
    {
  	    for(a= 0;a<k;a++)
    	{
	    	if(key[a] == num[j])max[b++]=a;
	    }
    }   
    int c=0;b=0;
   	while(c<k)
    {	

		if(c != max[b]) 
		{
			cout << key[c] << " ";
		//	c++;
		}
 	    if(c == max[b])
		{
			b++;	
    	}
		c++;
    }
   /* b = 0;
   	for(int c=0;c<b;c++)
    {	 
        if(key[c] !=max[b++])
		cout << key[c] << " ";
		
    }*/
	return 0;

}

