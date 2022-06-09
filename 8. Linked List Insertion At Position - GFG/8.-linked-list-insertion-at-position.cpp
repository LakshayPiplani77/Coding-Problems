// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }
        
};

void displayList(Node *head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}



 // } Driver Code Ends
//User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }
        
};
*/
//Complete this function
void insertAtPosition(Node *head, int pos, int data)
{
    //Your code
    Node* temp = new Node(data);
    if(pos == 1)
    {
        temp->next = head;
    }
    Node* curr = head;
    for(int i = 1;i<=pos-1 && curr != NULL;i++)
    {
        curr = curr->next;
    }
    if(curr == NULL)
       return;
    temp->next = curr->next;
    curr->next = temp;
    
}

// { Driver Code Starts.


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < n-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        int pos; cin >> pos;
        int d; cin >> d; 
        insertAtPosition(head, pos, d);
        displayList (head);
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends