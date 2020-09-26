#include "pt4.h"
using namespace std;
void func(int N) {
	int i = 0, k, c = 0, numb, digit;
	while (N > 0) {
		k = N;
		N /= 10;
		k %= 10;
		i++;
		if (k >= c) {
			digit = k;
			numb = i;
			c = digit;
		}
	}
	pt << digit << numb;
}
void Solve()
{
    Task("TheTwo17");
	int n;
	pt >> n;
	func(n);
}
