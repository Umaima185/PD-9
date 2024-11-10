#include<iostream>
using namespace std;

void convert(string pin);

int main() {
    string pin;
    cout << "Enter PIN (4 digits): ";
    cin >> pin;
    convert(pin);
    return 0;
}

void convert(string pin) {
    const char* MOVES[] = {
        "Shimmy", "Shake", "Pirouette", "Slide", "Box Step", 
        "Headspin", "Dosado", "Pop", "Lock", "Arabesque"
    };

    if (pin.length() != 4) {
        cout << "Invalid input." << endl;
        return;
    }

    for (int i = 0; i < 4; i++) {
        if (pin[i] < '0' || pin[i] > '9') {
            cout << "Invalid input." << endl;
            return;
        }
        int digit = pin[i] - '0';
        int moveIndex = (digit + i) % 10;
        
        cout << MOVES[moveIndex];
        
        if (i != 3) {
            cout << ", ";
        }
    }
    cout << endl;
}
