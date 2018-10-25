#include <bits/stdc++.h> 
using namespace std; 
  
struct Node 
{ 
    int data; 
    struct Node* link; 
}; 
  
struct Queue 
{ 
    struct Node *front, *rear; 
}; 
  
void enQueue(Queue *q, int value) 
{ 
    struct Node *temp = new Node; 
    temp->data = value; 
    if (q->front == NULL) 
        q->front = temp; 
    else
        q->rear->link = temp; 
  
    q->rear = temp; 
    q->rear->link = q->front; 
} 
  
int deQueue(Queue *q) 
{ 
    if (q->front == NULL) 
    { 
        cout << "Queue is empty"<<endl; 
        return INT_MIN; 
    } 
  
    int value; 
    if (q->front == q->rear) 
    { 
        value = q->front->data; 
        free(q->front); 
        q->front = NULL; 
        q->rear = NULL; 
    } 
    else   
    { 
        struct Node *temp = q->front; 
        value = temp->data; 
        q->front = q->front->link; 
        q->rear->link= q->front; 
        free(temp); 
    } 
  
    return value ; 
} 
  
void displayQueue(struct Queue *q) 
{ 
    struct Node *temp = q->front; 
    cout << "\nElements in Circular Queue are: " << endl; 
    while (temp->link != q->front) 
    { 
        printf("%d ", temp->data); 
        temp = temp->link; 
    } 
    cout << "%d", temp->data << endl; 
} 
  
int main() 
{ 
    Queue *q = new Queue; 
    q->front = q->rear = NULL; 
  
    enQueue(q, 14); 
    enQueue(q, 22); 
    enQueue(q, 6); 
  
    displayQueue(q); 
  
    cout << "\nDeleted value = %d" <<  deQueue(q) << endl; 
    cout << "\nDeleted value = %d" << deQueue(q)<< endl; 
  
    displayQueue(q); 
  
    enQueue(q, 9); 
    enQueue(q, 20); 
    displayQueue(q); 
  
    return 0; 
} 
