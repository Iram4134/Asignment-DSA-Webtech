#include <iostream>
using namespace std;

int main() {
    int arr[100], n, pos;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements:\n";
    for(int i=0;i<n;i++) cin >> arr[i];
    
    cout << "Enter position to delete value: ";
    cin >> pos;

    for(int i=pos-1;i<n-1;i++)
        arr[i] = arr[i+1];

    n--;

    for(int i=0;i<n;i++) cout << arr[i] << " ";
}