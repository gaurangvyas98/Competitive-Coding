#include <iostream>
 
using namespace std;
 
int main() {
    int n,count=0;
    cin>>n;
    for(int j=0;j<n;j++)
    {
        char a[100000];
         cin>>a;
         count=0;
         for(int i=0;a[i]!='\0';i++)
         {
         if(a[i]=='a' || a[i]=='e' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='U' || a[i]=='E' || a[i]=='i' || a[i]=='I' || a[i]=='O')
             count++;
         }
    
    cout<<count<<endl;
    }
}