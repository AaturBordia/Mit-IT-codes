#include <iostream>
using namespace std;
class cdll{
    public:
    cdll* next;
    cdll* prev;
    int data;
    void ins_end();
    void display();
    void del_end();
}*first = NULL;
void cdll::ins_end(){
    cdll * temp = new cdll;
    cdll* curr;
    cout << "enter the data:";
    cin >> temp->data;
    temp->next = NULL;
    temp->prev = NULL;
    if(!first){
        first = temp;
        temp->next = first;
        temp->prev = first;
    }else{
        for(curr = first;curr->next!=first;curr=curr->next);
        curr->next = temp;
        temp->next = first;
        temp->prev = curr;
        first->prev = temp;
    }
}
void cdll::del_end(){
    cdll * temp = new cdll;
    cdll* curr;
    temp->next = NULL;
    temp->prev = NULL;
    if(!first){
        cout << "list already empty";
    }else if(first->next == first){
        first = NULL;
    }else{
        for(curr = first;curr->next->next!=first;curr=curr->next);
        temp = curr->next;
        curr->next = first;
        first->prev = curr;
        delete(temp);
    }

}
void cdll::display(){
    cdll * curr = first;
    if(!first){
        cout << "empty list";
    }else{
        do{
            cout << curr->data << " ";
            curr = curr->next;
        }while(curr!=first);
    }
}
int main(){
    cdll a;
char ch;
        cout << "\na)ins end\nb)del end\nc)display\nd)exit\n";

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
            a.del_end();
            break;
        case 'c':
            a.display();
            break;
        case 'd':
            break;
       defult:
            cout << "invalid input";
        }
    } while (ch != 'd');
    return 0;
}

