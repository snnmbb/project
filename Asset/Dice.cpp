#include "Dice.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

dice::dice() {
	int sides = 6;
}

int dice::rollDice() {
	int sides= 6 ;
	int walk = 0;
	walk = rand() % sides + 1;

	return walk;
}