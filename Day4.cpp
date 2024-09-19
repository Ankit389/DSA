#include <iostream>
#include <string>
using namespace std;

int main() {
    int n = 120;  // The original number
    string str = to_string(n);  // Convert the number to a string
    string reversedStr = "";  // String to store the reversed number

    // Reverse the string
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }

    // Output the reversed string
    cout << "Reversed Number: " << reversedStr << endl;

    return 0;
}
