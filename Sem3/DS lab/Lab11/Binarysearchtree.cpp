#include <iostream>
using namespace std;
class bst
{
    bst *lc, *rc;
    int data;
public:
    bst(int e)
    {
        lc=NULL;
        rc=NULL;
        data=e;
    }
    void ins(int);
    void display(bst *);
    void del(bst *&, int);
    bst* minKey(bst *);
    void searchKey(bst *&, int, bst *&);
    void search1(int);
    bst* search_rec(bst*, int);
}*root=NULL;
void bst::ins(int e)
{
    bst *temp=new bst(e);
    if(root==NULL)
    {
        root=temp;
        return;
    }
    else
    {
        bst *curr=root, *prev=NULL;
        while(curr)
        {
            prev=curr;
            if(temp->data<curr->data)
                curr=curr->lc;
            else if(temp->data>curr->data)
                curr=curr->rc;
            else
            {
                cout<<"Insertion not possible\n";
                return;
            }
        }
        if(temp->data>prev->data)
            prev->rc=temp;
        else if(temp->data<prev->data)
            prev->lc=temp;
    }
}
void bst::display(bst*ptr)
{
    if(ptr)
    {
        display(ptr->lc);
        cout<<ptr->data<<endl;
        display(ptr->rc);
    }
}
void bst::searchKey(bst *& curr, int key, bst *&parent)
{
    while(curr!=NULL && curr->data!=key)
    {
        parent=curr;
        if(key<curr->data)
            curr=curr->lc;
        else
            curr=curr->rc;
    }
}
bst* bst::minKey(bst *curr)
{
    while(curr->lc!=NULL)
        curr=curr->lc;
    return curr;
}
void bst::del(bst *& root, int key)
{
    bst *parent=NULL;
    bst *curr=root;
    searchKey(curr, key, parent);
    if(curr==NULL)
        return;
    //CASE-1 leaf node
    if(curr->lc==NULL && curr->rc==NULL)
    {
        if(curr!=root)
        {
            if(parent->lc==curr)
                parent->lc=NULL;
            else
                parent->rc=NULL;
        }
        else
            root=NULL;
        delete(curr);
    }
    //CASE-2 2 children
    else if(curr->lc && curr->rc)
    {
        bst *successor=minKey(curr->rc);
        int val=successor->data;
        del(root, successor->data);
        curr->data=val;
    }
    //CASE-3 1 child
    else
    {
        bst *child=(curr->lc)?curr->lc:curr->rc;
        if(curr!=root)
        {
            if(curr==parent->lc)
                parent->lc=child;
            else
                parent->rc=child;
        }
        else
            root=child;
        delete(curr);
    }
}
void bst::search1(int ele)
{
    if(root==NULL)
    {
        cout<<"Tree empty\n";
        return;
    }
    bst*curr=root;
    while(curr!=NULL)
    {
        if(curr->data==ele)
        {
            cout<<"Found\n";
            return;
        }
        else if(curr->data>ele)
            curr=curr->lc;
        else
            curr=curr->rc;
    }
    cout<<"Not found\n";
}
bst* bst::search_rec(bst *r, int key)
{
    if(!r)
        return NULL;
    if(key==r->data)
        return r;
    if(key<r->data)
        return(search_rec(r->lc, key));
    return(search_rec(r->rc, key));
}
int main()
{
    bst a=bst(0);
    a.ins(2);
    a.ins(3);
    a.ins(4);
    a.ins(1);
    a.ins(7);
    a.ins(6);
    a.ins(5);
    a.del(root, 1);
    a.del(root, 7);
    a.search1(5);
    a.search1(7);
    bst *b=a.search_rec(root,3);
    if(b!=NULL)
        cout<<"Found\n";
    else
        cout<<"Not found\n";
    bst *c=a.search_rec(root,10);
    if(c!=NULL)
        cout<<"Found\n";
    else
        cout<<"Not found\n";
    a.display(root);
}
