#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isprime=true;

    for(int i=2;i<n;i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }
    if(isprime && n>1){
        cout<<"prime";
    }else{
        cout<<"not a prime ";
    }
}