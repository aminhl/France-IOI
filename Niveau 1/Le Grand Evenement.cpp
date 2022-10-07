#include <iostream>
#define loop(end) for (int i = 0; i <end ; ++i)
#include "robot.h"
using namespace std;

int main()
{
   loop(9) haut();
   loop(9) droite();
   loop(9) bas();
   loop(4){
       gauche();
       loop(8) haut();
       gauche();
       loop(8) bas();
   }
   gauche();
}