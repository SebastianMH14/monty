#include "monty.h"

/**
*
*
*
*
*/
void selec_fun(stack_t **head, char token, unsigned int count_lines)
{
    instruction_t op[] = {
        {"push", fun_push},
        {"pall", fun_pall},
        {NULL,NULL}  

    };
    int i = 0;
    
    while (op[i].opcode != NULL)
    {
        if(strcmp(op[i].opcode, token) == 0)
        {
            op[i].f(head, count_lines);
            return;
        }
        i++
    }
    exit(EXIT_FAILURE)
}
