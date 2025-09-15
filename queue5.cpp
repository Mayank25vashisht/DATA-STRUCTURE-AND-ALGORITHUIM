#include <iostream>
using namespace std;

#define MAX 100

class Queue {
    int arr[MAX];
    int front, rear;

public:
    Queue() {
        front = rear = -1;
    }

    bool isEmpty() {
        return (front == -1);
    }

    void enqueue(int val) {
        if (rear == MAX - 1) return;
        if (isEmpty())
            front = rear = 0;
        else
            rear++;
        arr[rear] = val;
    }

    int dequeue() {
        if (isEmpty()) return -1;
        int val = arr[front];
        if (front == rear)
            front = rear = -1;
        else
            front++;
        return val;
    }

    int peek() {
        if (isEmpty()) return -1;
        return arr[front];
    }

    int size() {
        if (isEmpty()) return 0;
        return rear - front + 1;
    }
};

class StackUsingTwoQueues {
    Queue q1, q2;

public:
    void push(int x) {
        q2.enqueue(x);

        while (!q1.isEmpty())
            q2.enqueue(q1.dequeue());

        swap(q1, q2);
    }

    int pop() {
        return q1.dequeue();
    }

    int top() {
        return q1.peek();
    }

    bool empty() {
        return q1.isEmpty();
    }
};

int main() {
    StackUsingTwoQueues s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl;  
    cout << s.pop() << endl;  
    cout << "Top element: " << s.top() << endl;  
    cout << s.pop() << endl;  
        cout << "Top element: " << s.top() << endl;  
    cout << s.pop() << endl; 

    return 0;
}