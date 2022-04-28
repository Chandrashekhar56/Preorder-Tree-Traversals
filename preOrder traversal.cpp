
#include<iostream>
using namespace std;
struct node{
   int data_part;
   struct node *left_node;
   struct node *right_node;
};
struct node *create_new_Node(int value)
{
   struct node *temporary = (struct node *)malloc(sizeof(struct node));
   temporary->data_part= value;
   temporary->left_node= temporary->right_node= NULL;
   return temporary;
}
struct node* insert_new_Node(struct node* root_node, int value)
{
   if(root_node == NULL)
   {
       return create_new_Node(value);
   }
   if(value < root_node->data_part)
   {
        root_node->left_node = insert_new_Node(root_node->left_node, value);
   }
   else if (value > root_node->data_part)
   {
       root_node->right_node = insert_new_Node(root_node->right_node, value);
   }
   return root_node;
}
void inorder_traversal(struct node *root_node)
{
   if (root_node!= NULL)
    {
        cout<<root_node->data_part<<" ";
      inorder_traversal(root_node->left_node);

      inorder_traversal(root_node->right_node);
   }
}
int main() {
    struct node *root_node =NULL;
   root_node=insert_new_Node(root_node, 10);
   insert_new_Node(root_node, 5);
   insert_new_Node(root_node, 2);
   insert_new_Node(root_node, 9);
   insert_new_Node(root_node, 12);
   insert_new_Node(root_node, 23);
   cout<<"In-Order traversal: ";
   inorder_traversal(root_node);
   return 0;
}
