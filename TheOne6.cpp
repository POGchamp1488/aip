#include "pt4.h"
using namespace std;

void Solve()
{
    Task("TheOne6");
    double x, y;
    bool a;
    pt >> x >> y;
    if ((x <= abs(y)) && (x >= 0 && x <= 3) && (abs(y) <= 3))
    {
        a = 1;
        pt << a;
    }
    else
    {
        a = 0;
        pt << a;
    }
}
