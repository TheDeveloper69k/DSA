#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter The Value Of n"<<endl;

    cin>>n;

    for(int i=1;i<=n;i++){

    for(int j=1;j<=n;j++){

        cout<<j<<" ";
    }
    cout<<"\n";
    }

    return 0;
}