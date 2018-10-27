#include <iostream>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {

                        float pecahan1,pecahan2,penjumlahan,pengurangan,pembagian,perkalian;

                        cout<<"Masukan pecahan pertama: ";

                        cin>>pecahan1;

                        cout<<"Masukan pecahan kedua: ";

                        cin>>pecahan2;

                        penjumlahan=pecahan1+pecahan2;

                        pengurangan=pecahan1-pecahan2;

                        pembagian=pecahan1/pecahan2;

                        perkalian=pecahan1*pecahan2;

                        cout<<"Hasil penjumlahan 2 bilangan Pecahan: "<<penjumlahan<<endl;

                        cout<<"Hasil pengurangan 2 bilangan Pecahan: "<<pengurangan<<endl;

                        cout<<"Hasil pembagian 2 bilangan Pecahan: "<<pembagian<<endl;

                        cout<<"Hasil perkalian 2 bilangan Pecahan: "<<perkalian<<endl;

                        return 0;

}
