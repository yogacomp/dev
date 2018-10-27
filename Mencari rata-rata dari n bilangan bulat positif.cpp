#include <iostream>


using namespace std;

int main(int argc, char** argv) {

int i, n, jumlah, x;

    float rata;

    cout<<"Banyak data : ";cin>>n;

    jumlah = 0;

    for(i=1;i<=n;i++){

    cout<<"Data ke- "<<i<<" : ";cin>>x;

    jumlah += x;

    }

    rata = (float)jumlah/n;

    cout<<"Rata-rata dari n bilangan bulat positif = "<<rata<<endl;

    return 0;

}
