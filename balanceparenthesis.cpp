#include <iostream>
#include <string>

using namespace std;

bool isBalanced(const string &expr) {
    int count = 0;

  for (char ch : expr) {
       if (ch == '(') {
            count++;  
        } else if (ch == ')') {
            count--;             if (count < 0)
                return false;  
        }
    }

    return count == 0;
}

int main() {
    string expr;
    cout << "Enter expression: ";
    getline(cin, expr);

    if (isBalanced(expr))
        cout << "Balanced parentheses." << endl;
    else
        cout << "Not balanced parentheses." << endl;

    return 0;
}