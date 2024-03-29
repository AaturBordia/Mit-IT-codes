#include <iostream>
using namespace std;
class poly{
    public:
    poly* next;
    poly* prev;
    int coe;
    int exp;
    poly* ins_end(poly*,int,int);
    void display(poly*);
    poly* add(poly*,poly*);
}*first = NULL,*p1=NULL,*p2 =NULL,*hfirst = NULL,*hp1 = NULL,*hp2 = NULL;
poly* poly::ins_end(poly* first,int coe,int exp){
    poly * temp = new poly;
    poly* curr;
    temp->coe = coe;
    temp->exp = exp;
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
    return first;
}
void poly::display(poly* first){
    poly * curr = first;
    if(!first){
        cout << "empty list";
    }else{
        do{
            if(curr->coe!=0){
                cout << curr->coe<< "X^"<<curr->exp;
            }
            curr = curr->next;
            if(curr!=first || curr->next->coe!=0){
                cout << " + ";
            }
        }while(curr!=first);
    }
}
poly* poly::add(poly*p1,poly*p2){
    poly a;
    poly* p = NULL;
    bool ctp1 = true;
    bool ctp2 = true;
    poly* temp = new poly;
    poly* tp1 = p1;
    poly* tp2 = p2;
    if(!tp1 && !tp2){
        p = NULL;
        return p;
    }else if(!tp1){
        p = tp2;
        return p;
    }else if(!tp2){
        p = tp1;
        return p;
    }
    do{
        if(tp1->exp > tp2->exp){
            p = a.ins_end(p,tp1->coe,tp1->exp);
            tp1 = tp1->next;
            ctp1 =false;
        }else if(tp1->exp < tp2->exp){
            p = a.ins_end(p,tp2->coe,tp2->exp);
            tp2 = tp2->next;
            ctp2 = false;
        }else{
            p = a.ins_end(p,tp2->coe+tp1->coe,tp2->exp);
            tp2 = tp2->next;
            tp1 = tp1->next;
            ctp1 =false;
            ctp2 = false;
        }
    }while((tp1!=p1||ctp1) && (tp2!=p2 || ctp2));
    while(tp1!=p1||ctp1){
        p = a.ins_end(p,tp1->coe,tp1->exp);
        tp1 = tp1->next;
    };
    while(tp2!=p2||ctp2){
        p = a.ins_end(p,tp2->coe,tp2->exp);
        tp2 = tp2->next;
    };
    return p;
}
int main(){
    poly a;
    poly * p;
    first = a.ins_end(first,3,2);
    first = a.ins_end(first,4,1);
    p1 = a.ins_end(p1,5,1);
    p1 = a.ins_end(p1,6,0);
    p = a.add(first,p1);
    a.display(p);
}
