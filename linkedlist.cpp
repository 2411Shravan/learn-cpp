#include<iostream>

using namespace std;

struct Node {
   int data;
   struct Node *next;
};

struct Node* head = NULL;

void insert(int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}

void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}

void delete_node(){
    struct Node* ptr;
    ptr=head;
    ptr=ptr->next;
    head=ptr;
}

void insertingivenposition(int position, int value){
    struct Node* ptr;
    ptr=head;
    for(int i=0;i<position;i++){
        ptr=ptr->next;
    }
    struct Node* temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=value;
    temp->next=ptr->next;
    ptr=temp;
}

int main(){

   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The linked list is : "<<endl;
   display();
   delete_node();
   display();
   insertingivenposition(3,21);

   return 0;

}