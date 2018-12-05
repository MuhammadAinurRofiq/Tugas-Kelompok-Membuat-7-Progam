#include <iostream>
#include <conio.h>
//header

using namespace std;

int main ()
{
    int i,n;

    cout <<" PROGAM C++ MENGGUNAKAN PERULANGAN 'FOR'\n\n";
    cout << "======================================================\n\n";
    cout << "BERAPA BANYAK ANDA INGIN MENCETAK KATA MINTA MAAF UNTUK KEKASIH ANDA ?\n";
    cout << "=";
    cin>>n;

    for (i=1; i<=n; i++)
    {
        cout << "MOHON MAAF SAYANG\n";
    }

    getch();
    return 0;
}
