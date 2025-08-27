#include<iostream>
using namespace std;

int main(){

    int num=1,n;

    cout<<"Enter The Size Of The Pattern : "<<endl;
    cin>>n;

    for(int i=0; i<n;i++){
        for(int j=0;j<i;j++){
            
            cout<<" ";
        }

        for(int j=1;j<=n-i;j++){

            cout<<(i+1);
        }
        cout<<"\n";
    }

    return 0;
}