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

    void display() {
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    int size() {
        if (isEmpty()) return 0;
        return rear - front + 1;
    }

    void interleave() {
        int n = size();
        int firstHalf[MAX], secondHalf[MAX];

        int half = n / 2;

        for (int i = 0; i < half; i++)
            firstHalf[i] = dequeue();

        for (int i = 0; i < n - half; i++)
            secondHalf[i] = dequeue();

        for (int i = 0; i < half; i++) {
            enqueue(firstHalf[i]);
            if (i < n - half)
                enqueue(secondHalf[i]);
        }
    }
};

int main() {
    Queue q;

    q.enqueue(4);
    q.enqueue(7);
    q.enqueue(11);
    q.enqueue(20);
    q.enqueue(5);
    q.enqueue(9);

    cout << "Before interleaving: ";
    q.display();  

    q.interleave();

    cout << "After interleaving: ";
    q.display(); 

    return 0;
}