#include "Structs.h"

void printFruit(const Fruit f) {
	cout << "Type: " << f.type << endl;
	cout << "Color: " << f.color << endl;
	cout << "Weight: "<< f.weight << endl;
}

int compareFruits(Fruit * f1, Fruit * f2) {
	// compare by type, then color, then weight
	if (f1->type < f2->type) {
		return -1;
	}
	else if (f1->type > f2->type) {
		return 1;
	}
	else { // same type, check color
		if (f1->color < f2->color) {
			return -1;
		}
		else if (f1->color > f2->color) {
			return 1;
		}
		else { // same type AND color, check weight
			if (f1->weight < f2->weight) {
				return -1;
			}
			else if (f1->weight > f2->weight) {
				return 1;
			}
			else { // same type AND color AND weight
				return 0;
			}
		}
	}

}
