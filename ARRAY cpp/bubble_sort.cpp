#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> array(n);

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    // Bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << array[i] << endl;
    }
}
///https://www.w3schools.com/dsa/dsa_algo_bubblesort.php