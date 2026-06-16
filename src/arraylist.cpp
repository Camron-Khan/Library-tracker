#include "arraylist.hpp"
#include <cstddef>
#include <stdlib.h>
#include <stdio.h>
void initArray( sArray *arr,size_t initial_capacity){
   arr->eSize = 0;
   arr->contSize = initial_capacity;
   arr->data = (char ** )(arr->contSize * sizeof(char *));

   if (arr == NULL){
       printf("Memory allocation failed");
   }

}

void addArray(sArray *arr, char **element){
    if (arr->eSize == arr->contSize){
    	arr->eSize = 2;
     	void *temp = realloc(arr->data, arr->contSize * sizeof(char));
      	if (temp == NULL){
       		return ;
       }

    }


}
