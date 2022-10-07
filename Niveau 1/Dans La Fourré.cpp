#include <iostream>
#include "robot.h"
using namespace std;

int main()
{
    for (int i = 0; i <3 ; ++i)  haut();
    for (int i = 0; i <2 ; ++i)  droite();
    for (int i = 0; i < 2 ; ++i) bas();
    droite();
}