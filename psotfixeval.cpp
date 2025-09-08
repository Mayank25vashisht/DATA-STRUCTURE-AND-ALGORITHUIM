#include <iostream>
#include <string>

using namespace std;
int evaluatePostfix(const string &postfix) {
    int arr[100];  
    int top = -1;

    for (char ch : postfix) {
        
        if (ch >= '0' && ch <= '9') {
            top++;
            arr[top] = ch - '0';
        }
        
        else {
            int operand2 = arr[top]; top--;
            int operand1 = arr[top]; top--;

            int result;

            switch (ch) {
                case '+': result = operand1 + operand2; break;
                case '-': result = operand1 - operand2; break;
                case '*': result = operand1 * operand2; break;
                case '/': result = operand1 / operand2; break;
                default:
                    cout << "Unknown operator: " << ch << endl;
                    return -1;
            }

            top++;
            arr[top] = result;  
        }
    }

    return arr[top];  
}

int main() {
    string postfix;
    cout << "Enter postfix expression (single digits, e.g., 23+5*): ";
    cin >> postfix;

    int result = evaluatePostfix(postfix);

    cout << "Result of Postfix Expression: " << result << endl;

    return 0;
}