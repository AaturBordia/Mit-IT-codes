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
    void push(char item);
    char pop();
    void display();
    int gettop();

private:
    char s[10];
    int top;
};
void Stack::push(char item)
{
    if (top == 10 - 1)
    {
        cout << "Stack Overflow \n";
        return;
    }
    top = top + 1;
    s[top] = item;
}
char Stack::pop()
{
    if (top == -1)
    {
        cout << "Empty Stack \n";
        return -1;
    }
    char x = s[top];
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
        cout << s[i];
}
int main()
{
    Stack s;
    string s1;
    cout << "enter a string :";
    cin >> s1;
    int i = 0;
    while (s1[i] != '\0')
    {
        s.push(s1[i]);
        i++;
    }
    bool flag = true;
    for (int j = 0; j < i / 2; j++)
    {
        char x = s.pop();
        if (x != s1[j])
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
        cout << "string is a palindrome";
    else
        cout << "not a palindrome";
}
