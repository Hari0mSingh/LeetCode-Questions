#include<iostream>
using namespace std;
 int main(){
    int amount;
    cout<<"Enter the amount!"<<endl;
    cin>>amount;

    int a=1;

    switch (a)
    {
    case 1:{
        int show=amount/100;
        int mode=amount%100;
        cout<<"100Rs note in "<<amount<<" is "<<show<<endl;
        show = mode/50;
        mode=mode%50;
        cout<<"50Rs note in "<<amount<<" is "<<show<<endl;
        show=mode/20;
        mode=mode%20;
        cout<<"20Rs note in "<<amount<<" is "<<show<<endl;
        show=mode/1;
        cout<<"1Rs note in "<<amount<<" is "<<show<<endl;
    }
        break;
    
    default:cout<<"Enter currect amount of money!";
        break;
    }
 }