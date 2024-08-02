#include <iostream>

using namespace std;

int countNeighbour(int** arr, int l, int c);

int main(){
    int n = 0, q = 0;
    string row;

    cin >> n >> q;

    int arr[n][n];
    for (int i = 0; i < n; ++i) {
        cin >> row;
        for (int j = 0; j < row.size(); ++j) {
            arr[i][j] = row.at(j) - '0';
        }
    }

    //int count = countNeighbour(arr, 1, 1);
    //cout << count;

    // print input
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << arr[i][j];
        }
        cout << "\n";
    }
}

int countNeighbour(int** arr, int l, int c){
    int count = 0;
    if (
            (arr[l-1][c-1] == 1) ||
            (arr[l-1][c] == 1) ||
            (arr[l-1][c+1] == 1) ||
            (arr[l][c-1] == 1) ||
            (arr[l][c+1] == 1) ||
            (arr[l+1][c-1] == 1) ||
            (arr[l+1][c] == 1) ||
            (arr[l+1][c+1] == 1)
    )count++;
    return count;
}