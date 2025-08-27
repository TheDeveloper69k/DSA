#include<iostream>
using namespace std;

int main(){

    int n;
    string a;

    cout<<"Enter Whose Pattern You Want : "<<endl;
    cin>>a;

    cout<<"Enter The Size Of Pattern : "<<endl;
    cin>>n;

    for(int i = 1; i<=n; i++){

        for(int j=1; j<=n; j++){

            cout<<a<<" ";
        }
        cout<<"\n";
    }
    return 0;
}