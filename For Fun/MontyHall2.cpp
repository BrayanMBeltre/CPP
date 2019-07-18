#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	srand( time(0));
	int counter = 10000;
	int winCounter = 0;
	int winFirstCounter = 0;
	
	for (int i = 0; i < counter; ++i) {
		int prizeDoor = (1 + rand() % 3);
		int firstChoice = (1 + rand() % 3);
		bool switchDoor = (rand() % 2)==0;
		
		if (!switchDoor && (firstChoice == prizeDoor)) { 
			++winFirstCounter;
			++winCounter;
		} else if (switchDoor && (firstChoice != prizeDoor)) { 
			++winCounter;
		}
	}

	cout << (counter - winCounter) << "\tGames lost" << endl;
	cout << winCounter << "\tGames won total" << endl;
	cout << winFirstCounter << "\tGames won without change" << endl;
	
	int winWithChange = (winCounter - winFirstCounter);
	cout << winWithChange << "\tGames won with change" << endl;
	cout << winWithChange*100/winCounter << "\tPercent won after change" << endl;
	cout << winFirstCounter*100/winCounter << "\tPercent won without change" << endl;
	
	return 0;
}