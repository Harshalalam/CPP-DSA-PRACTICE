#include<iostream>
using namespace std;
int main(){
    int n=4;
    char alp='A';

    for(int i=0;i<=n;i++){
        for(int j=1;j<i+1;j++){
            cout<<alp<<" ";
            alp++;
        }cout<<endl;
    }
}
