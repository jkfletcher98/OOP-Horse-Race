# OOP-Horse-Race

## Horse
```
int position
int id
int trackLength

Horse()

void init(int id, int trackLength)

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

void run()
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
