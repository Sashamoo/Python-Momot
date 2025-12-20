#include <iostream>
#include <fstream>
using namespace std;

class Point
{
private:
    int x, y, z;

public:
    void input()
    {
        cout << "x = ";
        cin >> x;
        cout << "y = ";
        cin >> y;
        cout << "z = ";
        cin >> z;
    }

    void output()
    {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }

    int getX() { return x; }
    int getY() { return y; }
    int getZ() { return z; }

    void saveToFile()
    {
        ofstream f("point.txt");
        f << x << " " << y << " " << z;
        f.close();
    }

    void loadFromFile()
    {
        ifstream f("point.txt");
        f >> x >> y >> z;
        f.close();
    }
};
int main()
{
    Point p;
    p.input();
    p.output();

    p.saveToFile();

    Point p2;
    p2.loadFromFile();
    p2.output();

    return 0;
}

