#include <iostream>
using namespace std;

int square(int num) {
    if (num < 0) {
        cout << "Negative number not allowed" << endl;
        return -1;   // 🔸 exits function immediately
    }

    return num * num;  // runs only if num >= 0
}

int main() {
    cout << square(-5) << endl;
    cout << square(4) << endl;
}
