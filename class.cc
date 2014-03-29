#include <iostream>
#include <vector>

using namespace std;

class Point
{
};


class Shape
{
public:
    virtual ~Shape() {}

    virtual Point center() const = 0;
    virtual void move(Point to) = 0;
    virtual void draw() const = 0;
    virtual void rotate(int angle) = 0;
};


class Circle : public Shape
{
public:
    Circle(Point p, Ïnt rr)
    {

    }

    Point center()
    {
        return x;
    }

private:
    Point x;    // center
    int r;      // radius
};


void rotate_all(vector<Shape *> &v, int angle)
{
    for (auto p : v)
        p->rotate(angle);
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}