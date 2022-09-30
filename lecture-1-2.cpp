#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>


using namespace std;

struct Point{
    public:
        int _x;
        int _y;
};

typedef vector<Point*> Point_v;
typedef map<string,Point> SetRecords;
typedef pair<string,Point> Entry;

int main()
{




    vector<int> v = {5,8,9,3,4,6};
    vector<int>::iterator itr;

    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    vector<int>::iterator a = find(v.begin(),v.end(),8);
    cout << *a << endl;

    // for (itr = v.begin(); itr <v.end(); itr++)
    // {
    //     cout << *itr << endl;
    // }

    // vector<Point> v = {{5,8},{9,3},{4,6}};
    // vector<Point>::iterator itr;

    // for (itr = v.begin(); itr <v.end(); itr++)
    // {
    //     cout << itr->_x << " , " << itr->_y << endl;
    // }


    // SetRecords t;
    // Point p1 = {100,200};
    // Point p2 = {1,20};
    // Entry e1 = {"midpoint", p1};
    // Entry e2 = {"endpoint", p2};
    // t.insert(e1);
    // t.insert(e2);

    // Point p3 = t["endpoint"];
    // cout << p3._x << " , " << p3._y << endl;

    // int id = t["feras"];

    // cout << id << endl;

    

    // v.push_back(3);
    // cout << v.size() << endl;
    // Point_v v;
    // Point p1 = {50,20};
    // v.push_back(&p1);
    // for (int i=0;i<v.size();i++)
    // {
    //     cout << v[i]->_x << " , " << v[i]->_y << endl; 
    // }

    return 0;
}