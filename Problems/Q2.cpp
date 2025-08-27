#include<iostream>
using namespace std;

int main(){

    int a,b;

    cout<<"Enter 1st Number : "<<endl;
    cin>>a;

    cout<<"Enter 2nd Number : "<<endl;
    cin>>b;

    if(a>b){

        cout<<"The Minimum Number Is : "<<b<<endl;
    }

    else{
        cout<<"The Minimum Number Is : "<<a;
    }
    return 0;
}