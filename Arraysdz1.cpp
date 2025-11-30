#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    const int SIZE1=100, SIZE3=100;
    int arr[SIZE1], n1;
    cout<<"Введіть розмір масиву для завдання 1 (до 100): "; cin>>n1;
    for(int i=0;i<n1;i++) arr[i]=rand()%101;
    cout<<"Масив 1: ";
    for(int i=0;i<n1;i++) cout<<arr[i]<<" ";
    cout<<"\n";
    int minVal=arr[0], maxVal=arr[0];
    for(int i=1;i<n1;i++){ if(arr[i]<minVal)minVal=arr[i]; if(arr[i]>maxVal)maxVal=arr[i]; }
    cout<<"Мінімальний: "<<minVal<<"\nМаксимальний: "<<maxVal<<"\n\n";

    double profit[12];
    cout<<"Введіть прибуток за 12 місяців: ";
    for(int i=0;i<12;i++) cin>>profit[i];
    cout<<"Прибуток: ";
    for(int i=0;i<12;i++) cout<<profit[i]<<" ";
    cout<<"\n";
    int s,e; cout<<"Введіть діапазон місяців (початок кінець): "; cin>>s>>e;
    s--; e--;
    int minM=s, maxM=s;
    for(int i=s;i<=e;i++){ if(profit[i]<profit[minM])minM=i; if(profit[i]>profit[maxM])maxM=i; }
    cout<<"Місяць з мінімальним прибутком: "<<minM+1<<"\nМісяць з максимальним прибутком: "<<maxM+1<<"\n\n";

    double arrR[SIZE3]; int N;
    cout<<"Введіть кількість елементів масиву для завдання 3 (до 100): "; cin>>N;
    for(int i=0;i<N;i++) cin>>arrR[i];
    cout<<"Масив 3: ";
    for(int i=0;i<N;i++) cout<<arrR[i]<<" ";
    cout<<"\n";
    double sumNeg=0,prodBetween=1,prodEven=1,sumBetweenNeg=0;
    int minIdx=0,maxIdx=0,firstNeg=-1,lastNeg=-1;
    for(int i=0;i<N;i++){
        if(arrR[i]<0) sumNeg+=arrR[i];
        if(arrR[i]<arrR[minIdx]) minIdx=i;
        if(arrR[i]>arrR[maxIdx]) maxIdx=i;
        if(firstNeg==-1 && arrR[i]<0) firstNeg=i;
        if(arrR[i]<0) lastNeg=i;
        if(i%2==0) prodEven*=arrR[i];
    }
    if(minIdx>maxIdx) swap(minIdx,maxIdx);
    for(int i=minIdx+1;i<maxIdx;i++) prodBetween*=arrR[i];
    for(int i=firstNeg+1;i<lastNeg;i++) sumBetweenNeg+=arrR[i];
    cout<<"Сума від'ємних: "<<sumNeg<<"\nДобуток між min і max: "<<prodBetween
        <<"\nДобуток парних: "<<prodEven<<"\nСума між першим і останнім від'ємними: "<<sumBetweenNeg<<"\n";

    return 0;
}
