//SI = P*R*t/100 
#include<iostream>
using namespace std;
float simpleintrest(float p,float r, float t){
    return (p * r * t) / 100;
}

int main (){
    float p,r,t;
    cout<<"enter the principle amount : "<<endl;
    cin>>p;
    cout<<"enter the rate of intrest : "<<endl;
    cin>>r;
    cout<<"enter the time in years : "<<endl;
    cin>>t;
    cout<<"the SI is : "<<simpleintrest(p,r,t)<<endl;
    return 0;
}