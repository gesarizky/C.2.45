/**********************************************************
*  PEMROGRAMAN C++                                        *
*                                                         *
*  Author  : Gesa Rizky Nugraha                           *
*  Email   : gesarizkynugraha@gmail.com                   *
*                                                         *
*  Website : karenabelajar.blogspotcom                    *
*                                                         *
***********************************************************/

#include <iostream>
#include <cstring>
#include <fstream>
#include <cerrno>	// errno
#include <cstdlib>	// exit()
#include <cstdio>	// fopen(), fclose()

using namespace std;

int main() {

  ifstream fp;
  
  // Membuka file untuk dibaca
  fp.open("coba.txt");
  
  if (fp == NULL) {
    cout<<"Kode error: "<<errno<<endl;
    cout<<"Pesan error: "<<strerror(errno);
    exit(EXIT_FAILURE);
  }
  
  // Membaca isi file
  char c;
  while (!fp.eof()) {
  	fp.get(c);
  	cout<<c;
  }
  
  // Menutup file
  fp.close();
  
  return 0;
}
