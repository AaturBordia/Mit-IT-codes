#include <iostream>
#include <queue>
#include <stack>
using namespace std;

struct Node{
    int data;
    Node *lc, *rc;
};

class Tree{

    private:
    Node *root;

    protected:
    Node* createTree(){
        int val;
        cout<<">";
        cin>>val;
        if(val==-1)
            return NULL;
        Node *temp= new Node;
        temp->data=val;
        cout<<"Left child of "<<val<<endl;
        temp->lc=createTree();
        cout<<"Right child of "<<val<<endl;
        temp->rc=createTree();
    }

    void post(Node *node) const{
        if (node == NULL)
            return;
        post(node->lc);
        post(node->rc);
        cout<<node->data <<" ";
    }

    void pre(Node *node) const{
        if(node == NULL)
            return;
        cout<<node->data <<" ";
        pre(node->lc);
        pre(node->rc);
    }

    void in(Node *node) const{
        if(node == NULL)
            return;
        in(node->lc);
        cout<<node->data <<" ";
        in(node->rc);
    }

    public:
    Tree(){
        root=NULL;
    }

    void create(){
        cout<<"Use -1 to break"<<endl;
        cout<<"Enter root"<<endl;
        root=createTree();
    }

    void postOrder() const{
        cout<<"Postorder Traversal >>";
        post(root);
        cout<<endl;
    }

    void preOrder() const{
        cout<<"Preorder Traversal >>";
        pre(root);
        cout<<endl;
    }

    void inOrder() const{
        cout<<"Inorder Traversal >>";
        in(root);
        cout<<endl;
    }



    bool searchParent(Node *curr, int elem) const{
        if(curr->lc){
            if(curr->lc->data==elem){
                cout<<"Parent is "<<curr->data<<endl;
                return true;
            }
            else
                searchParent(curr->lc,elem);
        }
        if(curr->rc){
            if(curr->rc->data==elem){
                cout<<"Parent is "<<curr->data<<endl;
                return true;
            }
            else
                searchParent(curr->rc,elem);
        }
        return false;
    }

    void parent(int elem) const{
        if(root->data==elem){
            cout<<"Root has no parent"<<endl;
            return;
        }
        else{
            if(!searchParent(root,elem))
                cout<<"Element does not exist in the tree"<<endl;
        }
    }

    int counter(Node *node) const{
        if (node == NULL)
            return 0;
        int lDepth=counter(node->lc);
        int rDepth=counter(node->rc);
        // Return larger of both plus one for root
        if (lDepth > rDepth)
            return(lDepth + 1);
        else
            return(rDepth + 1);

    }

    void level() const{
        int v=counter(root);
        cout<<"Total Depth is:"<<v<<endl;
    }

    bool searchAncestor(Node *node, int elem) const{
        if (node == NULL)
            return false;
        if (node->data ==elem)
            return true;
        if ( searchAncestor(node->lc, elem) || searchAncestor(node->rc,elem) ) {
            cout << node->data << " ";
            return true;
        }
        return false;
    }

    void ancestors(int elem) const{
        if(root->data==elem)
            cout<<"Root element has no ancestor"<<endl;
        else{
            if(!searchAncestor(root,elem))
                cout<<"Element does not exist in the tree"<<endl;
        }

    }

    int countleafs(Node *node){
        static int count=0;
        if (node == NULL){
            count++;
            return 0;
        }
        countleafs(node->lc);
        countleafs(node->rc);
        return count;
    }

    int leafcount(Node *node){
        if(node==NULL)
            return 0;
        else if(!node->lc && !node->rc)
            return 1;
        else
            return leafcount(node->lc)+leafcount(node->rc);
    }

    void leafs(){
        cout<<"Leafs present: "<<countleafs(root)/2<<endl;
        cout<<"Leafs present by leafcount: "<<leafcount(root)<<endl;
    }

};

int main(){
    Tree T;
    T.create();
    T.inOrder();
    T.preOrder();
    T.postOrder();
    int m,n;
    cout<<"Find parent of?";
    cin>>n;
    T.parent(n);
    T.level();
    cout<<"Find ancestor of?";
    cin>>m;
    T.ancestors(m);
    T.leafs();
}
