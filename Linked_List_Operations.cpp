#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;
    Node *tail;
    int size;
    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void insertAtEnd(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtHead(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtIdx(int idx, int val)
    {
        if (idx < 0 || idx > size)
            cout << "Invalid Index" << endl;
        else if (idx == 0)
        {
            insertAtHead(val);
        }
        else if (idx == size)
        {
            insertAtEnd(val);
        }
        else
        {
            Node *t = new Node(val);
            Node *temp = head;
            for (int i = 1; i < idx; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }

    void deleteAtHead()
    {
        if (size == 0)
        {
            cout << "List is Empty";
            return;
        }
        head = head->next;
        size--;
    }

    void deleteAtIdx(int idx)
    {
        if (size == 0)
        {
            cout << "List is Empty";
            return;
        }
        else if (idx < 0 || idx > size)
        {
            cout << "Invalid Index";
            return;
        }
        else if (idx == 0)
            return deleteAtHead();
        else if (idx == size - 1)
            return deleteAtEnd();

        else
        {
            Node *temp = head;
            for (int i = 0; i < idx; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    void deleteAtEnd()
    {
        if (size == 0)
        {
            cout << "List is Empty";
            return;
        }
        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
};

int main()
{
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.display();
    ll.insertAtEnd(20);
    ll.display();
    ll.insertAtEnd(30);
    ll.display();
    ll.insertAtHead(5);
    ll.display();
    ll.insertAtIdx(2, 45);
    ll.display();
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtEnd();
    ll.display();
    return 0;
}