#include "arraylist.hpp"
#include <cstring>
#include <cstdio>
#include <cstdlib>
void printMenu(){
	printf(" 1 for adding list");
	printf("\n 2 for subtracting list");
	printf("\n 3 for seacjing list");
	printf("\n 4 to exit program");
}


int main(){
    char nameBuff[50];
	int menuOpt = 0;
    sArray user;
    initArray(&user, 0, 50);
	while(true){
		printMenu();
        scanf("%d", &menuOpt);
		switch(menuOpt){
		 case 1:
          // This function is to add something to the list
          printf("What do you want to add to the list?\n");
          fgets(nameBuff,sizeof(nameBuff),stdin);
          addArray(&user, &nameBuff);
			break;
		 case 2:
          // This function is the remove something from the list
          printf("What do you want to delete?\n");
          fgets(nameBuff,sizeof(nameBuff),stdin);
          subArray(&user, &nameBuff);
			//subtracting
			break;
		 case 3:
           // This function is the search for something in the list
          printf("What do you want to look for?\n");
          fgets(nameBuff,sizeof(nameBuff),stdin);
          srArray(&user, &nameBuff);
			break;
		 case 4:
     release(&user); 

		 break;
		 default:
			printf("incorrect option\n");
    }
  }
}
