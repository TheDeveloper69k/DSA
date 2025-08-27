#include<iostream>
using namespace std;

int Fact(int x){

    int fact=1;

    for(int i=1;i<=x;i++){

        fact=fact*i;
    }

    return fact;
}

    int nCr(int n, int r){

        int fact_n = Fact(n);
        int fact_r = Fact(r);
        int fact_nmr = Fact(n-r);

        return fact_n/(fact_r * fact_nmr);
    }

int main(){

    int n,r;

    cout<<"Enter Permutation n : "<<endl;
    cin>>n;

    cout<<"Enter Permutation r : "<<endl;
    cin>>r;

    cout<<nCr(n,r);
}