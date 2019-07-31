#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define MaxStack 6
typedef char StackEntry;
typedef struct stack_array{
    int top;
    StackEntry entry[MaxStack];
}Stack_array;

typedef struct stacknode{
    StackEntry entry;
    struct stacknode *next;
}StackNode;

typedef struct stack_linked{
        StackNode *top;
        int Size;
}Stack_linked;


//typedef StackNode *Stack_linked ;

#endif // STACK_H_INCLUDED
