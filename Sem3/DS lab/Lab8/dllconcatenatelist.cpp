#include <iostream>
using namespace std;
class dll{
    public:
    int data;
    dll* prev;
    dll* next;
    void ins_end();
    void display();
  }*f1 = NULL,*f2 = NULL;

dll* ins_e(dll * f){
    dll*temp = new dll;
    dll* curr;
    cout << "\n enter value:";
    cin >> temp->data;
    temp->next = NULL;
    temp->prev = NULL;
    if(!f){
        f = temp;
    }else{
        for(curr = f;curr->next;curr= curr->next);
        curr->next = temp;
        temp->prev = curr;
    }
    return f;
}

dll* concat(dll*f1,dll*f2){
    dll* X = new dll;
    dll* curr;
    if(!f1 && !f2){
        cout<<"empty list";
        return NULL;
    }else if(!f1){
        X= f2;
    }else if(!f2){
        X = f1;
    }else{
        for(curr = f1;curr->next;curr=curr->next);
        curr->next = f2;
        f2->prev = curr->next;
        X=f1;
    }
    return X;
}

void display(dll*f){
    if(!f){
        cout << "empty list";
    }else{
        for(dll*curr = f;curr;curr= curr->next){
            cout << curr->data << " ";
        }
    }
}

int main(){
    dll* X;
     f1 = ins_e(f1);
     f1 = ins_e(f1);
     f1 = ins_e(f1);
     cout<<"List 1: "<<endl;
     display(f1);
     f2 = ins_e(f2);
     f2 = ins_e(f2);
     cout<<"List 2: "<<endl;
     display(f2);
     X = concat(f1,f2);
     cout<<"\nThe concatenated list is: "<<endl;
     display(X);
     return 0;
}
