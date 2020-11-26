#include <iostream>
#include <list>
#include <vector>
#include "red.h"

using namespace std;

int main () {
    red a;
    a.newnodo(4);
    a.newconection(0,2,15);
    a.newconection(0,1,3);
    a.newconection(1,2,10);
    a.newconection(1,3,4);
    a.newconection(2,3,9);
    a.startshortway(0,3);
    return 0;
}

