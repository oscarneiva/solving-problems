#include <iostream>
#include <vector>

using namespace std;

int main(){
    int k, n;
    cin >> k >> n;
    vector<char> alpha(k);
    vector<char> msg(n);
    
    for (int i = 0; i < k; i++){
        cin >> alpha.at(i);
    }
    
    for (int i = 0; i < n; i++){
        cin >> msg.at(i);
    }

    int count = 0;
    for (int i = 0; i < k; i++){
        bool flag = false;
        for (int j = 0; j < n; j++){
            if (alpha.at(i) == msg.at(j)){
                flag = true;
                count++;           
                break;
            }
        }
        if (!flag){
            cout << "N";
            break;
        }
        
        if (count == k){
            cout << "S";
            break;
        }
    }
    if (count != k){
        cout << "N";
    }
}