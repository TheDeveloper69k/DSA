//CALCULATE SUM OF DIGITS OF A NUMBER

#include<iostream>
using namespace std;

int SumOfDigits(int num){ 

    int sum=0,rem;
    
    while(num>0){
        
        rem=num%10;
        num=num/10;
        
        sum=sum+rem;
    }   

    return sum;
}

int main(){

    int a;

    cout<<"Enter Th Number Whose Sum Of Digits You Want : "<<endl;
    cin>>a;

    cout<<"The Sum Is : "<<SumOfDigits(a);
    
    return 0;
}