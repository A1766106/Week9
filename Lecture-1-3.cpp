#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>


using namespace std;

struct Point{
    public:
        int _x;
        int _y;
    float operator()(Point p2){
        return sqrt(pow(_x-p2._x,2)+pow(_y-p2._y,2));
    }
};

int main()
{

    Point p1 = {10,50};
    Point p2 = {0,5};

    float dist = p1(p2);

    cout << dist << endl;

    return 0;
}