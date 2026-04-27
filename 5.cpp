#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    cout<<"enter the number of elements:";
    cin >> n;

    cout<<"enter the elements:";
    for(int i=0;i<n;i++) cin >> arr[i];

    for(int i=0;i<n/2;i++)
        swap(arr[i], arr[n-i-1]);

     cout<<"reverse array :";
    for(int i=0;i<n;i++) cout << arr[i] << " ";
}