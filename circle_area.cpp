#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int height, radius, area;
    cout<<"enter the radius"<<endl;
    cin>>radius;
    cout<<"enter the  height"<<endl;
    cin>>height;
    area=3.14*height*radius*radius;
    cout<<"the area is"<<area <<endl;
    return 0;
}