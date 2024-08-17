#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n = 0;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++){
       cin >> arr.at(i);
    }


    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (arr.at(j) == i+1){
                cout << j+1 << endl;
                break;
            }
        }
    }
    
}