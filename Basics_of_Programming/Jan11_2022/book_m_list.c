#include<stdio.h>
#include<stdlib.h>
#include <string.h>

#define NEWNODE (struct node *)malloc(sizeof(struct node))

int book_id;

struct node{
    int bookId;
    char bookName[100];
    char author[100];
    struct node *next;
}*head=NULL,*temp=NULL;



int check(char bname[]){
    struct node *temp=head;
    int flag=0;
    if(temp!= NULL){
        while(temp!=NULL){
            if(strcmp(temp->bookName,bname) == 0){
                flag=1;
                return 1;
            }
            temp=temp->next;
        }
    }
    else
        return 0;
    if (flag == 0)
        return 0;
}

void search(char bname[]){
    struct node *temp = head;
    int flag=0;
    if(temp != NULL){
        while(temp != NULL){
            if(strcmp(temp->bookName,bname) == 0)
            {
                flag=1;
                printf("Book Name: %s\nAuthor Name: %s",temp->bookName,temp->author);
                break;
            }
            temp=temp->next;
        }
    }
    if(flag==0){
        printf("No book found");
    }
}

void insertLast(char bname[], char auth[]){
    struct node *newnode,*temp;

    if(check(bname) == 0){

        newnode = NEWNODE;
        newnode->bookId = book_id++;
        strcpy(newnode->bookName,bname);
        strcpy(newnode->author,auth);
        newnode->next=NULL;

        if(head==NULL)
            head=newnode;
        else
        {
            temp = head;
            while(temp->next != NULL)
                temp=temp->next;
            temp->next = newnode;
        }
    }
    else if(check(bname) == 1){
        printf("%s already added\n", bname);
    }
}

void removeLast(){
    struct node *temp = head;
    struct node *prev;
    char d[50];

    if(temp==NULL){
        printf("Book list is Empty");
        return;
    }
    else{
        if (temp->next != NULL){
           while(temp->next!= NULL){
                prev = temp;
                temp = temp->next;
            }
            prev->next = NULL;
            free(temp);
        }
        else{
            strcpy(d,temp->bookName);
            head=NULL;
            printf("Only book %s removed from the list... Now Book list is Empty.\n",d);
        }
    }
}

void removeByElement(char* d){
    struct node *temp = head;
    struct node *prev = head;
    int flag=0;

    temp = temp->next;


    if(strcmp(head->bookName,d) == 0){
        printf("Removed %s\n",head->bookName);
        head = temp;
        flag = 1;
        return;
    }
    else{
         while(temp!= NULL){
            if (strcmp(temp->bookName,d) == 0){
                printf("Removed %s\n",temp->bookName);
                prev->next = temp->next;
                free(temp);
                flag = 1;
                return;
            }
            prev = temp;
            temp = temp->next;
        }
    }

    if(flag==0){
        printf("Book not found\n");
        return;
    }
}

void removeByPos(int pos){
    struct node *temp = head;
    struct node *prev;
    int count=1,flag=0;

    while(temp!=NULL){
        if(count == pos){
            if(count==1){
                printf("Removed %s at position %d",head->bookName,count);
                head = temp->next;
                free(temp);
                flag = 1;
                return;
            }
            else{
                printf("Removed %s at position %d",head->bookName,count);
                prev->next = temp->next;
                free(temp);
                flag = 1;
                return;
            }
        }
        prev = temp;
        temp = temp->next;
        count++;
    }
    if(flag==0){
        printf("Position does not exist\n");
        return;
    }
}

void display_books(){
    struct node *temp;
    temp=head;
    if(temp == NULL)
        printf("Book list is empty\n");
    else{
        printf("\nBook List Details\n");
        printf("-------------------------\n");
        printf("Book Name --|-- Author\n");
        printf("-------------------------\n");
        while(temp!=NULL)
        {
            printf("%s\t\t%s",temp->bookName,temp->author);
            temp = temp->next;
            printf("\n");
        }
    }
}



int main(int argc, char const *argv[])
{
    int ch,pos;
    char bname[100];
    char author[200];
    float price;

    while(1){
        printf("\n1.Insert Book\n2.Remove book by position\n3.Remove last book\n4.Remove book by Book name\n5.Search by Book name\n6.Display List\n7.Exit\n");
        printf("\nEnter the choice: ");
        scanf("%d",&ch);

        switch(ch){
             case 1 :printf("Book Name: ");
                    scanf("%s",bname);
                    printf("Author: ");
                    scanf("%s",author);
                    insertLast(bname,author);
                    break;

            case 2 : if(head == NULL)
                        printf("Book list is empty\n");
                     else{
                         printf("Position to delete the book: ");
                         scanf("%d",&pos);
                         removeByPos(pos);                   }
                      break;

            case 3 : removeLast();
                     break;

            case 4 : if(head == NULL)
                        printf("Book List empty\n");
                     else{
                         printf("Book Name to delete: ");
                         scanf("%s",bname);
                         removeByElement(bname);
                        }
                        break;
            
            case 5 : printf("Book name: ");
                      scanf("%s",bname);
                      search(bname);
                      break;

            case 6 : display_books();
                    break;
        
            case 7 : exit(0);

            default : printf("Invalid Choice\n");
                    break;
        }
    }
    return 0;
}