#include <iostream>
using namespace std;

string swapCase (const string & n);

int main() {
    string input;
    
    cout << "Enter a string: " << endl;
    getline(cin, input, '\n');

    cout << "The new string is " << '\"' << swapCase(input) << '\"' << endl;

    return 0;
}

string swapCase (const string & n) {
    string newString = "";

    for (int i = 0; i <= n.length(); i++) {
        if (isalpha(n[i])) {
            
            if(isupper(n[i])) {
                newString += tolower(n[i]);
            }
            else {
                newString += toupper(n[i]);
            }
        }
        else {
            newString += n[i];
        }
    }

    return newString;
}