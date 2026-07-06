#include <cstring>              
#include <stdlib.h>
#include <cstdio>
#include "arraylist.hpp"

void initArray( sArray *arr,int Sindex, size_t initial_capacity){
   arr->contSize = initial_capacity;
   arr->data = (char ** )(arr->contSize * sizeof(char *));
   arr->index = Sindex;
      if (arr == NULL){
       printf("Memory allocation failed");
   }

}

void addArray(sArray *arr, char *name){
  if (arr == NULL){
    printf("Memory error");
  }

  if (arr->index > arr->contSize){
    printf("You are out of space for the allocation");
  }
  //This is to check if you have the same name in the list already  
  for (int i = arr->index; i >= arr->contSize; i++){
    if (std::strcmp(arr->data[i], name)){
      printf("you already have this name in the list");
     }
  arr[index] = malloc(strlen(name) + 1);
  strcpy(arr[index], name);
  }
}

void subArray(sArray *arr, char *name){
  if (arr == NULL){
    printf("Memory error");
  }

  for (int i = arr->index; i >= arr->contSize; i++){
    if (std::strcmp(arr->data[i], name) == true){
      
    }
  }


}

void srArray(sArray *arr, char *name){
	if (arr == NULL){
    printf("Memory error");
  }

  for (int i = arr->index; i >= arr->contSize; i++){
		if(std::strcmp(arr->data[i], name) == true){
			printf("String exists");
		}
	}
	printf("String dosent exist");
}

  void release(sArray **arr){
    if (*arr == NULL || arr == NULL){
      return;
     }
      if ((*arr)->data){
       for (size_t i = 0; i < (*arr)->contSize; i++){
        free((*arr)->data);
       }
      }
      free(*arr);
  }
