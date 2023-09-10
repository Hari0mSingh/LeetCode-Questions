#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"This code will complement the number at Bitwise level"<<endl;
    cout<<"Enter Number: ";
    cin>>n;
    int m=n;
    int mask=0;
    if(n==0){
        int ans=1;
       cout<<"complement is: "<<ans;//Edge Case
    }
    else{
        while(m!=0){
        mask=(mask<<1)|1;
        m=m>>1;
    }
    int ans=(~n)&mask;

    cout<<"Complement is: "<<ans;//Retruns the complement
    }

}