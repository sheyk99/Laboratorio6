#include <stdbool.h>
#ifndef STACK_H
#define STACK_H
//interfaz para la funcionalidad 


// Nodo
struct Node {
    int data;
    struct Node* next;
};

// Pila
struct Stack {
    struct Node* top;
};

// Funcion para la pila
void initialize(struct Stack* stack);

//Funcion push
void push(struct Stack* stack, int value);

//Funcion pop
int pop(struct Stack* stack);

//Funcion top
int top(struct Stack* stack);

//Funcion isEmpty
bool isEmpty(struct Stack* stack);


#endif