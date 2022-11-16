#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data ;
    struct Node *left ,*right;
};

//inserting elements in a node .
Node* newNode(int data)
{
    Node *temp = new Node;
    temp->data=data;
    temp->left=temp->right=NULL ;
    return temp;
}

//Printing Pre order .
void printPreorder(struct Node* node)
{
   if(node == NULL)
      return;
   cout<<node->data<<"  "<<endl ;
   printPreorder(node->left);
   printPreorder(node->right);

}



int main()
{
   struct Node* root = newNode(1);
   root->left=newNode(2);
   root->right =newNode(3) ;
   root->left->left =newNode(4);
   root->left->right =newNode(5);

   cout<<"\npreorder traversal of elements "<<endl;
   printPreorder(root) ;
   return 0; 
}
