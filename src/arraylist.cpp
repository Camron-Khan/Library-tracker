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

  if (arr->index >= arr->contSize) {
    arr->contSize += 10;
    char **temp = (char **)realloc(arr->data, arr->contSize * sizeof(char *));
    if (temp == NULL) {
      printf("Memory error");
    }
    arr->data = temp;
  //This is to check if you have the same name in the list already  
  for (int i = arr->index; i <= arr->contSize; i++){
    if (std::strcmp(arr->data[i], name)){
      printf("you already have this name in the list");
     }
    arr->data[arr->index] = (char *)malloc(strlen(name) + 1);
     if (arr->data[arr->index] == NULL){
     }
     std::strcpy(arr->data[arr->index], name);
     }
  }
}  

void subArray(sArray *arr, char *name){
  if (arr == NULL){
    printf("Memory error");
  }

  for (int i = arr->index; i <= arr->contSize; i++){
    if (std::strcmp(arr->data[i], name) == true){
      free(arr->data[arr->index]);
           for (i; i < arr->contSize; i++){
	     arr->data[arr->index] = arr->data[arr->index + 1];
      }    
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
  
