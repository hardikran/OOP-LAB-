#include<bits/stdc++.h>
using namespace std;

class circle
{
    int radius;
    float x,y;

public:
    circle()
    {

    }
    circle(int r,float x1,float y1)
    {
        radius=r;
        x=x1;
        y=y1;
    }

    void display()
    {
        cout<<"radius of circle is "<<radius<<endl;
        cout<<"x coordinate of circle is "<<radius<<endl;
        cout<<"y coordinate of circle is "<<radius<<endl<<endl;
    }

    circle & operator = (circle &c)
    {
        radius=c.radius;
        x=c.x;
        y=c.y;
        return *this;
    }

};

int main()
{
    circle c1(10,1.5,2.5);
    circle c2,c3;
    c3=c2=c1;
    c1.display();
    c2.display();
    c3.display();
}
