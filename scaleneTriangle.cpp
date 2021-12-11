#include<iostream>
using namespace std;
#include<stdlib.h>
#include<math.h>

float findArea(float a, float b, float c)
{   
    {
        
    }
    
    float s=(a+b+c/2);
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main()
{
    float a; 
    float b;
    float c;

    cout<<"enter the sides of scalene triangle"<<endl;

    cin>>a;
    cin>>b;
    cin>>c; 
  
    cout<< "Area is " << findArea(a, b, c); 
    return 0; 

}