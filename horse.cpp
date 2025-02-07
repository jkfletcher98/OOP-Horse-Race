#include "horse.h"
#include <iostream>
#include <random>

std::random_device rd;
std::uniform_int_distribution<int> dist(0,1);

Horse::Horse(){
	position = 0;
	id = 0;
	trackLength = 15;
} // end constructor

void Horse::init(int id, int trackLength){
	Horse::id = id;
	Horse::trackLength = trackLength;
} // end init

void Horse::advance(){
	int coin = dist(rd);
	Horse::position += coin;
} // end advance

void Horse::printLane(){
	for (int space = 0; space < trackLength; space++){
		if (space == position){
			printf("%d, \n ", id);
		} // end if
		else {
			printf(". ");
		} // end else
	} // end for
} // end printLane

bool Horse::isWinner(){
	bool result = false;
	if (position > trackLength){
		result = true;
		printf("Horse %d wins! \n", id);
	}; // end if
	return result;
} // end isWinner

