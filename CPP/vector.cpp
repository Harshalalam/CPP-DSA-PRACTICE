#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vim;   // create empty vector

    // Adding elements
    vim.push_back(10);
    vim.push_back(20);
    vim.push_back(30);

    // Printing elements
 
   for(int i = 0; i < vim.size(); i++) {
        cout << vim[i] << " ";
    }

    return 0;
}
