#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

class Race {
	private:
		const int TRACK_LENGTH;
		const int NUM_HORSES;
		Horse horses[NUM_HORSES];
	
	public:
		Race();
		void run();

}; // end Race
