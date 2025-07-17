#include <iostream>
#include<vector>
#include<string>
#include<list>
using namespace std;

// Create Stack using LinkedList template

template<class T>

class Stack{
    list<T> ll;
public:
    void push(T val){
        ll.push_front(val);
    }

    void pop(){
        ll.pop_front();
    }

    T top(){
        return ll.front();
    }

    bool isEmpty(){
        return ll.size() == 0;
    }
    
};


int main() {
    Stack<char> s;
    s.push('c');
    s.push('b');
    s.push('a');

    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}