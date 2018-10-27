#include <iostream>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {

            int s,jam,menit,detik,sisa;

            cout<<"Konversi Detik ke jam, menit, Detik";

            cout<<endl;

            cout<<"Masukan Detik: ";

            cin>>s;

            jam=s/3600;

            sisa=s%3600;

            menit=sisa/60;

            detik=sisa%60;

            cout<<jam<<" jam "<<menit<<" menit "<<detik<<" detik"<<endl;

            return 0;

}
