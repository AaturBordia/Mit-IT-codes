#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class Stack
{
public:
    Stack()
    {
        top = -1;
    };
    void push(string item);
    string pop();
    void display();
    string topele();
    bool isempty();

private:
    string s[50];
    int top;
};
void Stack::push(string item)
{
    if (top == 10 - 1)
    {
        cout << "Stack Overflow \n";
        return;
    }
    top = top + 1;
    s[top] = item;
}
string Stack::pop()
{
    if (top == -1)
    {
        cout << "Empty Stack \n";
        return "abc";
    }
    return s[top--];
}
string Stack::topele()
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
    }
    for (i = top; i >= 0; i--)
        cout << s[i];
}
void infix(char postfix[])
{
    Stack s;
    int c, i;
    string op1, op2;
    for (i = 0; postfix[i] != '\0'; i++)
    {
        char token[10], operand[10];
        token[0] = postfix[i];
        token[1] = '\0';
        if (!isalpha(token[0]))
        {
            op2 = s.pop();
            op1 = s.pop();
            char op_2[30];
            char op_1[30];
            int i1 = 0, i2 = 0, i3 = 0, i4 = 0;
            while (op2[i2] != '\0')
            {
                op_2[i3] = op2[i2];
                i2++;
                i3++;
            }
            op_2[i3] = '\0';
            while (op1[i1] != '\0')
            {
                op_1[i4] = op1[i1];
                i1++;
                i4++;
            }
            op_1[i4] = '\0';
            strcpy(operand, "(");
            strcat(operand, op_1);
            strcat(operand, token);
            strcat(operand, op_2);
            strcat(operand, ")");
            s.push(operand);
        }
        else
        {
            s.push(token);
        }
    }
    cout << "infix is " << s.pop();
}
int main()
{
    char arr[60];
    gets(arr);
    infix(arr);
}
