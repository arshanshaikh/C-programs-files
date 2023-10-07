#include<iostream>
using namespace std;

int main(){
    int i,j,n,space;
    cout<<"Enter the number of line:";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(space=0;space<=n-i;space++)
        {
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    for(i=n-1;i>=1;i--)
    {
        for(space=0;space<=n-i;space++)
        {
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    


}