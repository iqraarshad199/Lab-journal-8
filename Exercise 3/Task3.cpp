#include <iostream>
using namespace std;

class Node {
public:
    int data;     
    Node* next;   

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head; 

    LinkedList() {
        head = nullptr;
    }

    /**
    * Inserts a new node at the end of the list.
    * @val: The value to be inserted into the new node.
    */
    void insert(int val) {
        Node* newnode = new Node(val); 
        if (head == nullptr) {
            head = newnode; 
        }
        else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next; 
            }
            temp->next = newnode; 
        }
    }
    /**
    * Recursively reverses the linked list.
    * @head: The head of the portion of the list to be reversed.
    * @return: A pointer to the new head of the reversed list.
    */
    Node* reverseList(Node* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        Node* revHead = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return revHead;
    }

    void reverse() {
        head = reverseList(head);
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " "; 
            temp = temp->next;         
        }
        cout << endl;
    }

    ~LinkedList() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;  
        }
    }
};

int main() {
    cout << "\n\t\t\t====================================================" << endl;

    LinkedList l;

    l.insert(1);
    l.insert(2);
    l.insert(3);
    l.insert(4);
    l.insert(5);

    cout << "\n\t\t\tOriginal List: ";
    l.display();  

    l.reverse();     

    cout << "\n\t\t\tReversed List: ";
    l.display();  

    cout << "\n\t\t\t====================================================" << endl;

    return 0;
}