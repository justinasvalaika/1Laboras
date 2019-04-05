#include <iomanip>
#include <iostream>
using namespace std;

int main()
{

string vardas;
int rdydis=0;

cout<<"Koks jusu vardas\?"<<endl;
cin>>vardas;

while (rdydis<1 || rdydis>10)
{
cout<<"Iveskite remelio dydi (nuo 1 iki 10)";
cin>>rdydis;
}

cout<<right<<setfill('*')<<setw(vardas.size()+rdydis*2+12)<<"*"<<endl;
cout<<"*"<<right<<setfill(' ')<<setw(vardas.size()+rdydis*2+11)<<"*"<<endl;
cout<<left<<setw(rdydis+1)<<"*"<<"Sveikas, "<<vardas<<"!"<<right<<setw(rdydis+1)<<"*"<<endl;
cout<<"*"<<right<<setfill(' ')<<setw(vardas.size()+rdydis*2+11)<<"*"<<endl;
cout<<right<<setfill('*')<<setw(vardas.size()+rdydis*2+12)<<"*"<<endl;
}
