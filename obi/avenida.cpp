#include <iostream>

using namespace std;

int main(){
    int d = 0;
    cin >> d;
    int gap = 0;

    for (int i = 0; i < 6; i++)
    {
        if (d - gap < 200){
            cout << abs(d - gap);
            break;
        } 
        gap += 400;
    }
}