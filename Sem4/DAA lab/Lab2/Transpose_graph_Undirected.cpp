// Transpose of a graph using lists
#include<iostream>
using namespace std;

class Node{
	public:
	int value;
	Node* next = NULL;
};

void print(Node* head){
	Node* temp = head;
	while(temp != NULL){
		cout << temp->value<< " ";
		temp = temp->next;
	}
}

void addEdge(Node*& head, int value){
	if(!head){
		head = new Node;
		head->value = value;
		return;
	}
	Node* temp = head;
	while(temp->next != NULL)
		temp = temp->next;

	Node* newnode = new Node;
	newnode->value = value;
	temp->next = newnode;
}

int main(){
	int n, i;
    cout<<"Enter number of vertices(n):";
    cin>>n;
	Node* graph[n+1]= {NULL};
    cout<<"Enter the position of the vertices that are adjacent:"<<endl;
    int u=0, v=0;
    while(true){
        cin>>u>>v;
        if(u!=-1 || v!=-1)
            addEdge(graph[u], v);
        else
            break;
    }
    cout<<"Traversal before transpose:"<<endl;
    for(i=1;i<n+1;i++){
        cout<<i<<"->";
        print(graph[i]);
        cout<<endl;
    }

    Node* transpose[n+1]= {NULL};
    for(i=1;i<n+1;i++){
        Node *curr=graph[i];
        while(curr){
            addEdge(transpose[curr->value],i);
            curr=curr->next;
        }
    }

    cout<<"Traversal after transpose:"<<endl;
    for(int i=1;i<n+1;i++){
        cout<<i<<"->";
        print(transpose[i]);
        cout<<endl;
    }
}
