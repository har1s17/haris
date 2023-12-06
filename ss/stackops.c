#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 50

struct Stack {
    int items[MAX_SIZE];
    int top;
};

void initialize(struct Stack *stack) {
    stack->top = -1;
}

int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

int isFull(struct Stack *stack, int size) {
    return stack->top == size - 1;
}

void push(struct Stack *stack, int value, int size) {
    if (isFull(stack, size)) {
        printf("Stack Overflow: Cannot push element onto a full stack.\n");
    } else {
        stack->items[++stack->top] = value;
        printf("Pushed %d onto the stack.\n", value);
    }
}

int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow: Cannot pop element from an empty stack.\n");
        return -1;
    } else {
        return stack->items[stack->top--];
    }
}

int peek(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. Cannot peek.\n");
        return -1;
    } else {
        return stack->items[stack->top];
    }
}

void display(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= stack->top; i++) {
            printf("%d ", stack->items[i]);
        }
        printf("\n");
    }
}

int main() {
    struct Stack stack;
    int size;

    printf("Enter the size of the stack: ");
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid stack size. Please choose a size between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    initialize(&stack);

    while (1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int value;
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(&stack, value, size);
                break;
            }
            case 2: {
                int popped = pop(&stack);
                if (popped != -1) {
                    printf("Popped element: %d\n", popped);
                }
                break;
            }
            case 3: {
                int top = peek(&stack);
                if (top != -1) {
                    printf("Top element: %d\n", top);
                }
                break;
            }
            case 4:
                display(&stack);
                break;
            case 5:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}

