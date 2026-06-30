#include <cstring>
#include <stdlib.h>
#include <string.h>
#include "arraylist.hpp"
void initArray( sArray *arr,size_t initial_capacity){
   arr->contSize = initial_capacity;
   arr->data = (char ** )(arr->contSize * sizeof(char *));
   if (arr == NULL){
       printf("Memory allocation failed");
   }

}

void addArray(sArray *arr, char *name){
  if (arr == NULL){
    std::printf("Memory error");
  }

  if (arr->index > arr->contSize){
    std::printf("You are out of space for the allocation");
  }
  //This is to check if you have the same name in the list already  
  for (int i = 0; arr->index[i] >= arr->contSize; i++){
    if (arr->data == name){
      std::printf("you already have this name in the list");
     }
  arr[index] = malloc(strlen(name) + 1);
  strcpy(arr[index], name);
  }
}

void subArray(sArray *arr, char *name){
  if (arr == NULL){
    std::printf("Memory error");
  }

  for (int i = 0; arr->index[i] >= arr->contSize, i++){
    if (strcmp(arr->data, name) == ){
      
    }
  }


}

void srArray(sArray *arr, char *name){
	if (arr == NULL){
    std::printf("Memory error");
  }

  for (int i = 0; i < size; i++){
		if(std::strcmp(arr->data[i], name) == true){
			printf("String exists");
		}
	}
	printf("String dosent exist");
}
