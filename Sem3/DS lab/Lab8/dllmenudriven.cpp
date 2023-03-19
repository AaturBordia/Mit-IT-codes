#include <iostream>
using namespace std;
class dll{
    public:
    int data;
    dll* prev;
    dll* next;
    void ins_end();
    void del();
    void ins_at();
    void del_at();
    void ins_after();
    void ins_before();
    void display();
    void reversing();
}*first = NULL;

void dll::ins_end(){
    dll*temp = new dll;
    dll* curr;
    cout << "enter value:";
    cin >> temp->data;
    temp->next = NULL;
    temp->prev = NULL;
    if(!first){
        first = temp;
    }else{
        for(curr = first;curr->next;curr= curr->next);
        curr->next = temp;
        temp->prev = curr;
    }
}

void dll::del(){
    dll*curr;
    dll*temp;
    if(!first){
        cout << "empty list";
    }else{
        for(curr = first;curr->next->next;curr= curr->next);
        curr->next->prev = NULL;
        temp = curr->next;
        curr->next = NULL;
        delete(temp);
    }
}

void dll::ins_at(){
    bool flag = false;
    int pos;
    dll*temp = new dll;
    dll*temp2;
    dll* curr = new dll;
    cout << "enter pos:";
    cin >> pos;
    cout << "enter value:";
    cin >> temp->data;
    temp->next = NULL;
    temp->prev = NULL;
    int i = 0;
    if(!first){
        cout << "empty list";
        flag = false;
    }else if(pos==i){
        temp->next = first;
        first->prev = temp;
        first = temp;
        flag = true;
    }else{
        for(curr = first;curr;curr= curr->next){
            if(i==pos-1){
                flag = true;
                break;
            }
            i++;
        }
    }
    if(flag==false){
        cout << "index out of bound";
    }else if(!curr->next){
        curr->next = temp;
        temp->prev = curr;
    }else{
        temp2 = curr->next;
        curr->next = temp;
        temp->prev = curr;
        temp->next = temp2;
        temp2->prev = curr;
    }
}

void dll::del_at(){
    bool flag = false;
    int pos;
    dll* temp = new dll;
    dll*p;
    dll* curr = new dll;
    cout << "enter pos:";
    cin >> pos;
    temp->next = NULL;
    temp->prev = NULL;
    int i = 0;
    if(!first){
        cout << "empty list";
    }else if(pos==i){
        temp = first;
        first =temp->next;
        first->prev = NULL;
        delete(temp);
        flag = true;
    }else{
        for(curr = first;curr;curr= curr->next){
            if(i==pos-1){
                flag = true;
                break;
            }
            i++;

        }
    }
    if(flag==false){
        cout << "index out of bound";
    }else if(curr->next!=NULL){
        temp = curr->next;
        curr->next = temp->next;
        temp->next->prev = curr;
        delete(temp);
    }else{
        curr->next->prev = NULL;
        temp = curr->next;
        curr->next = NULL;
        delete(temp);
    }
}

void dll::ins_after(){
    bool flag = false;
    dll*temp = new dll;
    dll*temp2;
    int d;
    dll* curr = new dll;
    cout << "enter after:";
    cin >> d;
    cout << "enter value:";
    cin >> temp->data;
    temp->next = NULL;
    temp->prev = NULL;
    if(!first){
        cout << "empty list";
    }else{
        for(curr = first;curr->next;curr= curr->next){
            if(curr->data == d){
                flag = true;
                break;
            }
        }
        if(flag==true){
            temp2 = curr->next;
            curr->next = temp;
            temp->prev = curr;
            temp->next  = temp2;
            temp2->prev = temp;
        }else if(flag==false && curr->data == d){
            curr->next = temp;
            temp->prev = curr;
        }else{
            cout << "element not found";
        }
    }
}

void dll::ins_before(){
    bool flag = false;
    dll*temp = new dll;
    dll*temp2;
    int d;
    dll* curr = new dll;
    cout << "enter before:";
    cin >> d;
    cout << "enter value:";
    cin >> temp->data;
    temp->next = NULL;
    temp->prev = NULL;
    if(!first){
        cout << "empty list";
    }else{
        for(curr = first->next;curr->next;curr= curr->next){
            if(curr->next->data == d){
                flag = true;
                break;
            }
        }
        if(flag==true){
            temp2 = curr->next;
            curr->next = temp;
            temp->prev = curr;
            temp->next  = temp2;
            temp2->prev = temp;
        }else if(flag==false && first->data == d){
            temp->next = first;
            first->prev = temp;
            first = temp;
        }else{
            cout << "element not found";
        }
    }
}



void dll::display(){
    if(!first){
        cout << "empty list";
    }else{
        for(dll*curr = first;curr;curr= curr->next){
            cout << curr->data << " ";
        }
    }
}

void dll::reversing()
{
    dll *p, *curr = NULL;
    while (first)
    {
        p = curr;
        curr = first;
        first = first->next;
        curr->next = p;
        if(p){
            p->prev = curr;
        }
    }
    first = curr;
}


int main(){
    dll a;
    char ch;
    cout << "\na)ins end\nb)del\nc)ins_at\nd)del_at\ne)ins_after\nf)ins_before\ng)display\nh)reversing\ni)exit\n";
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
            a.del();
            break;
        case 'c':
            a.ins_at();
            break;
        case 'd':
            a.del_at();
            break;
        case 'e':
            a.ins_after();
            break;
        case 'f':
            a.ins_before();
            break;
        case 'g':
            a.display();
            break;
        case 'h':
            a.reversing();
            break;
        case 'i':
            break;
      default:
            cout << "invalid input";
    }
    } while (ch != 'i');
    return 0;
}
