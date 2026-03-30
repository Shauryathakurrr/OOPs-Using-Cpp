//print prime numbers from 1 to 100
#include<iostream>
using namespace std;
void print(){
    for(int i=1;i<=100;i++){
        int count = 0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            cout<<i<<" ";
        }
    }
}
int main(){
    print();
    return 0;
}