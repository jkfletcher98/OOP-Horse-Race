#include "horse.h"

Horse::Horse(){
	position = 0;
	id = 0;
	trackLength = 15;
} // end constructor

Horse::void init(int id, int trackLength){
	Horse::id = id;
	Horse::trackLength = trackLength;
} // end init

Horse::void advance(){
	int coin = dist(rd);
	Horse::position += coin;
} // end advance

Horse::void printLane(){
	for (int space = 0; space < tackLength; space++){
		if (space == position){
			printf("%d, \n ", id);
		} // end if
		else {
			printf(". ");
		} // end else
	} // end for
} // end printLane

Horse::bool isWinner(){
	bool result = false;
	if (position > trackLength){
		result = true;
		printf("Horse %d wins! \n", id);
	} // end if
} // end isWinner

