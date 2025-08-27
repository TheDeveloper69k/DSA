#include<iostream>
using namespace std;


int Prime(int n){

    int i;
    
    for(i=2; i<=n;i++){

        int count=0;

        for(int j=1;j<=i;j++){

            if(i%j==0){
                count++;
            }

        }
        if(count==2){
    
            cout<<i<<endl;
        }
        
    }
    
}


int main(){
    
    int a;

    cout<<"Enter The Number Till You Want Prime Number : ";
    cin>>a;

    Prime(a);

    return 0;
}