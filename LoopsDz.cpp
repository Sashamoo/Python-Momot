#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int option;
    do {
        cout << "\nМеню:\n1. Лінія\n2. Кубики\n0. Вихід\nВиберіть: ";
        cin >> option;
        if(option==1){
            char c; int l,h,s;
            cin >> c >> l >> h >> s;
            for(int i=0;i<l;i++){
                cout<<c;
                if(!h) cout<<endl;
                for(int d=0;d<s*10000000;d++);
            }
            if(h) cout<<endl;
        }
        else if(option==2){
            int us=0,cs=0;
            for(int r=1;r<=3;r++){
                int u1=rand()%6+1,u2=rand()%6+1,c1=rand()%6+1,c2=rand()%6+1;
                us+=u1+u2; cs+=c1+c2;
                cout<<"Раунд "<<r<<":\nВи: "<<u1<<"+"<<u2<<"="<<u1+u2<<"\nКомп: "<<c1<<"+"<<c2<<"="<<c1+c2<<"\n";
                for(int d=0;d<50000000;d++);
            }
            cout<<"Суми: Ви "<<us<<" Комп "<<cs<<endl;
            cout<<(us>cs?"Ви виграли!\n":us<cs?"Комп'ютер переміг!\n":"Нічия!\n");
        }
    }while(option!=0);
}
