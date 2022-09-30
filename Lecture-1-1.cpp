#include <iostream>
#include "point.h"
#include "pair.h"

using namespace std;

typedef Point<int> Point_i;
typedef Point<float> Point_f;
typedef Point<double> Point_d;
typedef Point<int>* Point_ptr_i;
typedef Pair<int,int> Pair_ii;

typedef int* int_ptr;

int main()
{
    Point_i p1(2,5);
    Point_f p2(3.5,8.5);
    Point_d p3(0.002,0.004);
    p1.print();
    p2.print();
    p3.print();
    Point<int>* ptr1 = &p1;
    Point_ptr_i ptr2 = new Point_i (10,100);

    int_ptr ptr_i = new int;

    ptr1->print();

    Pair_ii pa1(1,2);
    Pair<int,float> pa2(1,2);
    Pair<double,float> pa3(1,2);

    Pair<Point_i, Point_f> line(p1, p2);

    return 0;
}