#include <iostream>
using namespace std;


class Train 
{
    struct Vagon
    {
        int vagon_num;
        int count_places;
        int count_passengers;
        Vagon()
        {
            vagon_num = 0;
            count_places = 0;
            count_passengers = 0;
        }
        Vagon(int num, int places, int passengers)
        {
            vagon_num = num;
            count_places = places;
            count_passengers = passengers;
        }

        void Print()
        {
            cout << "Vagon number: " << vagon_num << endl;
            cout << "Count places: " << count_places << endl;
            cout << "Count passengers: " << count_passengers << endl;
        }
    };

private:
    string model;
    int count_vagons;
    Vagon* vagons;

public:
    Train()
    {
        model = "no model";
        count_vagons = 0;
		vagons = nullptr;
    };
    Train(string model)
    {
        this->model = model;
        count_vagons = 0;
		vagons = nullptr;
    };
    Train(const Train &other)
    {
        this->model = other.model;
        this->count_vagons = other.count_vagons;
        this->vagons = new Vagon[count_vagons];
        for (size_t i = 0; i < count_vagons; i++)
        {
            vagons[i] = other.vagons[i];
        }
	};
    void Show()
        {
        cout << "Infomation about train: " << endl;
        cout << "Model: " << model << endl;
        cout << "Count vagons: " << count_vagons << endl;
        for (size_t i = 0; i < count_vagons; i++)
        {
            vagons[i].Print();
        }
        cout << endl;
	};
    void addVagon(int num, int places, int passehgers)
    {
		count_vagons++;
		Vagon* temp = new Vagon[count_vagons];
        for (size_t i = 0; i < count_vagons - 1; i++)
        {
            temp[i] = vagons[i];
		}
		temp[count_vagons - 1] = Vagon(num, places, passehgers);    
        if (vagons != nullptr)
            delete[] vagons;
		vagons = temp;
	};
    void addPassenger(int vagon_num)
    {
        for (size_t i = 0; i < count_vagons; i++)
        {
            if (vagons[i].vagon_num == vagon_num)
            {
                vagons[i].count_passengers++;     
            }
        }
	};
    ~Train()
    {
        if (vagons != nullptr)
            delete[] vagons;
	};
};
int main() 
{
	Train t("Tomas");
	t.addVagon(1, 20, 3);
    t.addVagon(2, 20, 5);
	t.addPassenger(1);
	t.Show();
    Train copy(t);
	copy.Show();
}
