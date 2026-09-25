#include<iostream>
using namespace std;
int main(){
    int n=4;

    for(int i=1;i<=n;i++){          //outer loop prints number of rows (vertically)
        for(int j=1;j<=n;j++){      //inner loop
            cout<<j<<" ";           //prints inside each row 1 to N    (worsks horizontally)
        }
        cout<<endl;
    }
}