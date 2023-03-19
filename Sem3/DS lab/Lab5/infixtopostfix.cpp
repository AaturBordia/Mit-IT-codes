#include <iostream>
#include <stdio.h>
using namespace std;
// postfix
enum precedence
{
    lparen,
    rparen,
    pluss,
    minuss,
    times,
    divide,
    mod,
    // eos,
    operand
};
int icp[] = {20, 19, 12, 12, 13, 13, 13, 0};
int isp[] = {0, 19, 12, 12, 13, 13, 13, 0};
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
    char topele();
    bool isempty();

private:
    char s[100];
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
    return s[top--];
}
char Stack::topele()
{
    return s[top];
}
bool Stack::isempty()
{
    if (top == -1)
    {
        return true;
    }
    return false;
}
void Stack::display()
{
    int i;
    if (top == -1)
    {
        cout << "Empty Stack \n";
        return;
    }
    for (i = top; i >= 0; i--)
        cout << s[i];
}
precedence get_token(char c)
{
    switch (c)
    {
    case '(':
        return lparen;
    case ')':
        return rparen;
    case '+':
        return pluss;
    case '-':
        return minuss;
    case '/':
        return divide;
    case '%':
        return mod;
    // case '^':
    //     return eos;
    case '*':
        return times;
    default:
        return operand;
    }
}
void postfix(char infix[])
{
    precedence temp;
    int i = 0;
    Stack s;
    while (infix[i] != '\0')
    {
        temp = get_token(infix[i]);
        if (temp == operand)
        {
            cout << infix[i];
        }
        else if (temp == rparen)
        {
            while (get_token(s.topele()) != lparen)
            {
                cout << s.pop();
            }
            char c = s.pop();
        }
        else
        {
            if (s.isempty() || (icp[temp] > isp[get_token(s.topele())]))
            {
                s.push(infix[i]);
            }
            else
            {
                if (icp[temp] <= isp[get_token(s.topele())])
                {
                    cout << s.pop();
                    s.push(infix[i]);
                }
            }
        }
        i++;
    }
    s.display();
}
int main()
{
    char arr[50] = "a+b*c/d-e";
    postfix(arr);
}
