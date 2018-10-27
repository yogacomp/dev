#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {

float cel,rea,fah,kel;

cout<<"KONVERSI SUHU\n";

  cout<<"Masukan suhu Celcius: ";

cin>>cel;

  fah=(9/5)*cel+32;

  cout<<"Fahrenheit: "<< fah <<" fahrenheit"<<endl;

  rea=cel*4/5;

  cout<<"Reamur: "<<rea<<" reamur"<<endl;

  kel=cel+273,15;

  cout<<"Kelvin: "<<kel<<" kelvin"<<endl;

            return 0;}
