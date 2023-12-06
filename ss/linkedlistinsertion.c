#include <stdio.h>
#include <stdlib.h>

// Define a Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the beginning of the linked list
struct Node* insertFirst(struct Node* head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
    return head;
}

// Function to insert a node at a specific position in the linked list
struct Node* insertInBetween(struct Node* head, int newData, int position) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;

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
        printf("Invalid position\n");
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

// Function to insert a node at the end of the linked list
struct Node* insertLast(struct Node* head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
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

// Function to display the linked list
void displayList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    // Insert at the first position
    head = insertFirst(head, 1);

    // Insert at in-between position (position 2)
    head = insertInBetween(head, 3, 2);

    // Insert at in-between position (position 1)
    head = insertInBetween(head, 2, 1);

    // Insert at the last position
    head = insertLast(head, 4);

    // Display the linked list
    printf("Linked List: ");
    displayList(head);

    return 0;
}

