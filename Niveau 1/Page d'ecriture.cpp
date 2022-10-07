#include <iostream>
#define loop(end) for (int i = 0; i <end ; ++i)
using namespace std;

int main()
{
    loop(30) cout << "a_";
    cout << endl;
    loop(30) cout << "b_";
    cout << endl;
    loop(30) cout << "c_";
    cout << endl;
}