#include <cstring>
#include <stdlib.h>
#include <string.h>
#include "arraylist.hpp"
void initArray( sArray *arr,size_t initial_capacity){
   arr->contSize = initial_capacity;
   arr->data = (char ** )(arr->contSize * sizeof(char *));
   arr->elementSize = NULL;

   if (arr == NULL){
       printf("Memory allocation failed");
   }

}

void addArray(sArray *arr, char *target){
  for (int i = 0; arr->elementSize[i] > arr->contSize; i++){
    if (arr)
  }



// This is the old reference for the add Array function
  //if (arr->eSize == arr->contSize){
    //arr->eSize = 2;
    //	void *temp = realloc(arr->data, arr->contSize * sizeof(char));
    // 	if (temp == NULL){
    //  		printf("Reallcation failed");
      // }
    //}
    //arr->data[arr->eSize] = (char *)malloc((strlen(element) + 1) * sizeof(char));
    //if (arr->data[arr->eSize] == NULL){
    	//printf("String allocation failed");
    //}
    //std::strcpy(arr->data[arr->eSize], element);
}

void subArray(sArray *arr, char *target, size_t size){
  for(int i = 0; i < size; i++){
    if(std::strcmp(arr->data[i], target) == 1){
      printf("string does exist");
    }
    printf("string does not exist");
  }
}

void srArray(sArray *arr, char *target, size_t size){
	for (int i = 0; i < size; i++){
		if(std::strcmp(arr->data[i], target) == 0){
			printf("String exists");
		}
	}
	printf("String dosent exist");
}
