#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

//implementacion de las funciones

// Funcion para inicializar una pila vacia
void initialize(struct Stack* stack) {
    stack->top = NULL;
}

// push
void push(struct Stack* stack, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Error: No se pudo asignar memoria\n");
        return;
    }
    newNode->data = value;
    newNode->next = stack->top;
    stack->top = newNode;
}

// pop
int pop(struct Stack* stack) {
    if (isEmpty(struct Stack* stack)) {
        printf("Stack underflow: la pila esta vacia\n");
        return -1; // retorno cualquiera para indicar error
    }
    struct Node* temp = stack->top;
    int data = temp->data;
    stack->top = stack->top->next; //elimino el elemento apuntando el top viejo al siguiente en stack
    free(temp);
    return data; //devuelve el elemento eliminado
}

// top
int top(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow: la pila esta vacia\n");
        return -1; // Valor de retorno arbitrario para indicar error
    }
    return stack->top->data;
}


// isEmpty
bool isEmpty(struct Stack* stack) {
    return stack->top == NULL;
}