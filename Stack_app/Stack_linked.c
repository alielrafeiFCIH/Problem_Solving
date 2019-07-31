#include "Stack.h"
#include <stdlib.h>
void CreateStack_array(Stack_array *ps){
ps->top=0;
}
void CreateStack_linked(Stack_linked *ps){
   ps->top=NULL;
   ps->Size=0;
}
int Stack_arrayFull(Stack_array *ps){
return ps->top>=MaxStack;
}
int Stack_linkedFull(Stack_linked *ps){
 return 0;
}
int Stack_arrayEmpty(){

}
