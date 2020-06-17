#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		stack<int> s,s1;
		int a[n],f[n];
		int *hash=new int[100001];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			hash[a[i]]++;
		}
		for (int i = n - 1; i >= 0; i--)
    	{
        	while (!s.empty() && s.top() <= hash[a[i]])
			{
            	s.pop();
				s1.pop();
			}
        	if (s.empty())
			{
            	f[i] = -1;
			}
        	else
			{
            	f[i] =a[s1.top()];
			}
        	s.push(hash[a[i]]);
			s1.push(i);
    	}
		for(int i=0;i<n;i++)
		{
			cout<<f[i]<<" ";
		}
		cout<<endl;
	}
}
