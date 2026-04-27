#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], c[10][10];
    int r1,c1,r2,c2;

    cout<<"enter the number of rows and columns of first array:";
    cin >> r1 >> c1;
    cout<<"enter the number of rows and columns of second array:";
    cin >> r2 >> c2;

    cout<<"enter the  elements of first array:";
    for(int i=0;i<r1;i++)
        for(int j=0;j<c1;j++)
            cin >> a[i][j];
    
    cout<<"enter the  elements second array:";
    for(int i=0;i<r2;i++)
        for(int j=0;j<c2;j++)
            cin >> b[i][j];

    for(int i=0;i<r1;i++) {
        for(int j=0;j<c2;j++) {
            c[i][j]=0;
            for(int k=0;k<c1;k++)
                c[i][j]+=a[i][k]*b[k][j];
        }
    }
    cout<<"matrix multiplication:";
    for(int i=0;i<r1;i++) {
        for(int j=0;j<c2;j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
}