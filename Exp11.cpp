#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};

class tree{
	void push(int n){
		struct node *temp = new node;
		temp->data=n;
		temp->left=temp->right=NULL;
		return temp;
	}
	
	void PreOrder(struct node *root){
		if(root){
			cout  << root->data;
			PreOrder(root->left);
			PreOrder(root->right); 
		}
	}
	void PostOrder(struct node *root){
		if(root){
			PostOrder(root->left);
			PostOrder(root->right);
			cout << root->data;
		}
	}
	void InOrder(struct node *root){
		if(root){
			InOrder(root->left);
			cout << root->data;
			InOrder(root->right);
		}
	}
};


int main(){
	class tree a;
	root=a.NewNode(11);
	root->left=a.NewNode(9);
	root->right=a.NewNode(13);
	
	a.InOrder(root);
	a.PostOrder(root);
	a.PreOrder(root);
}
