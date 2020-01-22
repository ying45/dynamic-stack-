#ifndef __STACK_H__
#define __STACK_H__

#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#include <assert.h>

typedef struct s_stack *Stack;

//stack
Stack create_stack();
Stack push(Stack s, int elem);
Stack pop(Stack s);
int top(const Stack s);
bool empty(const Stack s);


#endif
