#include <iostream>
using namespace std;
int main()
{
   setlocale(LC_ALL,"Turkish");
   int vize,lab,final,ort;
   cout<<"Vize Notunu Girin : ";
   cin>>vize;
   cout<<"Lab Notunu Girin : ";
   cin>>lab;
   cout<<"Final Notunu Girin : ";
   cin>>final;
   ort=(vize*0.3)+(lab*0.3)+(final*0.4);
   cout<<"Ortalama : "<<ort<<endl;
   
   if(ort<50)
   {
   	cout<<"Kaldýnýz.";
   }
   else
   {
   	cout<<"Geçtiniz.";
   }
}
