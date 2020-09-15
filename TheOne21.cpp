#include "pt4.h"
using namespace std;

void Solve()
{
    Task("TheOne21");
	int a;
	double b;
	pt >> a;
	pt >> b;
	switch (a){
	case 1:
		pt << b;
		break;
	case 2:
		pt << (b / 1000000);
		break;
	case 3:
		pt << (b / 1000);
		break;
	case 4:
		pt << (b * 1000);
		break;
	case 5:
		pt << (b * 100);
		break;
	default:
		pt << "error";
		break;
	}
}
