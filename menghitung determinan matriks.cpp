#include <iostream>
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
    int a,b,c,d,det;
    cout<<"masukkan angka a = ";
    cin>>a;
    cout<<"masukkan angka b = ";
    cin>>b;
    cout<<"masukkan angka c = ";
    cin>>c;
    cout<<"masukkan angka d = ";
    cin>>d;
    det=(a*d)-(b*c);
    cout<<"\ndeterminannya adalah = "<<det<<endl;
      
    return 0;
}



