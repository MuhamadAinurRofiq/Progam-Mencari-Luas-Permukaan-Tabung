#include <iostream>

using namespace std;

int main()
{
    int r, t, luas;

    cout<<endl;
    cout<<" PROGAM MENGHITUNG LUAS PERMUKAAN TABUNG, OLEH MUHAMMAD AINUR ROFIQ";
    cout<<endl;
    cout<< " Jika anda memiliki roti berbentuk tabung "<<endl;
    cout<<endl;
    cout<< "Dan anda ingin tau, Berapa sih luas permukaannya ??? "<<endl;
    cout<<endl;
    cout<< "Maka mari kita coba hitung "<<endl;
    cout<<endl;
    cout<< "Pertama masukkanlah jari jari roti anda : ";
    cin>>r;
    cout<<endl;

    cout<< "kemudian masukkan tinggi roti anda : ";
    cin>>t;
    cout<<endl;
    luas= 2*3.14*r*t + 2*3.14*r*r;

    cout<< "Maka luas permukaan roti anda adalah :  "<<luas<<endl;
    cout<<endl;
    cout << "TERIMAKASIH";
    cout<<endl;

    return 0;
}
