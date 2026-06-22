#include <cstring>
#include <stdlib.h>
#include "arraylist.hpp"
void initArray( sArray *arr,size_t initial_capacity){
   arr->eSize = 0;
   arr->contSize = initial_capacity;
   arr->data = (char ** )(arr->contSize * sizeof(char *));


   if (arr == NULL){
       printf("Memory allocation failed");
   }

}

void addArray(sArray *arr, char *element){
    if (arr->eSize == arr->contSize){
    	arr->eSize = 2;
     	void *temp = realloc(arr->data, arr->contSize * sizeof(char));
      	if (temp == NULL){
       		printf("Reallcation failed");
       }
    }
    arr->data[arr->eSize] = (char *)malloc((strlen(element) + 1) * sizeof(char));
    if (arr->data[arr->eSize] == NULL){
    	printf("String allocation failed");
    }
    strcpy(arr->data[arr->eSize], element);
}

void subArray(sArray *arr, size_t index){
	if (index >= arr->eSize){
		printf("Out of bounds");
	}
	free(arr->data[index]);
	if (index != arr->eSize){
		arr->data[index] = arr->data[arr->eSize -1];
	}
	arr->eSize --;
}

void srArray(sArray *arr, size_t size, char *target){
	for (int i = 0; i < size; i++){
		if(strcmp(arr->data[i], target) == 0){
			printf("String exists");
		}
	}
	printf("String dosent exist");
}
