#include <iostream>
using namespace std;

int main (){
    int bilangan;
    cout << "masukkan bilangan: ";
    cin >> bilangan;
    cout << endl;

    if (bilangan%2==0) {
    cout << bilangan << " adalah bilangan genap" << endl;
    }else{
    cout << bilangan << " adalah bilangan ganjil" << endl;
    }

    return 0;
}

