#include <iostream>
using namespace std;
class Stack {
    char arr[100]; 
    int top;

public:
Stack() {
    top = -1; 
    } void push(char c) {
        if (top < 99) {
            top++;
            arr[top] = c;
        }
    }
 char pop() {
        if (top >= 0) {
            char c = arr[top];
            top--;
            return c;
        }
        return '\0';  
    } bool isEmpty() {
        return top == -1;
    }
};

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    Stack st;

        for (int i = 0; str[i] != '\0'; i++) {
        st.push(str[i]);
    }
    cout << "Reversed string: ";
    while (!st.isEmpty()) {
        cout << st.pop();
    }
    cout << endl;

    return 0;
}