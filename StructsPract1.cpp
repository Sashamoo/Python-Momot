#include <iostream>
#include <cmath>
using namespace std;


struct Rect {
    double posX, posY;
    double w, h;
};

void moveRect(Rect &rect, double dx, double dy) {
    rect.posX += dx;
    rect.posY += dy;
}

void resizeRect(Rect &rect, double newW, double newH) {
    rect.w = newW;
    rect.h = newH;
}


void printRect(Rect rect) {
    cout << "Rect: (" << rect.posX << ", " << rect.posY << "), "
         << "w: " << rect.w << ", h: " << rect.h << endl;
}


struct Point2D {
    double x, y;
};


double dist(Point2D a, Point2D b) {
    return sqrt((b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y));
}


struct Fraction {
    int num, denom;

    Fraction(int n = 0, int d = 1) {
        num = n;
        denom = (d == 0) ? 1 : d;
        simplify();
    }

    void simplify() {
        int a = abs(num), b = abs(denom);
        while (b != 0) { int t = b; b = a % b; a = t; }
        num /= a; denom /= a;
        if (denom < 0) { denom *= -1; num *= -1; }
    }

    void printMixed() {
        int whole = num / denom;
        int rem = abs(num % denom);
        if (whole != 0) {
            cout << whole;
            if (rem != 0) cout << " " << rem << "/" << denom;
        } else {
            cout << num << "/" << denom;
        }
        cout << endl;
    }
};

Fraction add(Fraction f1, Fraction f2) {
    return Fraction(f1.num*f2.denom + f2.num*f1.denom, f1.denom*f2.denom);
}

Fraction sub(Fraction f1, Fraction f2) {
    return Fraction(f1.num*f2.denom - f2.num*f1.denom, f1.denom*f2.denom);
}

Fraction mul(Fraction f1, Fraction f2) {
    return Fraction(f1.num*f2.num, f1.denom*f2.denom);
}

Fraction divi(Fraction f1, Fraction f2) {
    return Fraction(f1.num*f2.denom, f1.denom*f2.num);
}


int main() {
    
    Rect r = {0, 0, 10, 5};
    printRect(r);
    moveRect(r, 3, 2);
    printRect(r);
    resizeRect(r, 15, 8);
    printRect(r);
    
    Point2D p1 = {0, 0}, p2 = {3, 4};
    cout << "Distance: " << dist(p1, p2) << endl
      
    Fraction f1(7, 3), f2(2, 5);
    cout << "Sum: "; add(f1, f2).printMixed();
    cout << "Sub: "; sub(f1, f2).printMixed();
    cout << "Mul: "; mul(f1, f2).printMixed();
    cout << "Div: "; divi(f1, f2).printMixed();

    return 0;
}
