#include <iostream>
#include <Windows.h>
using namespace std;

void gotoxy(int x, int y)
{
    if (x < 0 || y < 0)
    {
        cout << "Incorrect input" << endl;
        return;
    }

    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

struct Coord
{
    short x;
    short y;
};

class MyRectangle
{
private:
    int width;
    int height;
    char symbol;
    Coord pos;

public:
    MyRectangle()
    {
        width = 3;
        height = 3;
        symbol = '~';
        pos.x = 0;
        pos.y = 0;
    }

    MyRectangle(int size)
    {
        width = size;
        height = size;
        symbol = '~';
        pos.x = 0;
        pos.y = 0;
    }

    MyRectangle(int w, int h)
    {
        width = w;
        height = h;
        symbol = '~';
        pos.x = 0;
        pos.y = 0;
    }

    void Draw()
    {
        for (int i = 0; i < height; i++)
        {
            gotoxy(pos.x, pos.y + i);
            for (int j = 0; j < width; j++)
            {
                cout << symbol;
            }
        }
    }

    void ChangeSize(int change_h, int change_w)
    {
        if (height + change_h <= 0 || width + change_w <= 0)
        {
            cout << "Incorrect size change" << endl;
            return;
        }

        height += change_h;
        width += change_w;
    }

    void setPosition(int x, int y)
    {
        pos.x = x;
        pos.y = y;
    }
};

int main()
{
    MyRectangle mr;
    mr.ChangeSize(8, 24);
    mr.setPosition(10, 5);
    mr.Draw();

    return 0;
}
