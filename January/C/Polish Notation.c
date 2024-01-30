#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int evalRPN(char **tokens, int tokensSize) {
    int stack[tokensSize];
    int top = -1;

    for (int i = 0; i < tokensSize; i++) {
        if (strcmp(tokens[i], "+") == 0) {
            int temp1 = stack[top];
            top--;
            int temp2 = stack[top];
            stack[top] = temp2 + temp1;
        } else if (strcmp(tokens[i], "-") == 0) {
            int temp1 = stack[top];
            top--;
            int temp2 = stack[top];
            stack[top] = temp2 - temp1;
        } else if (strcmp(tokens[i], "*") == 0) {
            int temp1 = stack[top];
            top--;
            int temp2 = stack[top];
            stack[top] = temp2 * temp1;
        } else if (strcmp(tokens[i], "/") == 0) {
            int temp1 = stack[top];
            top--;
            int temp2 = stack[top];
            
            stack[top] = temp2 / temp1;
        } else {
            top++;
            stack[top] = atoi(tokens[i]);
        }
    }

    return stack[top];
}
