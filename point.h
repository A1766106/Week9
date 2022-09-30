#ifndef POINT_H
#define POINT_H
#include <iostream>

template <class T>
class Point{
    private:
        T _x;
        T _y;
    public:
        Point(T x, T y): _x(x), _y(y){}
        Point():Point(0,0){}
        void print(){
            std::cout << "(" << _x << " , " << _y << ")\n";
        }


};

#endif