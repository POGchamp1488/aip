#include "pt4.h"
#include <cmath>
using namespace std;
double prog(int N) {
	double k, i = 1, c = 0;
	while (i <= N) {
		k = i;
		k = pow(k, k) / (k * (k + 1));
		c += k;
		i++;
	}
	return c;
}
void Solve()
{
    Task("TheTwo15");
	int n;
	pt >> n;
	pt << prog(n);
}
