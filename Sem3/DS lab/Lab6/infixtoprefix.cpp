#include <iostream>
#include <stdio.h>
using namespace std;
enum precedence
{
    lparen,
    rparen,
    pluss,
    minuss,
    times,
    divide,
    mod,
    eos,
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
    }
    void push(char item);
    char pop();
    void display();
    char topele();
    bool isempty();
    int gettop();
    char s[100];
    int top;
};
int Stack::gettop(){
    return top;
}
void Stack::push(char item)
{
    if (top == 100 - 1)
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
int length(char arr[]){
    int i = 0;
    while(arr[i]!='\0'){
        i++;
    }
    return i;
}
void prefix(char infix[])
{
    precedence temp;
    int i = 0;
    int j = 0;
    char arr[1000];
    Stack s;
    while (infix[i] != '\0')
    {
        temp = get_token(infix[i]);
        if (temp == operand)
        {
            arr[j] = infix[i];
            j++;
        }
        else if (temp == rparen)
        {
            while (get_token(s.topele()) != lparen)
            {
                arr[j] = s.pop();
                j++;
            }
            char c = s.pop();
        }
        else
        {
            if (s.isempty() || (icp[temp] >= isp[get_token(s.topele())]))
            {
                s.push(infix[i]);
            }
            else
            {
                while (icp[temp] < isp[get_token(s.topele())])
                {
                    arr[j] = s.pop();
                    j++;
                }
                s.push(infix[i]);
            }
        }
        i++;
    }
    i=0;
    if (!s.isempty()){
            int n = s.gettop();
            for (i = n; i >= 0; i--){
                    arr[j] = s.s[i];
                    j++;
            }
    }
    int n = length(arr);
    for(int i=0;i<n/2;i++){
        char temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    arr[n] = '\0';
    cout << arr;
}

int main(){
    char arr[1000];
    gets(arr);
    int n = length(arr);
    for(int i =0;i<n/2;i++){
        char temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i =0;i<n;i++){
        if(arr[i]=='('){
            arr[i] = ')';
        }else if(arr[i]==')'){
            arr[i] = '(';
        }
    }
    prefix(arr);
}
