#include <iostream>
using namespace std;

int factorial (int n);
int factorialLoop( int n);

int main() {
    int n = 0;
    cout << "enter a number" << endl;
    cin >> n;

    // cout << factorial(n);

    cout << "Recursive Number: " << factorial(n) << endl;
    cout << "Iterative Number: " << factorialLoop(n) << endl;
    return 0;
}

int factorial (int n) {
    // base case
    if(n == 0)
        return 1;
    
    // recursion call
    return n * factorial(n - 1);
}

int factorialLoop( int n) {
    int result = 1;

    for(int i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
    
}