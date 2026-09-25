#include<iostream>
using namespace std;
int main(){
    int n=3;
    int num=1;                 //declared outside so it will be updating with loops 
                               // if we declare this inside the inner loop it will be reset until
                               //the loop ends

    for(int i=0;i<n;i++){               //for n number of rows
        for(int j=0;j<i+1;j++){         //used for columns
            cout<<num;                  //prints inside row
            num++;                      //number will ne keep increasing 
        }
        
        cout<<endl;
        
    }
}