#include <iostream> 
#include <cstdlib> 
#include <ctime> 

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

int main() { 
	int horses[5] = {0,0,0,0,0}; 
	bool keepGoing = true; 
	srand(time(NULL)); 
	while (keepGoing) { 
		for (int horse = 0; horse < 5; horse++) { 
			advance(horse, horses); 
			printLane(horse, horses); 
			if (isWinner(horse, horses)) {
				keepGoing = false; 
			} 
		} 
		if (keepGoing) { 
			std::cout << "Press Enter for another turn" << std::endl;  
			std::cin.ignore(); 
		}
	}
	return 0; 
} 

void advance(int horseNum, int* horses){ 
	int coin = rand() % 2; 
	if (coin == 1) { 
		horses[horseNum] ++;
	}	
} 

void printLane( int horseNum, int* horses) { 
	for (int position = 0; position < 15; position++) { 
		if (position == horses[horseNum]) { 
			std::cout << horseNum; 
		} 
		else {
			std::cout << "."; 
		} 
	}
	std::cout << std::endl; 
}

bool isWinner(int horseNum, int* horses) { 
	bool won = false; 
	if (horses[horseNum] == 15) {
		won = true; 
		std::cout << "Horse " << horseNum << " WIN's!" << std::endl; 
	}
	return won; 
}










