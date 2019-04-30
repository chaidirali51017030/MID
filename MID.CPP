#include <iostream.h>
#include <conio.h>
main ()
{
char nama [25], nim [15];
int b,c,d,e,f,totalnt,totalt,nmid,nfinal,Na,nhuruf;

cout<<"Hitung nilai akhir" <<endl;
cout<<"masukkan nama mahasiswa : "; cin >> nama;
cout<<"masukkan nim mahasiswa : "; cin >> nim;
cout<<"nilai tugas 1 : "; cin >> b;
cout<<"nilai tugas 2 : "; cin >> c;
cout<<"nilai tugas 3 : "; cin >> d;
cout<<"nilai mid : "; cin >> e;
cout<<"nilai final : "; cin >> f;
		totalnt = (b+c+d) / 3;
	totalt = totalnt * 20/100;
   nmid = e * 40/100;
   nfinal = f * 40/100;
   Na = totalt + nmid + nfinal;
   cout<<"Nama Mahasiswa = " <<nama;
   cout<<"Nim				 = " <<nim;
   cout<<"Nilai Akhir	 = " <<Na;
   cout<<"Nilai Huruf	 = " <<nhuruf;
   if (Na >= 80){
   	cout <<"A";
   } else if (Na >= 70){
   	cout <<"B";
   } else if (Na >= 60){
   	cout <<"C";
   } else if (Na >= 50){
   	cout <<"D";
   } else {
   	cout <<"E";
   getch();
   }

