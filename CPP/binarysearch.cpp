#include<istream>
using namespace std;
int main(){
int n;
cout<<"enter size :";
cin>>n;

int arr[100];
for(int i=0;i<n;i++)
cin>>arr[i];

int key;
cout<<"enter element to search:";
cin>>key;

for(int i=0;i<n;i++)
if(arr[i]==key){
cout<<"found"
}
return 0;

}
