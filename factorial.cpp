#include<iostream>
using namespace std;
int main()
{
    int i,n;
    int fact=1;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(i=1; i<=n; i++);
    {
       fact=fact*i;
       cout<<fact;
    }


}