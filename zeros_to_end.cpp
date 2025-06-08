/*HERE IN THIS PROGRAM WE ENTER THE ARRAY ELEMENTS THAT CONTAIN ZEROS 
FROM WHICH ALL THE NON ZERO ELEMENTS WILL BE FIRST AND ZEROS WILL BE MOVED TO THE END*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter noof elements";
    cin >> n;
cout<<"enter the elements of array";
    int arr[1000];  
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int j = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            j = i;
            break;
        }
    }

    if (j == -1) return 0;  

    for (int i = j + 1; i < n; i++) {
        if (arr[i] != 0) {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j++;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
