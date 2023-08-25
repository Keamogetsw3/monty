/* The opcode pall prints all the values on the stack, starting from the top of the stack */
#include "monty.h"

/**
 * pall - print all the values on the stack
 *
 *
 */
void pall()
{
  Stack *i = stack;

  while (i != NULL)
    {
      printf("%d\n", i->n);
      i = i->next;
    }
}
