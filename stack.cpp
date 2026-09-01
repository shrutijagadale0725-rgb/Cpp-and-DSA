#include <iostream>
using namespace std;

int main() {
    int stack[5];
    int top = -1;

    // PUSH
    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;

    // PEEK
    cout << "Top element (peek): " << stack[top] << endl;

    // POP
    cout << "Popped: " << stack[top] << endl;
    top--;

    // PEEK again
    cout << "Top element after pop (peek): " << stack[top] << endl;

    return 0;
}