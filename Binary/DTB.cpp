#include<iostream>
using namespace std;


int DecToBin(int decNum){
    
    int ans=0,pow=1;
    
    while(decNum>0){
        
        int rem = decNum%2;
        
        decNum/=2;
        
        ans += (rem*pow);
        pow*=10;
    }
    
    return ans;
}
int main(){

    int a;

    cout<<"Enter The Decimal Num : "<<endl;
    cin>>a;
    
    for(int i=0;i<=a;i++){

        cout<<DecToBin(i)<<endl;

    }
        return 0;
} 