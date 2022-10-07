#include <iostream>
#define loop(end) for (int i = 0; i <end ; ++i)
#include "robot.h"
using namespace std;

int main()
{
    loop(20){
        ramasser();
        loop(15) droite();
        deposer();
        loop(15) gauche();
    }
}