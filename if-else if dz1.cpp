#include <iostream>
#include <cmath>
using namespace std;

/*
   Завдання 1
*/

/*
int main() {
    int d1, m1, y1, d2, m2, y2;
    cout << "Введіть першу дату (день місяць рік): ";
    cin >> d1 >> m1 >> y1;
    cout << "Введіть другу дату (день місяць рік): ";
    cin >> d2 >> m2 >> y2;

    int days1 = d1;
    int days2 = d2;

    if (m1 > 1) days1 += 31;
    if (m1 > 2) days1 += ((y1 % 400 == 0 || (y1 % 4 == 0 && y1 % 100 != 0)) ? 29 : 28);
    if (m1 > 3) days1 += 31;
    if (m1 > 4) days1 += 30;
    if (m1 > 5) days1 += 31;
    if (m1 > 6) days1 += 30;
    if (m1 > 7) days1 += 31;
    if (m1 > 8) days1 += 31;
    if (m1 > 9) days1 += 30;
    if (m1 > 10) days1 += 31;
    if (m1 > 11) days1 += 30;

    days1 += y1 * 365 + y1/4 - y1/100 + y1/400;

    if (m2 > 1) days2 += 31;
    if (m2 > 2) days2 += ((y2 % 400 == 0 || (y2 % 4 == 0 && y2 % 100 != 0)) ? 29 : 28);
    if (m2 > 3) days2 += 31;
    if (m2 > 4) days2 += 30;
    if (m2 > 5) days2 += 31;
    if (m2 > 6) days2 += 30;
    if (m2 > 7) days2 += 31;
    if (m2 > 8) days2 += 31;
    if (m2 > 9) days2 += 30;
    if (m2 > 10) days2 += 31;
    if (m2 > 11) days2 += 30;

    
    days2 += y2 * 365 + y2/4 - y2/100 + y2/400;

    cout << "Кількість днів між датами: " << abs(days1 - days2) << endl;

    return 0;
}
*/

/*
   Завдання 2
*/

/*
int main() {
    double s1, s2, s3;
    cout << "Введіть продажі 1 менеджера: ";
    cin >> s1;
    cout << "Введіть продажі 2 менеджера: ";
    cin >> s2;
    cout << "Введіть продажі 3 менеджера: ";
    cin >> s3;

    double sal1 = 200;
    if (s1 < 500) sal1 += s1 * 0.03;
    else if (s1 < 1000) sal1 += s1 * 0.05;
    else sal1 += s1 * 0.08;

    double sal2 = 200;
    if (s2 < 500) sal2 += s2 * 0.03;
    else if (s2 < 1000) sal2 += s2 * 0.05;
    else sal2 += s2 * 0.08;

    double sal3 = 200;
    if (s3 < 500) sal3 += s3 * 0.03;
    else if (s3 < 1000) sal3 += s3 * 0.05;
    else sal3 += s3 * 0.08;

   
    if (sal1 >= sal2 && sal1 >= sal3) sal1 += 200;
    else if (sal2 >= sal1 && sal2 >= sal3) sal2 += 200;
    else sal3 += 200;

    cout << "Зарплата 1 менеджера: " << sal1 << "$\n";
    cout << "Зарплата 2 менеджера: " << sal2 << "$\n";
    cout << "Зарплата 3 менеджера: " << sal3 << "$\n";

    return 0;
}
*/
