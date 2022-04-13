/*
Neste ficheiro estão incluídas as funções básicas para o funcionamento da stack:
    - new_stack()
    - push()
    - pop()
*/

#include <stdlib.h>
#include "stack.h"

//aloca espaço na memória heap atribuindo um endereço ao pointer s e iniciando o stack pointer a 0
STACK *new_stack()
{
    STACK *s = malloc(sizeof(STACK));
    s->sp = 0;
    return s;
}

//introduz um novo elemento na stack incrementando um valor ao stack pointer e introduz na stack o elem
void push(STACK* s, long elem)
{
    long *elemP = malloc(sizeof(long));
    *elemP = elem;
    
    DADOS d = {LONG, elemP};
    s->sp++;
    s->stack[s->sp] = d;
}


//dá return do elemento que está na posição atual do stack pointer e decrementa o stack pointer
void* pop(STACK* s)
{
    DADOS d = s->stack[s->sp];
    s->sp--;

    return (d.dados);
}