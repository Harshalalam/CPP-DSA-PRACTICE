#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;

int a[n];

for(int i=0;i<n;i++){
cin>>a[i];
}

int positive=0;
int negative=0;
int zero=0;

for(int i=0;i<n;i++){
if(a[i]>0)
positive++;
else if(a[i]<0)
negative++;
else
zero++;
}
cout<<"positive:"<<positive<<endl;
cout<<"negative:"<<negative<<endl;
cout<<"zero:"<<zero<<endl;

return 0;
}
