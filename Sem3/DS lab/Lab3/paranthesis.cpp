#include <iostream>
using namespace std;
int main()
{
    string exp;
    cout << "enter an expression";
    cin >> exp;
    int i = 0, count1 = 0, count2 = 0;
    while (exp[i] != '\0')
    {
        if (exp[i] == '(')
            count1++;
        else if (exp[i] == ')')
            count2++;
        i++;
    }
    if (count1 == count2)
        cout << "valid expression";
    else
        cout << "invalid expression";
}
