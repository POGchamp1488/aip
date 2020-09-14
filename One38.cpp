#include "pt4.h"
using namespace std;

void Solve()
{
    Task("One38");
	int n, b = 0;
	pt >> n;
	for (int i = 0; i <= 5; i++)
	{
		if ((n % 10) == 0)
			b++;
		n /= 10;
	}
	pt << b;
}
