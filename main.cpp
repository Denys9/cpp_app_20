#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
    int x, y;
};

double length(Point p1, Point p2)
{
    int dx = p1.x - p2.x;
    int dy = p1.y - p2.y;
    return sqrt(dx * dx + dy * dy);
}

int main()
{
    Point p1 = { 2, 3 };
    Point p2 = { 5, 7 };
    double dist = length(p1, p2);
    cout << "length between (" << p1.x << ", " << p1.y << ") and (" << p2.x << ", " << p2.y << ") is " << dist << endl;

    return 0;
}