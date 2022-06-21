// { Driver Code Starts
//Initial Template for C++


//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};

Node *newNode(int data)
{
    Node *temp=new Node(data);
    
    return temp;
}



void displayList(Node *head)
{
    //Head to Tail
    while(head->next)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<head->data;
    cout<<endl;
    
    //Tail to Head
    while(head->prev)
    {
        cout<<head->data<<" ";
        head=head->prev;
    }
    cout<<head->data;
    
   
    
    
}






 // } Driver Code Ends
//User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/

Node *insertInHead(Node * head, int data)
{
    //Your code here
    Node* newNode = new Node(data);
    Node *temp = head;
    newNode->next = temp;
    temp->prev = newNode;
    head = newNode;
    return head;
}


// { Driver Code Starts.




int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    Node *head=NULL, *tail=NULL;
        int x;
	    cin>>x;
	    head = newNode(x);
	    tail = head;
	    
	    for(int i=0;i<n - 1;i++)
	    {
	        cin>>x;
	        Node* temp=newNode(x);
	        tail->next=temp;
	        temp->prev= tail;
	        tail = temp;
	    }
	    int data;
	    cin>>data;
	    
	    head=insertInHead(head,data);
	    
	    displayList(head);
 
	    cout<<endl;
	}
	return 0;
}


  // } Driver Code Ends