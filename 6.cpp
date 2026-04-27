#include <iostream>
using namespace std;

int main() {
    int a[50], b[50], c[100], n1, n2;
    cout<<"enter the number of elements of first array:";
    cin >> n1;
    cout<<"enter the elements:";
    for(int i=0;i<n1;i++) cin >> a[i];
    
    cout<<"enter the number of elementsof second array:";
    cin >> n2;
    cout<<"enter the  elements:";
    for(int i=0;i<n2;i++) cin >> b[i];

    for(int i=0;i<n1;i++) c[i]=a[i];
    for(int i=0;i<n2;i++) c[n1+i]=b[i];

   cout<<"mereged array:";
    for(int i=0;i<n1+n2;i++) cout << c[i] << " ";
}