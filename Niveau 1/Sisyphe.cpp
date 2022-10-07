#include <iostream>
#include "robot.h"
#define loop(end) for (int i = 0; i <end ; ++i)
using namespace std;

int main()
{
    loop(21){
        haut();
        droite();
    }
    loop(21){
        gauche();
        bas();
    }
}