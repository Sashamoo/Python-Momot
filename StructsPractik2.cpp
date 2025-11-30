#include <iostream>
using namespace std;



struct WashingMachine {
    string brand;
    string color;
    double width;
    double length;
    double height;
    int power;
    int spinSpeed;
    int heatTemp;
};

void showWashingMachine(const WashingMachine &w) {
    cout << "\n=== Пральна машинка ===\n";
    cout << "Фірма: " << w.brand << endl;
    cout << "Колір: " << w.color << endl;
    cout << "Ширина: " << w.width << " см\n";
    cout << "Довжина: " << w.length << " см\n";
    cout << "Висота: " << w.height << " см\n";
    cout << "Потужність: " << w.power << " Вт\n";
    cout << "Швидкість віджиму: " << w.spinSpeed << " об/хв\n";
    cout << "Температура нагріву: " << w.heatTemp << " °C\n";
}



struct Iron {
    string brand;
    string model;
    string color;
    int minTemp;
    int maxTemp;
    bool steam;
    int power;
};

void showIron(const Iron &i) {
    cout << "\n=== Праска ===\n";
    cout << "Фірма: " << i.brand << endl;
    cout << "Модель: " << i.model << endl;
    cout << "Колір: " << i.color << endl;
    cout << "Мін. температура: " << i.minTemp << " °C\n";
    cout << "Макс. температура: " << i.maxTemp << " °C\n";
    cout << "Подача пари: " << (i.steam ? "Так" : "Ні") << endl;
    cout << "Потужність: " << i.power << " Вт\n";
}



struct Boiler {
    string brand;
    string color;
    int power;
    int volume;
    int heatTemp;
};

void showBoiler(const Boiler &b) {
    cout << "\n=== Бойлер ===\n";
    cout << "Фірма: " << b.brand << endl;
    cout << "Колір: " << b.color << endl;
    cout << "Потужність: " << b.power << " Вт\n";
    cout << "Обсяг: " << b.volume << " л\n";
    cout << "Температура нагріву: " << b.heatTemp << " °C\n";
}



struct Animal {
    string name;
    string type;
    string nickname;
};

void fillAnimal(Animal &a) {
    cout << "\n=== Створення тварини ===\n";
    cout << "Назва тварини: ";
    cin >> a.name;
    cout << "Клас тварини: ";
    cin >> a.type;
    cout << "Кличка: ";
    cin >> a.nickname;
}

void showAnimal(const Animal &a) {
    cout << "\n=== Тварина ===\n";
    cout << "Назва: " << a.name << endl;
    cout << "Клас: " << a.type << endl;
    cout << "Кличка: " << a.nickname << endl;
}

void voice(const Animal &a) {
    cout << a.nickname << " подає голос! \n";
}



int main() {

    
    WashingMachine w1 = {"Samsung", "Білий", 60, 40, 85, 1800, 1200, 90};
    showWashingMachine(w1);

    
    Iron i1 = {"Philips", "GC4909", "Синій", 120, 250, true, 3000};
    showIron(i1);

    
    Boiler b1 = {"Ariston", "Білий", 2200, 80, 75};
    showBoiler(b1);

  
    Animal a1;
    fillAnimal(a1);
    showAnimal(a1);
    voice(a1);

    return 0;
}
