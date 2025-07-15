#include<bits/stdc++.h>
using namespace std;

// Node class represents a node in the circular linked list
class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int value) : data(value), next(nullptr) {}
};

// CircularLinkedList class represents the circular linked list
class CircularLinkedList {
private:
    Node* head;

public:
    // Constructor
    CircularLinkedList() : head(nullptr) {}

    // Function to add a new node to the list
    void addNode(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            // If the list is empty, make the new node the head and point it to itself
            head = newNode;
            head->next = head;
        } else {
            // If the list is not empty, find the last node and update its next pointer
            Node* last = head;
            while (last->next != head) {
                last = last->next;
            }
            last->next = newNode;
            newNode->next = head;
        }
    }

    // Function to display the circular linked list
    void displayList() {
        if (!head) {
           cout << "List is empty." << endl;
            return;
        }

        Node* current = head;

        do {
            cout << current->data << " ";
            current = current->next;
        } while (current != head);

        cout << endl;
    }
};

int main() {
    CircularLinkedList myList;

    // Adding nodes to the circular linked list
    myList.addNode(1);
    myList.addNode(2);
    myList.addNode(3);
    myList.addNode(4);

    // Displaying the circular linked list
    cout << "Circular Linked List: ";
    myList.displayList();

    return 0;
}
