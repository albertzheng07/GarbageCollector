#include "gc_pointer.h"
#include "LeakTester.h"

int main()
{
    Pointer<int,1> p(new int[1]);
    // Pointer<int> p(p);
    //p = new int(21);
    // Pointer<int> p1 = p;
    p.showlist();
    //Pointer<int> p1(new int(21));
    //p.showlist();
    // p = new int(28);

    return 0;
}