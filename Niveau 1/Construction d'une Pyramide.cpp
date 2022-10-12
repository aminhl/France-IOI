#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float dimensions = 17;
    long long cubes = 0;
    while(dimensions > 0){
        cubes += pow(dimensions, 3);
        dimensions -= 2;
    }
    cout << cubes;
    return 0;
}