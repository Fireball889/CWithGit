#include <stdio.h>
#include <stdlib.h>

struct operator {
	int type;
	union {
		int intNum;
		float floatNum;
		double doubleNum;
	}; //no name
};

union Coins {
    struct {
        int quarter;
        int dime;
        int nickel;
        int penny;
    }; //Anonymous struct acts the same way as an anonymous union, members are on the outer container
    int coins[4];
};

int main() {
	struct operator op;
	op.type = 0; // int
	// intNum is part of the union, but since it's not named you access it directly off the struct itself
	op.intNum = 352;
}
