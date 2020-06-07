#include<iostream>
#include"vector.h"
#include<sstream>
#include<string>
using namespace std;

int main () {
	int ele;
	Coleccion Numeros(7);
	cout<<"Digite un valor de la coleccion"<<endl;
	 for(int i=0; i<Numeros.getTamano()-1;i++){
		 cin>>ele;
		 Numeros.insertarEle(ele);
	 }
//	 Numeros.cambiaPos(4, 0);
//	 Numeros.invertirArray();
	 Numeros.insertarElePos(10,3);
	 
	cout<<Numeros.toString();
	//cout<<Numeros.buscarEle(6);
	 
	
	return 0;
}

