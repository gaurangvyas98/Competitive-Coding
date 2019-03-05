
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n,k,count=1;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
    cin>>k;
    sort(a,a+n);
    for(int i=0;i<n;i++)
	{
	    if(a[i]==a[i+1])
	    {
	        count++;
	    }
	    else if(count==k)
	    {
	        cout<<a[i];
	        break;
	    }
	    else
	        count=1;
	}
}