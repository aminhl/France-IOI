#include <iostream>
#define loop(end) for (int i = 0; i <end ; ++i)
#include "robot.h"
using namespace std;

int main()
{
    loop(108){
        loop(13) haut();
        loop(13) droite();
        loop(13) bas();
        loop(13) gauche();
    }
}