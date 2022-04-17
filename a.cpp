#include <iostream>
#include <random>
using namespace std;
int main()
{
    mt19937 mt{ random_device{}() };

    uniform_int_distribution<int> dist(1, 6);

    for ( int i = 0 ; i != 10 ; ++i )
        cout << dist(mt) << endl;
}