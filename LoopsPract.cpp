#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    double a,b,num;
    cout<<"Введіть дві межі: ";
    cin>>a>>b;
    if(a>b){ double t=a; a=b; b=t; }
    cout<<"Введіть число: ";
    while(true){ cin>>num; if(num>=a && num<=b) break; cout<<"Помилка, повторіть: "; }
    cout<<"Правильне число: "<<num<<"\n\n";

    double p1=500,p2=100,p3=150,p4=50,total=0;
    int s1=10,s2=20,s3=15,s4=25;
    char moreC='y';
    while(moreC=='y'){
        double cTotal=0; char moreI='y';
        while(moreI=='y'){
            cout<<"Товари: 1:"<<p1<<"грн,"<<s1<<"шт 2:"<<p2<<"грн,"<<s2<<"шт 3:"<<p3<<"грн,"<<s3<<"шт 4:"<<p4<<"грн,"<<s4<<"шт\n";
            int choice,qty; cin>>choice>>qty;
            if((choice==1 && qty>0 && qty<=s1)){cTotal+=qty*p1;s1-=qty;}
            else if((choice==2 && qty>0 && qty<=s2)){cTotal+=qty*p2;s2-=qty;}
            else if((choice==3 && qty>0 && qty<=s3)){cTotal+=qty*p3;s3-=qty;}
            else if((choice==4 && qty>0 && qty<=s4)){cTotal+=qty*p4;s4-=qty;}
            else {cout<<"Неправильний вибір\n"; continue;}
            cout<<"Ще товар? (y/n): "; cin>>moreI;
        }
        if(cTotal>=1000) cTotal*=0.9;
        cout<<"Сума покупки: "<<cTotal<<"\n"; total+=cTotal;
        cout<<"Наступний клієнт? (y/n): "; cin>>moreC;
    }
    cout<<"Загальна виручка: "<<total<<"\n\n";

    int level; cout<<"Рівень (1-легкий,2-середній,3-важкий): "; cin>>level;
    int q=(level==1?5:level==2?10:15), score=0;
    for(int i=0;i<q;i++){
        int x=rand()%(level*5+1),y=rand()%(level*5+1),a; 
        cout<<x<<"*"<<y<<"="; cin>>a;
        if(a==x*y) score++;
    }
    double perc=100.0*score/q;
    cout<<"Результат: "<<score<<"/"<<q<<" ("<<perc<<"%) ";
    if(perc>=90) cout<<"Відмінно\n"; else if(perc>=70) cout<<"Добре\n"; 
    else if(perc>=50) cout<<"Задовільно\n"; else cout<<"Потрібно повторити\n\n";

    int n; cout<<"Висота ромба: "; cin>>n;
    for(int i=1;i<=n;i++){ for(int j=1;j<=n-i;j++) cout<<" "; for(int j=1;j<=2*i-1;j++) cout<<"*"; cout<<"\n"; }
    for(int i=n-1;i>=1;i--){ for(int j=1;j<=n-i;j++) cout<<" "; for(int j=1;j<=2*i-1;j++) cout<<"*"; cout<<"\n"; }

    return 0;
}
