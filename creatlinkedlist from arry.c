#include<stdio.h>
#include<stdlib.h>
struct node *creatlinkedlist( int arr[],int size);
struct node{
  int data;
  struct node *link;
};

int main(){
  int a[]={34,45,43};
  struct node *head;
  head=creatlinkedlist(a,3);
  while(head !=NULL){
    printf("%d->",head->data);
    head=head->link;
  }
  return 0;

}
struct node *creatlinkedlist(int arry[],int size){
    struct node *head,*temp,*current;
     int i;
     for(i=0;i<size;i++){
            temp=(struct node*)malloc(sizeof(struct node));
      temp->data=arry[i];
      temp->link=NULL;
      if(head==NULL){
        head=temp;
        current=temp;
      }else{
          current->link=temp;
          current=current->link;
      }

     }
     return head;

}
