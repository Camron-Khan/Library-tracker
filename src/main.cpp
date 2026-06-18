#include "arraylist.hpp"

void printMenu(){
	printf(" 1 for adding list");
	printf("/n 2 for subtracting list");
	printf("/n 3 for seacjing list");
}

int main(){
	int menuOpt = 0;
	while(true){
		printMenu();
		scanf("%d", menuOpt);
		switch(menuOpt)
		case 1:
			//add
			break;
		case 2:
			//subtracting
			break;
		case 3:
			//search
			break;
		default:
			printf("incorrect option");
}

}
