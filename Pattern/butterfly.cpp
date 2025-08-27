#include<iostream>
using namespace std;

int main(){
    
    int n;
    string a;

    cout<<"Enter Whose Pattern You Want"<<endl;
    cin>>a;

    cout<<"Enter The Value Of n"<<endl;
    cin>>n;

    for(int i=0;i<n;i++){ 

        for(int j=0;j<i+1;j++){

            cout<<a;
        }

        if(i!=n-1){

            for(int j=0;j<2*(n-2-i)+2;j++){

                cout<<" ";
            }

    }

          for(int k=0;k<i+1;k++){

                cout<<a;
            }
            
            cout<<endl;
}

    for(int i=0;i<n;i++){

        for(int j=0;j<n-i;j++){

            cout<<a;
        }
        if(i!=n-4){

            for(int j=0;j<i*2;j++){

                cout<<" ";
            }

        }

        for(int k=0;k<n-i;k++){

            cout<<a;
        }
        cout<<endl;
    }

     
    return 0;
}