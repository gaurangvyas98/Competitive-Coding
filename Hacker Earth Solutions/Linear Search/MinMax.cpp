#include <iostream>
 
using namespace std;
 
int main() {
    int n,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    long long int max=a[0];
    long long int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
            min=a[i];
        if(a[i]>max)
            max=a[i];
    }
    cout<<sum-max<<" "<<sum-min;
    
}