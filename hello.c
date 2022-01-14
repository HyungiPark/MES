#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

struct Node {   // 연결 리스트의 노드 구조체
    struct Node* next;    // 다음 노드의 주소를 저장할 포인터
    int data;             // 데이터를 저장할 멤버
};

struct Node* head; // global variabel, can be accessed anywhere

void Insert(int x) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;
}

//void Link(struct Node* tmp, struct Node* temp) {
//    printf("tmp->data = %d,  temp->data = %d\n", tmp->data, temp->data);
//    temp->next = tmp;
//    /*tmp = temp->next;
//    head = temp;*/
//   }

void addNode(int add, int addData) {

    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
        temp = head;
        //temp->data = addData;
        struct Node* tmp = (struct Node*)malloc(sizeof(struct Node));
    for (int i = 0; i < add; i++) {
        printf("%d 번째 node\n", i);
        temp = temp->next;
        //head->next = tmp;
    }
    temp->data = addData;
    printf("추가후 == %d\n", temp->data);
    // Link(tmp, temp);
}

void Print() {

    struct Node* temp = head;
    printf("List is: ");

    while (temp != NULL) {
        printf(" %d", temp->data);
        temp = temp->next;
    }
    printf("\n");
    free(temp);
    free(head);

}

int main() {
    head = NULL; // empty variable, can be accessed anywhere

    printf("How many numbers? \n");
    int n, i, x;
    int add, addData;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter the number \n");
        scanf("%d", &x);
        Insert(x);
        //Print(head);
    }

    printf("삽입될 위치의 번호와 data를 입력해주세요 \n");
    scanf("%d %d", &add, &addData);
    addNode(add, addData);
    Print(head);
    printf("\n\n===End");

}
