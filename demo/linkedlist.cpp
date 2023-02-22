#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};

struct Node* head = NULL;
struct Node* current = NULL;

void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}

void insert(int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   /*new_node->next = head;
   head = new_node;*/
   if(head == NULL){
       head = new_node;
       current = new_node;
   }
       current -> next = new_node;
       current = new_node;
       current -> next = new_node;
       current = new_node;

       current -> next = NULL;
}

int main(){
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The linked list is: ";
   display();
}