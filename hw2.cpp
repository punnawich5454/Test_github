#include <iostream>
using namespace std;

int main(){
    int number;
    char ch;

    cout << "Input number: ";
    cin >> number;
    cout << "Input character: ";
    cin >> ch;

    for (int i = 1; i <= number; i++){
        for (int j = 1; j <= i; j++){
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}