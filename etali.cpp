#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char **argv)
{
	int lands;
	int nonlands;
	int iterations;
	cout << "Simulating Etali and Tenth Doctor interaction. \nenter land count: ";
	cin >> lands;
	cout << "enter nonland count: ";
	cin >> nonlands;
	cout << "enter number of iterations: ";
	cin >> iterations;
	cout << "number of successes with etali first: " << etaliFirst(lands, nonlands, iterations) << endl;
	cout << "number of successes with etali second: " << etaliSecond(lands, nonlands, iterations) << endl;
	return 0;
}

//simple function. Just removes a random card. Tenth Doctor's ability will have no effect on Etali's.
int etaliFirst(int land, int nonland, int iteration){
	int successes=0;
    int deckSize=land+nonland;
	for (int i=0; i<iteration; i++){
		srand(time(0));
		int randomNum = rand() % (deckSize+1);
        if (randomNum <= nonland) successes++;
	}
    return successes;
}

int etaliSecond(int land, int nonland, int iteration){
    int successes=0;


    return successes;
}
