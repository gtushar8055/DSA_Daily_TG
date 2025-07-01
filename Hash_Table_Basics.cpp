// Day26 --> 01/07/2025
//Operations and Basics of Hash Table 

#include <iostream>
#include <vector>
#include<cstring>
using namespace std;

class Node
{
public:
    string key;
    int val;
    Node *next;

    Node(string key, int val)
    {
        this->key = key;
        this->val = val;
        next = NULL;
    }

    ~Node()
    {
        if (next != NULL)
        {
            delete next;
        }
    }
};

class HashTable
{
    int totalSize;
    int currSize; // No. of pairs currently in the table
    Node** table;

    int HashFunc(string key)
    {
        int idx = 0;

        for (int i = 0; i < key.size(); i++)
        {
            idx = (idx +key[i]) % totalSize;
            // idx = idx + (key[i] * key[i])%totalSize;
            // then you have to return idx%totalSize 
        }

        return idx;
    }

    void rehash()
    {
        Node** oldTable = table;
        int oldSize = totalSize;

        totalSize = 2 * totalSize;
        currSize = 0;
        table = new Node *[totalSize];

        for (int i = 0; i < totalSize; i++)
        {
            table[i] = NULL;
        }

        // Copy old values

        for (int i = 0; i < oldSize; i++)
        {
            Node *temp = oldTable[i];
            while (temp != NULL)
            {
                insert(temp->key, temp->val);
                temp = temp->next;
            }

            if (oldTable[i] != NULL)
            {
                delete oldTable[i];
            }
        }

        delete[] oldTable;
    }

public:
    HashTable(int size = 5)
    {
        totalSize = size;
        currSize = 0;

        table = new Node *[totalSize];

        for (int i = 0; i < totalSize; i++)
        {
            table[i] = NULL;
        }
    }

    void insert(string key, int val)
    {
        int idx = HashFunc(key);

        Node *newNode = new Node(key, val);
        // Node *head = table[idx]; // Initially this value is going to be null 

        newNode->next = table[idx];
        table[idx] = newNode;

        currSize++;

        double lambda = currSize / (double)totalSize;
        if (lambda > 1)
        {
            rehash(); // O(n) --> Worst Case Time Complexity
        }
    }

    bool exists(string key)
    {
        int idx = HashFunc(key);

        Node *temp = table[idx];
        while (temp != NULL)
        {
            if (temp->key == key)
            { // Found
                return true;
            }
            temp = temp->next;
        }

        return false;
    }

    int search(string key)
    {
            int idx = HashFunc(key);

            Node *temp = table[idx];
            while (temp != NULL)
            {
                if (temp->key == key)
                { // Found
                    return temp->val;
                }
                temp = temp->next;
            }

            return -1;
    }

    void remove(string key)
    {
        int idx = HashFunc(key);
        Node* temp = table[idx];
        Node* prev = temp;

        while(temp != NULL){
            if(temp->key == key){ // erase
                if(prev == temp){ //head
                    table[idx] = temp->next;
                } else{
                    prev->next = temp->next;
                }
                break;
            }

            prev = temp;
            temp = temp->next;
        }
    }

    void print(){
        for(int i = 0 ; i < totalSize ; i++){
            cout<<"idx"<<i<<"->";
            Node* temp = table[i];
            while(temp!=NULL){
                cout<<"("<<temp->key<<","<<temp->val<<") ->";
                temp = temp->next;
            }
            cout<<endl;
        }
    }
};


int main()
{
    HashTable ht;

    ht.insert("India" , 150);
    ht.insert("China" , 150);
    ht.insert("Nepal" , 10);
    ht.insert("USA" , 75);
    ht.insert("UK" , 80);

    // if(ht.exists("India")){
    //     cout<<"India Population: "<<ht.search("India")<<endl;
    // }

    ht.print();
    
    cout<<"\n\n--------------\n\n";
    ht.remove("China");
    ht.print();
    cout<<"\n\n--------------\n\n";
    ht.remove("UK");
    ht.print();
    
    

    return 0;
}