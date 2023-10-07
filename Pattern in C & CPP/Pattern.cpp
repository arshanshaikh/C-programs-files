#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main(){
    int i,j,n;
    char ch;
    cout<<"Enter no. of lines in pattern: ";
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=i;j<i+n;j++)
        {
            ch = (char)j+64;
            cout<<ch;
        }
        cout<<"\n";
    }
    return 1;
}