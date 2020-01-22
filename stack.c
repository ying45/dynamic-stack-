#include "stack.h"


typedef struct s_element{
  int value;
  struct s_element *next;
} *Element;

struct s_stack{
  Element top;
};

Stack create_stack(){
  //cree la stack
  Stack s = (struct s_stack*)malloc(sizeof(struct s_stack));
  s->top = NULL;

  return s;
}


bool empty(const Stack s){ //cont == la fonction ne doit pas modifier le contenue de s
  //verfie si la stack est vide ou non
  return (s->top == NULL);
}


Stack push(Stack s, int elem){
  /// ajouter elem à stack
  Element new =(struct s_element*)malloc(sizeof(struct s_element));

  new->value = elem;
  new->next = s->top;

  s->top = new;

  return s;
}


int top(const Stack s){
  //renvoie l'élement top
  assert(!empty(s));
  return s->top->value;
}


Stack pop(Stack s){
  // supprime l'element tout en haut
  assert(!empty(s));
  Element e = s->top;
  s->top = e->next;
  free(e);

  return s;
}
