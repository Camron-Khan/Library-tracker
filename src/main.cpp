#include "arraylist.hpp"
#include <cstring>
#include <cstdio>

void printMenu(){
	printf(" 1 for adding list");
	printf("\n 2 for subtracting list");
	printf("\n 3 for seacjing list");
}
// Maybe I'll do a string input function to create a string without size
//void stringInp(){}

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
			break;
		case 2:
          // This function is the remove something from the list
          char subName[50];
          printf("What do you want to delete?");
          fgets(nameBuff,sizeof(nameBuff),stdin);
          subArray(&user, nameBuff, sizeof(subName));
			//subtracting
			break;
		case 3:
           // This function is the search for something in the list
          char searchItem[50];
          printf("What do you want to look for?");
          fgets(nameBuff,sizeof(nameBuff),stdin);
			break;
		default:
			printf("incorrect option");
    }
  }
}
