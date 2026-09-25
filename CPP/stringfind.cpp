#include<iostream>
#include<string>
using namespace std;

int main()
{
string str,sub;
cout<<"enter main string :";
getline(cin,str);

cout<<"enter a substring :";
getline(cin,sub);

if(str.find(sub) != string::npos)
cout<<"string found";
else 
cout<<"string not found";

return 0;
}
