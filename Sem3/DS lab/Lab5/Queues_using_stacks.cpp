#include <iostream>
using namespace std;
class Stack
{

private:
    int s[10];
    int top;
public:
    Stack()
    {
        top = -1;
    };
    void push(int item);
    int pop();
    void display();
    int gettop();

};
void Stack::push(int item)
{
    if (top == 10 - 1)
    {
        cout << "Stack Overflow \n";
        return;
    }
    s[++top] = item;
}
int Stack::pop()
{
    if (top == -1)
    {
        cout << "Empty Stack \n";
        return -1;
    }
    int x = s[top];
    top = top - 1;
    return x;
}
void Stack::display()
{
    int i;
    if (top == -1)
    {
        cout << "Empty Stack \n";
        return;
    }
    cout << "Contents of stack:\n";
    for (i = top; i >= 0; i--)
        cout << s[i] << " ";
}
int Stack::gettop()
{
    return top;
}
class Queue{
    public:
    Stack s1;
    Stack s2;
    void enq(int ele);
    void dq();
    void display();
};
void Queue::enq(int ele){
    s1.push(ele);
}
void Queue::dq(){
    int x;
    int ct=0;
    while(s1.gettop()>=0){
        x = s1.pop();
        s2.push(x);
        ct++;
    }
    if(ct==0){
        cout << "empty queue";
    }
    s2.pop();
    while(s2.gettop()>=0){
        x = s2.pop();
        s1.push(x);
    }
}
void Queue::display(){
    int x;
    while(s1.gettop()>=0){
        x = s1.pop();
        s2.push(x);
    }
    s2.display();
}
int main(){
    Queue q;
    q.enq(10);
    q.enq(9);
    q.enq(8);
    q.enq(7);
    q.dq();
    q.display();
}
