#include <iostream>
using namespace std;
#define MAX 256
class Queue {
    char arr[MAX];
    int front, rear;

public:    Queue() {
        front = rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    void enqueue(char c) {
        if (rear == MAX - 1) return;
        if (isEmpty())
            front = rear = 0;
        else
            rear++;
        arr[rear] = c;
    }

    char peek() {
        if (isEmpty()) return '\0';
        return arr[front];
    }

    void dequeue() {
        if (isEmpty()) return;
        if (front == rear)
            front = rear = -1;
        else
            front++;
    }
};

void firstNonRepeatingChar(string s) {
    int freq[MAX] = {0};
    Queue q;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        freq[c]++;
        q.enqueue(c);

        while (!q.isEmpty() && freq[q.peek()] > 1) {
            q.dequeue();
        }

        if (q.isEmpty())
            cout << -1 << " ";
        else
            cout << q.peek() << " ";
    }
    cout << endl;
}

int main() {
    string s = "aabb";
    firstNonRepeatingChar(s);  
    return 0;
}