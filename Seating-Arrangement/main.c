#include <stdio.h>
#include<string.h>
int main()
{
	char q[10];
	int t,y,r,s,z;
	scanf("%d", &t);              			
	if(t>=1 && t<=100000)
	{
		int a[t];
		for(int i=0;i<t;i++)
		{
			scanf("%d",&a[i]);
		}
		for(int i=0;i<t;i++)
		{
			if(a[i]>=1 && a[i]<=108)
			{
				y=a[i]%12;
				z=a[i]/12;
				if(y!=0)
				{
					r=12-y+1;
					s=12*z+r;
				}
				else
				{
					z=z-1;
					r=+1;
					s=12*z+r;
				}
				if(y==0 || y==1 || y==6 || y==7)
				{
					strcpy(q,"WS");
				}
				else if(y==2 || y==11 || y==5 || y==8)
				{
					strcpy(q,"MS");
				}
				else
				{
					strcpy(q,"AS");
				}
 
				printf("%d %s\n",s,q);
			}
		}
		
	}
	return 0;
}
