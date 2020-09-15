#include "pt4.h"
using namespace std;

int count_digits(int n) {
	int k = 0;
	do {
		if ((n % 10) == 0)
			k++;
		n /= 10;
	} while (n != 0);
	return k;
}

void Solve()
{
    Task("One38");
	int n;
	pt >> n;
	pt << count_digits(n);
}
