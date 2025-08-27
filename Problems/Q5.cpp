#include<iostream>
using namespace std;

int main(){

    int count=1,a;

    cout<<"Enter The Number : ";
    cin>>a;

while(a>10){
    
    count++;
    a/=10;
    
}



    cout<<"Digits : "<<count;
    return 0;
}