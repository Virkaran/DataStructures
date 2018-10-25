#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
	struct node *prev;
};

class dlist{
	private:
		struct node *head, *tail;
	public:
		dlist(){
			head==NULL;
			tail==NULL;
		}
		void push(int n){
			struct node *temp = new node;
			temp->data=n;
			temp->next=NULL;
			if(head==NULL){
				head=temp;
				tail=temp;
			}else{
				tail->next=temp;
				temp->prev=tail;
				tail=prev;
			}
		}
		int search(int n){
			node *x=head;
			while(x!=NULL){
				if(x->data==n){
					return 1;
				}
				x=x->next;
			}
		}
		void delete(int n){
			node *x=head;
			while(x!=NULL){
				if(x->next->data==n){
					break;
				}
				x=x->next;
			}
			node *y;
			y=x->next;
			x->next=y->next;
			y->next->prev=x;
			free(y);
		}
		void display(){
			node *x=head;
			while(x!=NULL){
				cout << x->data << endl;
				x=x->next;
			}
		}
};
int main(){
	//Add the functions
}
