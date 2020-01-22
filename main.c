#include "stack.h"

int main(){

  Stack s;
  s=create_stack();
  s=push(s, 7);
  printf("PUSH : %d\n", top(s));
  s=push(s, 9);
  printf("PUSH : %d\n", top(s));

  free(s);

  return 0;
}
