#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
    int data;
    struct _node *next;
}Node;

int main()
{
    Node *head=NULL;
    Node * tail=NULL;
    Node *cur=NULL;

    Node *newNode=NULL;
    int readData;

    while(1)
    {
        printf("�ڿ��� �Է�: ");
        scanf("%d",&readData);
        if(readData<1)break;

        newNode=(Node*)malloc(sizeof(Node));
        newNode->data=readData;
        newNode->next=NULL;

        if(head==NULL){
            head=newNode;
            tail=newNode;
        }

        else{
            newNode->next=head;
            head=newNode;
        }

        tail=newNode;
    }
    printf("\n");

    printf("�Է� ���� �������� ��ü ���!\n");
    if(head==NULL) printf("����� �ڿ����� �������� �ʽ��ϴ�. \n");
    else{
        cur=head;
        printf("%d ",cur->data);

        while(cur->next !=NULL){
            cur=cur->next;
            printf("%d ",cur->data);
        }
    }
    printf("\n\n");

    //if(head==NULL) return 0;
    while(head->next!=NULL){
        Node *delNode=head;
        head=head->next;
        printf("%d��(��) �����մϴ�. \n",delNode->data);
        free(delNode);
    }
    return 0;
}
