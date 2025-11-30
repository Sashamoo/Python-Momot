#include <iostream>
#include <cstring>
using namespace std;

int** createMatrix(int rows, int cols) {
    int** mat = new int*[rows];
    for(int i=0;i<rows;i++) mat[i]=new int[cols];
    return mat;
}

void deleteMatrix(int** mat, int rows) {
    for(int i=0;i<rows;i++) delete[] mat[i];
    delete[] mat;
}

void printMatrix(int** mat, int rows, int cols) {
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++) cout<<mat[i][j]<<" ";
        cout<<endl;
    }
}

int** transpose(int** mat,int rows,int cols){
    int** tMat = createMatrix(cols,rows);
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            tMat[j][i]=mat[i][j];
    return tMat;
}

int** addColumn(int** mat,int rows,int &cols,int pos,int value=0){
    int** newMat = createMatrix(rows,cols+1);
    for(int i=0;i<rows;i++){
        for(int j=0;j<pos;j++) newMat[i][j]=mat[i][j];
        newMat[i][pos]=value;
        for(int j=pos;j<cols;j++) newMat[i][j+1]=mat[i][j];
    }
    deleteMatrix(mat,rows);
    cols++;
    return newMat;
}

int** removeColumn(int** mat,int rows,int &cols,int pos){
    int** newMat = createMatrix(rows,cols-1);
    for(int i=0;i<rows;i++){
        for(int j=0;j<pos;j++) newMat[i][j]=mat[i][j];
        for(int j=pos+1;j<cols;j++) newMat[i][j-1]=mat[i][j];
    }
    deleteMatrix(mat,rows);
    cols--;
    return newMat;
}

void cyclicShift(int** mat,int rows,int cols,int rowShift,int colShift){
    int** temp = createMatrix(rows,cols);
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            temp[i][j]=mat[i][j];
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++){
            int newRow=(i+rowShift+rows)%rows;
            int newCol=(j+colShift+cols)%cols;
            mat[newRow][newCol]=temp[i][j];
        }
    deleteMatrix(temp,rows);
}

struct Contact{
    char name[50];
    char phone[20];
};

void printContacts(Contact* contacts,int n){
    for(int i=0;i<n;i++) cout<<contacts[i].name<<" - "<<contacts[i].phone<<endl;
}

int main(){
    int rows=3,cols=3;
    int** mat=createMatrix(rows,cols);
    int val=1;
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            mat[i][j]=val++;

    cout<<"Початкова матриця:"<<endl;
    printMatrix(mat,rows,cols);

    mat=addColumn(mat,rows,cols,1,0);
    cout<<"\nПісля додавання стовпця:"<<endl;
    printMatrix(mat,rows,cols);

    mat=removeColumn(mat,rows,cols,2);
    cout<<"\nПісля видалення стовпця:"<<endl;
    printMatrix(mat,rows,cols);

    cyclicShift(mat,rows,cols,1,-1);
    cout<<"\nПісля циклічного зсуву:"<<endl;
    printMatrix(mat,rows,cols);

    int** tMat=transpose(mat,rows,cols);
    cout<<"\nТранспонована матриця:"<<endl;
    printMatrix(tMat,cols,rows);

    deleteMatrix(mat,rows);
    deleteMatrix(tMat,cols);

    int nContacts=2;
    Contact* contacts=new Contact[nContacts];
    strcpy(contacts[0].name,"Sasha"); strcpy(contacts[0].phone,"123456");
    strcpy(contacts[1].name,"Oleg"); strcpy(contacts[1].phone,"987654");

    cout<<"\nСписок контактів:"<<endl;
    printContacts(contacts,nContacts);

    char searchName[50];
    cout<<"\nВведіть ім'я для пошуку: ";
    cin>>searchName;
    for(int i=0;i<nContacts;i++)
        if(strcmp(contacts[i].name,searchName)==0)
            cout<<"Знайдено номер: "<<contacts[i].phone<<endl;

    char newName[50],newPhone[20];
    cout<<"\nВведіть новий контакт (ім'я телефон): ";
    cin>>newName>>newPhone;
    Contact* newContacts=new Contact[nContacts+1];
    for(int i=0;i<nContacts;i++) newContacts[i]=contacts[i];
    strcpy(newContacts[nContacts].name,newName);
    strcpy(newContacts[nContacts].phone,newPhone);
    delete[] contacts;
    contacts=newContacts;
    nContacts++;

    cout<<"\nОновлений список контактів:"<<endl;
    printContacts(contacts,nContacts);
    delete[] contacts;

    return 0;
}
