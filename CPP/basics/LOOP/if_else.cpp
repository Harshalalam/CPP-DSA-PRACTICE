#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age :";
    cin>>age;

    if(age<18){
        cout<<"sorry , we cannot allow you to go to the party your age is below 18";
    }else if(age>=18){
        cout<<"welcome sir,enjoy your party";
    }
    return 0;
}