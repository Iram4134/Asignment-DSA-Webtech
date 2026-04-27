#include <iostream>
using namespace std;

int main() {
    int arr[100], n, key,i;
     cout<<"enter the number of elements:";
    cin >> n;

     cout<<"enter the  elements:";
    for(int i=0;i<n;i++) cin >> arr[i];
    
     cout<<"enter the key to search:";
    cin >> key;

    int low=0, high=n-1;
    while(low<=high) {
        int mid=(low+high)/2;

        if(arr[mid]==key) {
            cout<<"Found ";
            return 0;
        }
        else if(arr[mid]<key) low=mid+1;
        else high=mid-1;
    }
    cout<<"Not Found";
}