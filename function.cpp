#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int add(int x, int y)
{
    int z;
    z=x+y;
    return z;
}

int main()
{
   int a,b;
   cout<<"enter the nummber"<<endl;
   cin>>a>>b;
   cout<<add(a,b); 
}
