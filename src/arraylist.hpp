#define Array_h
#ifdef Array_h

typedef struct{
    char **data;
    size_t eSize;
    size_t contSize;

}sArray;

void initArray( sArray *arr,size_t initial_capacity);     // This will initilize the array
void addArray(sArray *arr, char **b);  // This will add something to the array
void subArray(sArray *arr, char **b);  // this will remove an element from an array
void srArray(sArray *arr, char **b);   // this will search though the array for an element

#endif
