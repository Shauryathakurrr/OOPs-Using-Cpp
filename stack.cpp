#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> undoStack, redoStack;
    string action;

    undoStack.push("Type A");
    undoStack.push("Type B");
    undoStack.push("Type C");

    cout << "Current Action: " << undoStack.top() << endl;

    redoStack.push(undoStack.top());
    undoStack.pop();
    cout << "After Undo: " << undoStack.top() << endl;

    undoStack.push(redoStack.top());
    redoStack.pop();
    cout << "After Redo: " << undoStack.top() << endl;

    return 0;
}