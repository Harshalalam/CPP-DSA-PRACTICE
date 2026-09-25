#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    string name;
    cout << "Enter birthday person's name: ";
    getline(cin, name);

    cout << "\nLoading surprise";
    for(int i = 0; i < 5; i++) {
        cout << ".";
        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(500));
    }

    cout << "\n\n";
    this_thread::sleep_for(chrono::milliseconds(400));

    cout << "             i i i i i             \n";
    this_thread::sleep_for(chrono::milliseconds(250));
    cout << "           __|_|_|_|_|__           \n";
    this_thread::sleep_for(chrono::milliseconds(250));
    cout << "          |^^^^^^^^^^^^^^|          \n";
    this_thread::sleep_for(chrono::milliseconds(250));
    cout << "          |     HAPPY    |          \n";
    this_thread::sleep_for(chrono::milliseconds(250));
    cout << "          |   BIRTHDAY   |          \n";
    this_thread::sleep_for(chrono::milliseconds(250));
    cout << "          |  " << name << "    |          \n";
    this_thread::sleep_for(chrono::milliseconds(250));
    cout << "          |______________|          \n";

    cout << "\n🎂 Happy Birthday, " << name << "! 🎂\n";
    cout << "Wishing you lots of happiness, success, and fun!\n";

    return 0;
}