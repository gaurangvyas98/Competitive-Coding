#include <iostream>
 
using namespace std;
 
int main() {
	long long int n;
	cin>>n;
	int flag=0;
	int v[n],p[n];
	for(int i=0;i<n;i++)
	    cin>>v[i];
	for(int i=0;i<n;i++)
	    cin>>p[i];
	for(int i=0;i<n;i++)
	{
	    if(v[i]<p[i])
        {
            flag=1;
            cout<<"No";
            break;
        }
	}
	if(flag==0)
	    cout<<"Yes";
}