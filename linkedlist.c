#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
     
    struct node *head;
    struct node *first;
     head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));

head->data = 10;
head->next = first;

first->data = 100;
first->next = NULL;

/*inserting the element at the  first node*/
struct node *insert_first;
insert_first->data = 1;
insert_first->next =head;
head = insert_first;


while (head!=NULL)
{
    printf("%d\n", head->data);
    head = head->next;


}
return 0;
}