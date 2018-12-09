#include<iostream>
using namespace std;
main()
{
  int duit,selisih,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;
  cout<<"masukkan nominal uang : ";
  cin >> duit;
  a=duit/100000;//untuk menghitung pecahan 100.000
  selisih=duit%100000;//untuk menghitung sisa uang dr hasil pembagian 100.000
  b=selisih/50000;//untuk menghitung pecahan 50.000
  selisih=selisih%50000;//untuk menghitung sisa uang dr hasil pembagian 50.000
  c=selisih/20000;
  selisih=selisih%20000;
  d=selisih/10000;
  selisih=selisih%10000;
  e=selisih/5000;
  selisih=selisih%5000;
  f=selisih/2000;
  selisih=selisih%2000;
  g=selisih/1000;
  selisih=selisih%1000;
  h=selisih/500;
  selisih=selisih%500;
  i=selisih/200;
  selisih=selisih%200;
  j=selisih/100;
  selisih=selisih%100;
  k=selisih/50;
  selisih=selisih%50;
  l=selisih/25;
  selisih=selisih%25;
  m=selisih/10;
  selisih=selisih%10;
  n=selisih/5;
  selisih=selisih%5;
  o=selisih/1;
  selisih=selisih%1;


  std::cout << "seratus ribu : "<< a << '\n';
  std::cout << "lima puluh ribu : "<<b << '\n';
  std::cout << "dua puluh ribu : " << c << '\n';
  std::cout << "sepuluh ribu : " << d << '\n';
  std::cout << "lima ribu : " << e << '\n';
  std::cout << "dua ribu : " << f << '\n';
  std::cout << "seribu : " << g << '\n';
  std::cout << "lima ratus :" << h << '\n';
  std::cout << "dua ratus : " << i << '\n';
  std::cout << "seratus : "<< j << '\n';
  std::cout << "lima puluh : " << k << '\n';
  std::cout << "dua lima : "<< l << '\n';
  std::cout << "sepuluh : "<< m << '\n';
  std::cout << "lima : " << n << '\n';
  std::cout << "satu : " << o << '\n';
}
