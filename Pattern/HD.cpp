#include<iostream>
using namespace std;

int main(){

    int n,i;
    string a;

    cout<<"Enter Whose Hollow Diamond Pattern You Want : "<<endl;
    cin>>a;

    cout<<"Enter The Size Of The Pattern : "<<endl;
    cin>>n;

    for(int i=0; i<n ;i++){

        for(int j=0;j<n-i-1;j++){
            
            cout<<" ";
        }
        
        cout<<a;
        
        if(i!=0){
            
            for(int j=0;j<(2*i)-1;j++){
                
                cout<<" ";
            }
            cout<<a;
        }

        cout<<endl;
        
    }

    for(int i=0;i<n-1;i++){

        for(int j=0;j<i+1;j++){

            cout<<" ";
        }

        cout<<a;

        if(i!=n-2){

            for(int j=0;j<2*(n-i)-5;j++){

                cout<<" ";
            }

            cout<<a;
        }

        cout<<"\n";
    }
    

    return 0;
}