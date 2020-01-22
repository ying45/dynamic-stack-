#include "stack.h"

int main(){

  Stack s;
  s=create_stack();
  s=push(s, 7);
  printf("%d\n", top(s));
  free(s);

  return 0;
}
