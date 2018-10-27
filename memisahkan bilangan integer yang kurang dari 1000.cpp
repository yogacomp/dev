#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void nominal (int x)
{
int a,b,c;
    if(x>=1000){
        cout<<"Maaf anda bisa menginputkan 3 angka";
        cout<<endl;
    }
        else{
            a=x/100;
            b=(x-a*100)/10;
            c=(x-a*100-b*10);
            cout<<a<<" Ratusan "<<endl;
            cout<<b<<" Puluhan "<<endl;
            cout<<c<<" Satuan "<<endl;}}
   

int main(int argc, char** argv) {
    int input;
    cout<<"masukkan 3 angka yang anda inginkan :"<<endl;
    cin>>input;
    nominal(input);
   
      
    return 0;
}



