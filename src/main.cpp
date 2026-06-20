#include "arraylist.hpp"
#include <cstring>

void printMenu(){
	printf(" 1 for adding list");
	printf("/n 2 for subtracting list");
	printf("/n 3 for seacjing list");
}
// Maybe I'll do a string input function to create a string without size
//void stringInp(){}

int main(){
	int menuOpt = 0;
    sArray user;
	while(true){
		printMenu();
		scanf("%d", menuOpt);
		switch(menuOpt)
		case 1:
          char addName[50];
          printf("What do you want to add to the list?");
          scanf("%s",addName);
          addArray(&user, addName);
			break;
		case 2:
          char subName[50];
          printf("What do you want to delete?");
          scanf("%s", subName);
          subArray(&user, subName);
			//subtracting
			break;
		case 3:
          char searchItem[50];
          printf("What do you want to look for?");
          scanf("%s", searchItem);
			//search
			break;
		default:
			printf("incorrect option");
}

}
