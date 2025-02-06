#include <iostream>
#include <random>
std::random_device rd;
std::uniform_int_ditribution<int> dist(0,1);

class Horse {
	private:
		int position;
		int id;
		int trackLength;

	public:
		Horse(){
			position = 0;
			id = 0;
			trackLength = 15;
		} // end constructor

		void init(int id, int trackLength){
			Horse::id = id;
			Horse::trackLength = trackLength;
		} // end init
		
		void advance(){
			int coin = dist(rd);
			position += coin;
		} // end advance

		void printLane(){
			for (int space = 0; space < trackLength; space++){
				if (space == position){
					printf("%d \n", id)
				}
				else {
					printf(". ")
				}
			} // end for
		} // end printLane

		bool isWinner(){
			bool result = false;
			if (position > trackLength){
				result = true
			} // end if

			return result;
		} // end isWinner
}; // end Horse
