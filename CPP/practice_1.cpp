#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number :";
    cin>>num;

    int count =0;

    if(num != 1)
    {
        while(num%3==0){
            num/=3;
            count++;
        }

        while(num%2==0){
            num/=2;
            count++;
        }

        if(num!=0){
            num-=1;
            count++;
        }
    }cout<<"\n operations "<<count;
return 0;
}
