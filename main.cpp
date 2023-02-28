#include <iostream>
using namespace std;

struct Rectangle
{
    int x, y;
    int w, h;
    void move(int dx, int dy)
    {
        x = dx;
        y = dy;
    }
    void resize(int dw, int dh)
    {
        w += dw;
        h += dh;
    }
    void output()
    {
        cout << "Rectangle(" << x << ", " << y << ", " << w << ", " << h << ")" << endl;
    }
};

int main()
{
    Rectangle rect = { 5, 10, 15, 20 };
    rect.move(5, 5);
    rect.resize(10, 10);
    rect.output();

    return 0;
}