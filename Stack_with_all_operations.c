#include <stdio.h>
#include <iostream>

using namespace std;

int MAXSIZE = 8;
int stack[8];
int top = -1;

int isEmpty() {

    if(top == -1)
        return 1;
    else
        return 0;
}

int isFull() {

    if(top == MAXSIZE)
        return 1;
    else
        return 0;
}

int peek() {
    return stack[top];
}

int pop() {
    int data;

    if(!isEmpty()) {
        data = stack[top];
        top = top - 1;
        return data;
    } else {
        cout << "Could not retrieve data, Stack is empty" << endl;
    }
}

int push(int data) {

    if(!isFull()) {
        top = top + 1;
        stack[top] = data;
    } else {
        cout << "Could not insert data, Stack is full." << endl;
    }
}

int main() {
    // push items on to the stack
    push(3);
    push(5);
    push(9);
    push(1);
    push(12);
    push(15);

    cout << "Element at top of the stack: " << peek() << endl;
    cout << "Elements: " << endl;

    // print stack data
    while(!isEmpty()) {
        int data = pop();
        cout << data << endl;
    }

    cout << "Stack full: " << (isFull() ? "true" : "false") << endl;
    cout << "Stack empty: " << (isEmpty() ? "true" : "false") << endl;

    return 0;
}
