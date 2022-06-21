#ifndef DICE_FUNCTIONS_H
#define DICE_FUNCTIONS_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int rollDie();
void displayRollResult(int);
// write a function that rolls two dice
// use reference variables to "return" the two dice results
void rollTwoDice(int&, int&);
void writeRollResults(ofstream&, int, int);

#endif
