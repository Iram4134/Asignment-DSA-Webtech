#include <iostream>
using namespace std;

int main() {
    int arr[100], n, pos, val;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i=0;i<n;i++) cin >> arr[i];

    cout << "Enter position and value: ";
    cin >> pos >> val;

    for(int i=n; i>=pos; i--)
        arr[i] = arr[i-1];

    arr[pos-1] = val;
    n++;

    for(int i=0;i<n;i++) cout << arr[i] << " ";
}