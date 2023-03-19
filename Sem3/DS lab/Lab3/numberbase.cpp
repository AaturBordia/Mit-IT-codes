#include <iostream>
#include <cmath>
using namespace std;
class Stack
{
public:
    Stack()
    {
        top = -1;
    };
    void push(int item);
    int pop();
    void display();
    int gettop();

private:
    int s[10];
    int top;
};
void Stack::push(int item)
{
    if (top == 10 - 1)
    {
        cout << "Stack Overflow \n";
        return;
    }
    top = top + 1;
    s[top] = item;
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
    for (i = top; i >= 0; i++)
        cout << s[i];
}
int Stack::gettop()
{
    return top;
}
void convbase(int N, int b)
{
    Stack arr;
    int n, x;
    int i = 0;
    cout << "the number " << N << " in base " << b << " is:" << endl;
    while (N != 0)
    {
        x = N % b;
        arr.push(x);
        N = N / b;
        i++;
    }
    for (int j = i; j > 0; j--)
    {
        int x = arr.pop();
        if (x > 9)
        {
            cout << (char)(x + 55);
        }
        else
        {
            cout << x;
        }
    }
}
int main()
{
    int N, b;
    cout << "enter the number N:";
    cin >> N;
    cout << "enter the base:";
    cin >> b;
    convbase(N, b);
}
