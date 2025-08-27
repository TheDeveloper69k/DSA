//SQUARE PATTERN

#include<iostream>
using namespace std;

int main(){

    int n,i,j,k;
    string a;

    cout<<"Enter Whose Pattern You Want"<<endl;
    cin>>a;

    cout<<"Enter The Value Of n"<<endl;
    cin>>n;

    for(j=1;j<n;j++){

        cout<<a;
    }

    for(i=0;i<n;i++){

        cout<<a;

        
        if(i!=0 && i!=n-1){
            
            for(int j=0; j<n-2;j++){
                
                cout<<" ";
                
            }
            
            cout<<a;
        }
        
        if(j==0 && j==n){
    
            for(int k=1;k<n;k++){
    
                cout<<a;
            }
        }

        if(i==n-1){

            for(k=1;k<n;k++){

                cout<<a;
            }
        }
        
        cout<<endl;

    }

    return 0;
}