// { Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

bool areIdentical(struct Node *a, struct Node *b);


int main()
{
    int T;
    cin>>T;
    while(T--){
        int n1, n2, tmp , d1 , d2;
        struct Node *head1 = NULL , *tail1=NULL;
        struct Node *head2 = NULL , *tail2 =NULL;
        cin>>n1;
        cin>>d1;
        head1 = new Node(d1);
        tail1 = head1;
        while(n1-- > 1){
            cin>>tmp;
            tail1->next = new Node(tmp);
            tail1 = tail1->next;
        }
        cin>>n2;
        cin>>d2;
        head2 = new Node(d2);
        tail2 = head2;
        while(n2-- >1)
        {
            cin>>tmp;
            tail2->next = new Node(tmp);
            tail2 = tail2->next;
        }
        areIdentical(head1, head2)?cout<<"Identical"<<endl:cout<<"Not identical"<<endl;
    }
	return 0;
}
// } Driver Code Ends


/*
Structure of the node of the linked list is as
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to check whether two linked lists are identical or not. 
int count(struct Node *head)
{
    int count = 0;
    struct Node* temp = head;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
bool areIdentical(struct Node *head1, struct Node *head2)
{
    // Code here
    if(head1 == NULL && head2 == NULL)
        return true;
    if(head1->data != head2->data)
       return false;
       int lenHead1 = count(head1);
       int lenHead2 = count(head2);
       if(lenHead1 != lenHead2){
           return false;
       }
    Node* curr1 = head1;
    Node* curr2 = head2;
    while(curr1 != NULL && curr2 != NULL)
    {
        if(curr1->data != curr2->data)
            retuhttps://media.geeksforgeeks.org/img-practice/check-square-1596781127.svgrn false;
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    return true;
}