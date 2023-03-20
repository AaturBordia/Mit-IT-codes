#include <iostream>
using namespace std;
class Mstack
{
    int arr[100];
    int stsize;
    int top[10];
    int bottom[10];
    int num;
    int maxsize;

public:
    Mstack(int n, int msize)
    {
        num = n;
        int stsize = msize / n;
        for (int i = 0; i < n; i++)
        {
            top[i] = bottom[i] = (stsize * i) - 1;
        }
    }
    void push(int ele, int n)
    {
        if (num != n)
        {
            if (top[n] == bottom[n + 1])
            {
                cout << "stack overflow!" << endl;
            }
            else
            {
                top[n]++;
                arr[top[n]] = ele;
            }
        }
        else
        {
            if (top[n] == maxsize - 1)
            {
                cout << "stack overflow" << endl;
            }
            else
            {
                top[n]++;
                arr[top[n]] = ele;
            }
        }
    }
    int pop(int n)
    {
        if (top[n] == bottom[n])
        {
            cout << "stack empty" << endl;
            return -888;
        }
        else
        {
            return arr[top[n]];
            top[n]--;
        }
    }
    void displaystack(int n)
    {

        if (top[n] == bottom[n])
        {
            cout << "empty stack" << endl;
        }
        else
        {
            cout << "stack " << n << " is :" << endl;
            for (int i = top[n]; i > bottom[n]; i--)
            {
                cout << arr[i] << endl;
            }
        }
    }
    void display()
    {
        for (int j = 0; j < num; j++)
        {
            cout << "stack " << j << ":" << endl;
            if (top[j] == bottom[j])
            {
                cout << "empty stack" << endl;
            }
            else
            {
                for (int i = top[j]; i > bottom[j]; i--)
                {
                    cout << arr[i] << endl;
                }
            }
        }
    }
};
int main()
{
    Mstack s = Mstack(5, 20);
    s.push(2, 0);
    s.push(2, 0);
    s.push(2, 0);
    s.push(5, 1);
    s.display();
    return 0;
} 
