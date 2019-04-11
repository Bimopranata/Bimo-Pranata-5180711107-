#include<iostream>
using namespace::std;
float jumlah(float nilai1,float nilai2,float nilai3,float nilai4)
{
    float jlh;
    jlh=nilai1+nilai2+nilai3+nilai4;

    if(jlh>=81)
    {
       cout<< 'A';

    }
    else  if(jlh>=61)
    {
       cout<< 'B';
    }
    else  if(jlh>=41)
    {
        cout<<'C';
    }
    else  if(jlh>=21)
    {
        cout<<'D';
    }
    else
    {
        cout<<'E';
    }
    return jlh;
}
void input ()
{
    float uts,uas,absen,tugas,nilai1,nilai2,nilai3,nilai4,jlh;
    cout<<"Masukkan nilai UTS :";
    cin>>uts;
    cout<<endl;
    nilai1=uts*0.2;
    cout<<"Konversi Nilai uts :"<<nilai1;
    cout<<endl;
    cout<<endl;

    cout<<"Masukkan nilai UAS :";
    cin>>uas;
    cout<<endl;
    nilai2=uas*0.3;
    cout<<"Konversi Nilai uas :"<<nilai2;
    cout<<endl;
    cout<<endl;

    cout<<"Masukkan nilai TUGAS :";
    cin>>tugas;
    cout<<endl;
    nilai3=tugas*0.35;
    cout<<"Konversi Nilai tugas :"<<nilai3;
    cout<<endl;
    cout<<endl;

    cout<<"Masukkan nilai ABSEN :";
    cin>>absen;
    cout<<endl;
    nilai4=absen*0.15;
    cout<<"Konversi Nilai absen :"<<nilai4;
    cout<<endl;
    cout<<endl;


    cout<<" Grade:"<<jumlah(nilai1,nilai2,nilai3,nilai4)<<endl;


}
main ()
{ float uts,uas,absen,tugas,nilai1,nilai2,nilai3,nilai4,jlh;
    input ();
}
