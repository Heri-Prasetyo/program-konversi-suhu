#include<iostream>
using namespace std;
int main(){
float C,F,R;

cout<<"PROGRAM KONVERSI SUHU"<<endl;

cout<<"Konversi Suhu Celcius Ke Fahrenheit"<<endl;
cout<<"Masukan Nilai Celciusnya = ";
cin>>C;
F=(C*9/5)+32;
cout<<"Nilai Fahrenheit         = "<<F<<endl;


cout<<"Konversi Suhu Celcius Ke Reamure"<<endl;
cout<<"Masukan Nilai Celciusnya = ";
cin>>C;
R=C*4/5;
cout<<"Nilai Reamure            = "<<R<<endl;

return 0;
}
