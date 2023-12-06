#include <stdio.h>
#include <stdlib.h>

struct Node {
 int data;
    struct Node* next;
};
struct Node* insertFirst(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    return head;
}
struct Node* insertRandom(struct Node* head, int value, int position) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if (position == 1) {
        newNode->next = head;
        head = newNode;
        return head;
    }

    struct Node* temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position. Inserting at the end.\n");
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

struct Node* insertLast(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return head;
    }

    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;

    return head;
}

void displayList(struct Node* head) {
    printf("Linked List: ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    int choice, value, position;

    while (1) {
        printf("\nLinked List Operations:\n");
        printf("1. Insert at the First\n");
        printf("2. Insert at Random Location\n");
        printf("3. Insert at Last\n");
        printf("4. Display List\n");
        printf("5. Exit\n");
  printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to be inserted: ");
                scanf("%d", &value);
                head = insertFirst(head, value);
                break;
            case 2:
                printf("Enter the value to be inserted: ");
                scanf("%d", &value);
                printf("Enter the position to insert: ");
                scanf("%d", &position);
                head = insertRandom(head, value, position);
                break;
            case 3:
                printf("Enter the value to be inserted: ");
                scanf("%d", &value);
                head = insertLast(head, value);
                break;
            case 4:
                displayList(head);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}

