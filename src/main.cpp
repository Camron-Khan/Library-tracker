#include "arraylist.hpp"
#include <cstring>
#include <cstdio>

void printMenu(){
	printf(" 1 for adding list");
	printf("\n 2 for subtracting list");
	printf("\n 3 for seacjing list");
}


int main(){
    char nameBuff[50];
	int menuOpt = 0;
    sArray user;
	while(true){
		printMenu();
      scanf("%d", &menuOpt);
		switch(menuOpt){
		case 1:
          // This function is to add something to the list
          printf("What do you want to add to the list?");
          fgets(nameBuff,sizeof(nameBuff),stdin);
          addArray(&user, &nameBuff);
			break;
		case 2:
          // This function is the remove something from the list
          char subName[50];
          printf("What do you want to delete?");
          fgets(nameBuff,sizeof(nameBuff),stdin);
          subArray(&user, &nameBuff, sizeof(subName));
			//subtracting
			break;
		case 3:
           // This function is the search for something in the list
          char searchItem[50];
          printf("What do you want to look for?");
          fgets(nameBuff,sizeof(nameBuff),stdin);
          srArray(&user, &nameBuff, sizeof(searchItem));
			break;
		default:
			printf("incorrect option");
    }
  }
}
