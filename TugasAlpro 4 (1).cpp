#include <iostream>
using namespace std;

int main (){
    string username, password;

    cout << "masukkan username : ";
    cin >> username;

    cout << "masukkan password : ";
    cin >> password;

    if (username == "Rajaemin" && password == "180703") {
            cout << "username dan password sesuai" << endl;
            cout << "log in berhasil!" << endl;


    }else if (username == "Rajaemin" && password != "180703") {
        cout << "username sesuai, password tidak sesuai!" << endl;
    }else if (username != "Rajaemin" && password == "180703") {
        cout << "username tidak sesuai, password sesuai!" << endl;

    }else{
        cout << "username dan password tidak sesuai!" << endl;


    }return 0;

    }
