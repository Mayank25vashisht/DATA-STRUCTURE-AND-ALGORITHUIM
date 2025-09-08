#include <iostream>
#include <string>
using namespace std;
int precedence(char op) {
    if (op == '*' || op == '/')
        return 2;
    else if (op == '+' || op == '-')
        return 1;
    else
        return 0;
}

string infixToPostfix(const string &infix) {
    string postfix = "";
    char lastOperator = '\0';

    for (int i = 0; i < infix.length(); i++) {
        char ch = infix[i];

        
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            postfix += ch;
        }
        
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
                        if (lastOperator != '\0' && precedence(lastOperator) >= precedence(ch)) {
                postfix += lastOperator;
                lastOperator = ch;
            } else {
                if (lastOperator != '\0') {
                    postfix += lastOperator;
                }
                lastOperator = ch;
            }
        }
    }
    if (lastOperator != '\0') {
        postfix += lastOperator;
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter simple Infix expression (like a+b*c): ";
    getline(cin, infix);

    string postfix = infixToPostfix(infix);

    cout << "Postfix Expression: " << postfix << endl;

    return 0;
}