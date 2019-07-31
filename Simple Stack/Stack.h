#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
typedef struct Stack {
    int Entry[100];
    int top=0;
    int Size=0;
}Stack;
void Push (Stack *ps,int n);
void Pop(Stack *ps, int *n);
int StackSize(Stack *ps);
int Back(Stack s);
void clearStack(Stack *ps);

#endif // STACK_H_INCLUDED
