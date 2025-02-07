#include "horse.h"
#include "race.h"

Race::Race(){
	const int TRACK_LENGTH = 15;
	const int NUM_HORSES = 5;
	Horse::horses[NUM_HORSES] = {0, 0, 0, 0, 0}
}; // end constructor

void Race::run(){
	for (horse in horses){
		Horse::advance();
		Horse::printLane();
	} //end for
}; //end run


