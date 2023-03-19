#include <iostream>
#include <stdio.h>
using namespace std;
class Stack
{
public:
    Stack()
    {
        top = -1;
    };
    void push(double item);
    double pop();
    void display();
    double topele();
    bool isempty();

private:
    char s[100];
    int top;
};
void Stack::push(double item)
{
    if (top == 10 - 1)
    {
        cout << "Stack Overflow \n";
        return;
    }
    top = top + 1;
    s[top] = item;
}
double Stack::pop()
{
    if (top == -1)
    {
        cout << "Empty Stack \n";
        return -1;
    }
    return s[top--];
}
double Stack::topele()
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
void postfix_eval()
{
    Stack obj;
    int digit, op1, op2;
    char token, postfix[50];
    cout << "enter a postfix expression :";
    gets(postfix);
    for (int i = 0; postfix[i] != '\0'; i++)
    {
        token = postfix[i];
        if (token >= 48 && token <= 57)
        {
            digit = token - '0';
            obj.push(digit);
        }
        else if (token == '+' || token == '*' || token == '-' || token == '/' || token == '%')
        {
            op2 = obj.pop();
            op1 = obj.pop();
            switch (token)
            {
            case '+':
                obj.push(op1 + op2);
                break;
            case '*':
                obj.push(op1 * op2);
                break;
            case '-':
                obj.push(op1 - op2);
                break;
            case '/':
                obj.push(op1 / op2);
                break;
            case '%':
                obj.push(op1 % op2);
                break;
            }
        }
        else
        {
            int val;
            cout << "enter the value of " << postfix[i]<<": ";
            cin >> val;
            obj.push(val);
        }
    }
    cout << "result = " << obj.pop();
}
int main()
{
    postfix_eval();
}

