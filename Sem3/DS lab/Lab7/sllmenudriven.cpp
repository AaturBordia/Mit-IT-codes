#include <iostream>

using namespace std;

class sll
{
public:
    int data;
    sll *next;
    void ins_end();
    void ins_before();
    void ins_after();
    void delete_f();
    void reversing();
    void sorting();
    void delete_alt();
    void ins_asc();
    void display();

} *first = NULL;

void sll::ins_end()
{
    sll *temp = new sll;
    sll *curr = first;
    cout << "Enter value";
    cin >> temp->data;
    temp->next = NULL;
    if (first == NULL)
        first = temp;
    else
    {
        for (curr = first; curr->next; curr = curr->next)
            ;
        curr->next = temp;
    }
}
void sll::ins_before()
{
    sll *temp = new sll;
    sll *curr;
    int s = 0;
    int d = 0;
    bool flag = false;
    cout << "Enter the value to be inserted";
    cin >> d;
    temp->data = d;
    temp->next = NULL;
    cout << "Enter the value before which insertion needs to be done";
    cin >> s;
    if (first->data == s)
    {
        temp->next = first;
        first = temp;
        flag = true;
    }
    else
    {
        for (curr = first; curr->next != NULL; curr = curr->next)
        {
            if (curr->next->data == s)
            {
                flag = true;
                temp->next = curr->next;
                curr->next = temp;
                break;
            }
        }
    }
    if (flag == false)
    {
        cout << "element not found";
    }
}

void sll::ins_after()
{
    bool flag = false;
    sll *temp = new sll;
    int s = 0;
    int d = 0;
    cout << "Enter the value to be inserted";
    cin >> d;
    temp->data = d;
    temp->next = NULL;
    cout << "Enter the value after which insertion needs to be done";
    cin >> s;
    sll *temp2;
    for (sll *curr = first; curr != NULL; curr = curr->next)
    {
        if (curr->data == s)
        {
            temp2 = curr->next;
            curr->next = temp;
            temp->next = temp2;
            flag = true;
            break;
        }
    }
    if (flag == false)
    {
        cout << "element not found";
    }
}
void sll::delete_f()
{
    cout << "enter element to be deleted :";
    int a;
    bool flag = false;
    cin >> a;
    sll *temp;
    if (first->data == a)
    {
        temp = first;
        first = first->next;
        flag = true;
        delete (temp);
    }
    else
    {
        for (sll *curr = first; curr->next; curr = curr->next)
        {
            if (curr->next->data == a)
            {
                temp = curr->next;
                curr->next = temp->next;
                flag = true;
                delete (temp);
            }
        }
    }
    if (flag == false)
    {
        cout << "element not found";
    }
}
void sll::reversing()
{
    sll *prev, *curr = NULL;
    while (first)
    {
        prev = curr;
        curr = first;
        first = first->next;
        curr->next = prev;
    }
    first = curr;
}
void sll::sorting()
{
    sll *i;
    sll *j;
    for (i = first; i->next; i = i->next)
    {
        for (j = i->next; j; j = j->next)
        {
            if (i->data > j->data)
            {
                int t = i->data;
                i->data = j->data;
                j->data = t;
            }
        }
    }
}
void sll::ins_asc()
{
    sll *curr;
    sll *temp = new sll;
    sll *temp1;
    int d;
    cout << "Enter the value to be inserted";
    cin >> d;
    temp->data = d;
    temp->next = NULL;
    if (first->data >= temp->data)
    {
        temp->next = first;
        first = temp;
    }
    else
    {
        for (curr = first; curr->next; curr = curr->next)
        {
            if (curr->next->data > temp->data)
                break;
        }
        if (curr->next)
        {
            temp1 = curr->next;
            curr->next = temp;
            temp->next = temp1;
        }
        else
        {
            curr->next = temp;
        }
    }
}
void sll::display()
{
    if (first == NULL)
        cout << "List empty";
    else
    {
        sll *curr = first;
        while (curr != NULL)
        {
            cout << curr->data << " ";
            curr = curr->next;
        }
    }
}
void sll::delete_alt()
{
    sll *curr;
    sll *temp;
    for (curr = first; curr->next != NULL; curr = curr->next)
    {
        temp = curr->next;
        if (curr->next->next != NULL)
        {
            curr->next = temp->next;
            delete (temp);
        }
        else
        {
            temp = curr->next;
            curr->next = NULL;
            delete (temp);
            break;
        }
    }
}
int main()
{
    sll a;
    char ch;
    cout << "\na)ins end\nb)ins before\nc)ins after\nd)delete given\ne)display\nf)reverse\ng)sort\nh)delete alternate nodes\ni)ins ascending\nj)exit\n";
    do
    {
        cout<<">";
        cin >> ch;
        switch (ch)
        {
        case 'a':
            a.ins_end();
            break;
        case 'b':
            a.ins_before();
            break;
        case 'c':
            a.ins_after();
            break;
        case 'd':
            a.delete_f();
            break;
        case 'e':
            a.display();
            break;
        case 'f':
            a.reversing();
            break;
        case 'g':
            a.sorting();
            break;
        case 'h':
            a.delete_alt();
            break;
        case 'i':
            a.ins_asc();
            break;
        defult:
            cout << "invalid input";
        }
    } while (ch != 'j');
    return 0;
}
