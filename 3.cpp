#include <iostream>
using namespace std;

int main() {
    int arr[100], n, key;
    cout<<"enter the number of elements:";
    cin >> n;
    cout<<"enter the  elements:";
    for(int i=0;i<n;i++) cin >> arr[i];

     cout<<"enter the key to search :";
    cin >> key;

    for(int i=0;i<n;i++) {
        if(arr[i]==key) {
            cout << "Found at " << i;
            return 0;
        }
    }
    cout << "Not Found";
}