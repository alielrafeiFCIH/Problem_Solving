#include "Stack.h"
void Push (Stack *ps,int n){
    ps->Entry[ps->top++]=n;
    ps->Size++;
}
void Pop(Stack *ps,int *n){
    *n=ps->Entry[--ps->top];
    ps->Size--;
}
int StackSize(Stack *ps){
return ps->Size;
}
int Back(Stack s){
    return s.Entry[s.top-1];
}
void clearStack(Stack *ps){
    ps->top=0;
    ps->Size=0;
}
