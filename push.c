/* The opcode push pushes an element to the stack */
#include monty.h

/**
 * push - push an element onto the stack
 * @val:
 *
 * Return: 
 */
void push(unsigned int val)
{
  Stack *new_node = malloc(sizeof(Stack));

  if (new_node == NULL)
    {
     fprintf(stderr, "Error: malloc failed \n");
     exit(EXIT_FAILURE);
     }
  new_node->n = val;
  new_node-> = stack;
  stack = new_node;
}
