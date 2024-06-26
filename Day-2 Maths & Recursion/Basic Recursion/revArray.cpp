#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
   cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
}

void reverseArray(int arr[], int start, int end) {
   if (start < end) {
      swap(arr[start], arr[end]);
      reverseArray(arr, start + 1, end - 1);
   }
}

int main() {
    int n;
    cout << "Size of array: ";
    cin >> n;
    int arr[100];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    reverseArray(arr, 0, n - 1);
    printArray(arr, n);

}
