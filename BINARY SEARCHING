// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
 
struct Node{
    int data;
    Node*left;
    Node*right;
    Node(int val){
        data = val;
        left=right=nullptr;
    }
};
        Node * insert(Node*root,int key){
            if(root==nullptr){
                return new Node(key);
            }
            else if(key<root->data){
                root->left=insert(root->left,key);
            }
            else if(key>root->data){
                root->right=insert(root->right,key);
            }
                return root;
            }
            void preorder(Node*root){
                if(root){
                    cout<<root->data<<" ";
                    preorder (root->left);
                    preorder(root->right);
                }
            }
            void inorder(Node*root){
                if(root){
                    preorder (root->left);
                    cout<<root->data<<" ";
                    preorder(root->right);
        }
            }
            void postorder(Node*root){
                if(root){
                    cout<<root->data<<" ";
                    preorder (root->left);
                    preorder(root->right);
                }
            }
            
        int main(){
            int n;
            cout<<"Enter the total number of Nodes:";
            cin>>n;
            int*arr=new int[n];
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
            Node*root=nullptr;
            for(int i= 0;i<n;i++){
                root = insert(root,arr[i]);
            }
            preorder(root);
            cout<<endl;
            inorder(root);
            cout<<endl;
            postorder(root);
            cout<<endl;
    }
