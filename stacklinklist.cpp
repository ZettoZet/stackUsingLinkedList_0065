#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

class Stack
{
private:
    Node *top; // Pointer to the top node of the stack

public:
    Stack()
    {
        top = NULL; // Initialize the stack with a null top pointer
    }

    // Push operation: insert an element onto the top of the stack
    int push(int value)
    {
        Node *newNode = new Node(); // 1. Allocate memory for the new code
        newNode->data = value;      // 2. assign value
        newNode->next = top;        // 3. Set the next pointer of the new node to the current top
        top = newNode;              // 4. Update the top pointer to the new node
        cout << "Push value: " << value << endl;
        return value;
    }

    // IsEmpty operation Check if the stack is empty
    bool isEmpty()
    {
        return top == NULL; // Return true if the top pointer is NULL indicating an empty stack
    }

    // pop operation: Remove the topmost element from the stack
    void pop()
    {
        Node *temp = top; // Create a temporary pointer to the current top node
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return; // If the stack is empty, print a message and return
        }

        cout << " popped value: " << temp->data << endl;
        top = temp->next; // Update the top pointer to the next node
        delete temp;      // Delete the temporary pointer to free memory
        temp = nullptr;   // free the memory of the popped node
    }

    // Peek/top operation: Retrieve the value of the topmost element without removing it
    void peek()
    {
        if (isEmpty())
        {
            cout << "List is empty." << endl;
            return; // If the stack is empty, print a message and return
        }
        else
        {
            // menampilkan semua elemen
            // Node *current = top;
            // while (current != NULL)
            // {
            //     cout << current->data << " " << endl;
            //     current = current->next;
            // }
            // cout << endl;

            //menampilkan elemen teratas
            cout << top->data << " " << endl;

        } // return the value of the top node
    }
};

int main()
{
    
};