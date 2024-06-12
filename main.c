#include "stack.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


int main() {
    struct Stack stack;


//inicia la pila
    initialize(&stack);

//revisa el push
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    printf("Elemento superior en la pila: %d\n", top(&stack));

//revisa el pop
    printf("Elemento superior eliminado en la pila: %d\n", pop(&stack));
    printf("Elemento superior en la pila: %d\n", top(&stack));

//revisa si esta vacia 
    pop(&stack);
    pop(&stack);

    if (isEmpty(&stack) == 1){
        printf("El stack esta vacio.\n");
    } else {
        printf("El stack no esta vacio.\n");
    }
    
    return 0;
}

