#include <iostream>
using namespace std;
int main ()
{
    int bil[5];
    int maxNumber;
    int dicari, hasilCari = 0;

    cout << "_________________________________________________" << endl;
    cout << endl;
    cout << " Program Nilai Maks. Dan Menentukan Indeks Array!" << endl;
    cout << "_________________________________________________" << endl;
    cout << endl;
    cout << " Silahkan masukkan 5 buah bilangan: " << endl;


    for (int i = 0; i < 5; ++i)
    {
        cout << " ` Bilangan ke - " << (i + 1) << ":" ;
        cin >> bil[i];
    }

maxNumber = bil[0];
for (int i = 0; i < 5; ++i)
    {
        if (bil [i] > maxNumber)
            {
                maxNumber = bil [i];
            }
    }
cout << endl;
cout << "  ~~ Bilangan terbesar dari kelima bilangan tersebut adalah : " << maxNumber << endl;
cout << "__________________________________________________________________" << endl;
cout << endl;

cout << " `! Index checking here !`" << endl;
cout << "    Bilangan berapa yang ingin anda periksa indeksnya?  ";
cin >> dicari;
for (int j = 0; j < 5 ; j++){
    if (dicari == bil[j])
    {
        hasilCari++;
    }
}

if (hasilCari == 0)
{
    cout << endl;
    cout << "    Bilangan tersebut tidak ditemukan pada array :( " << endl;
}

else {
    cout << "    Bilangan " << dicari << " ditemukan pada array! pada: " << endl;
    for (int k = 0; k < 5 ; k++){
        if (dicari == bil[k]){
            cout << "    indeks ke - " << k << endl;
        }
    }
}
return 0;
}
