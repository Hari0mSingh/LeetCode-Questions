#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    int ans=1;

    for(int i=0;i<=30;i++){
        if(ans==n)
        {
            cout<<"True";
        }
        if(ans<INT32_MAX/2)
            ans=ans*2;
    }
      cout<<"False";

}