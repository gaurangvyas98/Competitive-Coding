#include <iostream>
 
using namespace std;
 
int main() {
int n;
cin>>n;
int num[n];
for(int i=0;i<n;i++)
{
    int flag=0;
    cin>>num[i];
    if(num[i]%21==0)
    {
        flag=1;
    }
    else{
        int digits[100],k=0;
        for(int j=num[i];j!=0;j/=10)
        {
            digits[k++] = j%10;
        }
        for(int j=k-1;j>0;j--)
        {
            
            if(digits[j]==2&&digits[j-1]==1)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
        cout<<"The streak lives still in our heart!"<<endl;
    else
        cout<<"The streak is broken!"<<endl;
}
return 0;
}