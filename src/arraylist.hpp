#define Array_h
#ifdef Array_h
#include <stdio.h>
typedef struct{
    char **data;
    size_t contSize;
    int index;
}sArray;

void initArray( sArray *arr,size_t initial_capacity);     // This will initilize the array
void addArray(sArray *arr, char *target);  // This will add something to the array
void subArray(sArray *arr, char *target);  // this will remove an element from an array
void srArray(sArray *arr, char *target);   // this will search though the array for an element

#endif
