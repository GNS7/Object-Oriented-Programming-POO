//
// Created by GNS20 on 2023-08-30.
//

#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {

    int arr[3] = {0, 0, 0};

    cout << "Digite 3 valores: " << endl;
    cin >> arr[0] >> arr[1] >> arr[2];

    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    system("pause");
    return 1;
}