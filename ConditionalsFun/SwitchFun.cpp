#include <iostream>

using namespace std;

int main() {
	/*A high school baseball team awards merit points to players based on their offensive performance. A single (encoded 's') is worth 1 point, a double (encoded 'd') is worth 2 points, a triple (encoded 't') is worth 3 points, and a home run (encoded 'h') is worth 4 points. Any at-bat that leads to an out (encoded 'o') worth 0 points.
	
	Task 1: Write a C++ if statement that, given an at-bat character from the user, properly awards points. */
	
	char atBat = 'o', classStanding = 'f';
	int points = 0;
	
	cout << "Please enter the at bat code: ";
	cin >> atBat;
	cout << "Please enter the class standing: ";
	cin >> classStanding;
	
	//cout << atBat << endl;
	/*if (atBat == 's') {
		points = 1;
	}
	else if (atBat == 'd') {
		points = 2;
	}
	else if (atBat == 't') {
		points = 3;
	}
	else if (atBat == 'h') {
		points = 4;
	}
	else if (atBat == 'o') {
		points = 0;
	}
	else {
		cout << "Unrecognize at bat code." << endl;
	}*/
	
	/*if (atBat == 's') {
		points = 1;
	}
	else {
		if (atBat == 'd') {
			points = 2;
		}
		else {
			if (atBat == 't') {
				points = 3;
			}
			else {
				if (atBat == 'h') {
					points = 4;
				}
				else {
					if (atBat == 'o') {
						points = 0;
					}
					else {
							cout << "Unrecognize at bat code." << endl;
					}
				}
			}
		}
	}*/
	
	// switch statement solution
	/*switch (atBat) {
		case 'S':
		case 's':
			points = 1;
			break; // causes an exit from the switch structure
			// without break, execution "falls" through to the next case
		case 'D':
		case 'd':
			points = 2;
			break;
		case 't':
			points = 3;
			break;
		case 'h':
			points = 4;
			break;
		case 'o':
			points = 0;
			break;
		default:
			cout << "Unrecognized character code." << endl;
			break; // break for default is optional
			
	}*/
	
	/*A high school baseball team awards merit points to players based on their offensive performance and the class standing ('f' = freshman, 'o' = sophomore, 'j' = junior, and 's' = senior). In particular, freshmen and sophomores earn an extra point for home runs, whereas juniors and seniors do not earn any points for singles. Write a C++ if-statement that, given an at-bat character and a class standing character, properly awards points.

	*/
	
	if (atBat == 's') {
		points = 1;
		if (classStanding == 'j' || classStanding == 's') {
			// no points for singles
			points = 0;
		}
	}
	else if (atBat == 'd') {
		points = 2;
	}
	else if (atBat == 't') {
		points = 3;
	}
	else if (atBat == 'h') {
		points = 4;
		if (classStanding == 'f' || classStanding == 'o') {
			// extra point for homeruns
			points = points + 1; // 5
		}
	}
	else if (atBat == 'o') {
		points = 0;
	}
	else {
		cout << "Unrecognize at bat code." << endl;
	}
	
	cout << "Number of points awarded: " << points << endl;
	
	// task 2: re-solve the above multiple alternative if statement to use nested if statements (no else ifs)

	return 0;
}
