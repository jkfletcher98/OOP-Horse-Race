# OOP-Horse-Race

## Horse
```
int position
int id
int trackLength

Horse()
	int position gets 0
	int id gets 0
	int trackLength gets 15

void init(int id, int trackLength)
	Horse id gets id
	Horse trackLength gets trackLength

void advance()
	int coin gets a random number (either 0 or 1)
	add coin to position

void printLane()
	for space in trackLength
		if space is equal to position
			print id
		else
			print . 

bool isWinner()
	result gets false
	if position is equal to trackLength
		print "Horse {id} wins!"
		result gets true
	return result
```

## Race
```
const int numHorses
const int trackLength
Horse horses[]

Race()
	const int numHorses gets 5
	const int trackLength gets 15
	Horses horses gets array with value 0

void run()
	for horse in horses
		advance
		printLane
```

## int main()
```
bool keepGoing gets true
while keepGoing
	if result is equal to true
		keepGoing gets false
		program ends
	print "Press ENTER for next round"
```
