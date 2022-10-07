#include <iostream>
#define loop(end) for (int i = 0; i <end ; ++i)
using namespace std;

int main()
{
    loop(20){
        loop(20) cout << "OX";
        cout << endl;
        loop(20) cout << "XO";
        cout << endl;
    }
}