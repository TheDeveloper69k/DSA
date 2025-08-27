//PRIME NUMBER

#include<iostream>
using namespace std;

int main(){

    int n,i;

    cout<<"Enter The Number : "<<endl;
    cin>>n;

    for(i=2;i<=n-1;i++){

        if(n%i!=0){

            cout<<n<<" is "<<"Prime Number"<<endl;
            break;

        }

        else{

            cout<<"Non - Prime Number"<<endl;
            break;
        }
    }
    return 0;
}