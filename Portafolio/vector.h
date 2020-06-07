#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Coleccion{
	
	private:
		int vector[50];
		int tamano;
		int cantidad;
	public:	
		Coleccion(){//sin parametros
			tamano = 50;
			cantidad = 0;
			for(int i=0; i< tamano; i++)
				vector[i]=0;
		}
	
	Coleccion(int n){//con parametros
			cantidad = 0;
			tamano = n;
			for(int i=0;i<tamano;i++)
				vector[i]=0;			
		}
			
		int getCantidad(){
			return cantidad;
		}
		int getTamano(){
			return tamano;
		}
		void setCantidad(int can){
			if((can < tamano )&&(can> 0))
				cantidad = can;
		}
//		void setTamano(int ptamano){ //no se implementa porque no se puede cambiar el tamano cuando se quiera, no se puede cambiar deberia ponerse como privado, es para no permitir que alguien quiera  cambiar el tamaño del arreglo
//			tamano = ptamano;
//		}
			
		void insertarEle(int elem){
			
			if(cantidad <tamano){
				vector[cantidad]=elem;
				cantidad = cantidad+1;//no valida la cantidad
			}
		}
		
			
		string toString(){
			stringstream s;
			for(int i = 0; i<cantidad;i++)
				s<<vector[i]<<" ";
			s<<' ';
			return s.str();
		}
			
		bool buscarEle(int ele){
			for(int i=0;i<cantidad;i++) {
				if(vector[i] == ele){
					return true;
				}
			}
			return false;
		}
			
		int encontrarPosEle(int ele){
			for (int i = 0; i<cantidad;i++){
				if(vector[i] == ele)
				return i;
			}
			return -1;
		}
			
		 int maximo(){
			 int nMax = vector[0];
			 
			 for (int i = 0;i < cantidad;i++){
				 if(nMax<vector[i]){
					 nMax = vector[i];
				 }
			 }
			 return nMax;	
		 }
			 
		int posNumMax(){
			int pos = 0;
			int numMax = vector[0];
			
			for(int i = 1; i < cantidad; i++){
				if(numMax < vector[i]){
					numMax = vector[i];
					pos = i;
				}
			}
			return pos;
		}
	 
		 int suma(){
			 int suma = 0;
			 for(int i = 0;i<cantidad; i++){
				 suma= suma+vector[i];
			 }
			 return suma;
		 }
		 
		float medAritmetica(){ //preguntar si el casting está bien
			int suma = 0;
			for(int i = 0;i<cantidad; i++){
				suma= suma+vector[i];
			}
			return (float)suma/cantidad;
		}
		
		void eliminarEle(){
			setCantidad(cantidad-1);
		}	
		 
		
		int posMin(){
			int position = 0;
			int min = vector[0];
			
			for(int i=1; i<cantidad; i++){
				if(vector[i] < min){
					position = i;
					min = vector[i];
				}
			}
			return position;
		}
			//Tarea
			
			
		void cambiaPos(int i, int j) {					
			if (i < cantidad && j < cantidad) {			
				int posI = vector[i];
				vector[i] = vector[j];
				vector[j] = posI;
			}
		}
		
		void invertirArray() {
			int i = 0;
			int j = cantidad-1;
			while(i<j) {
				cambiaPos(i, j);
				i++;
				j--;
			}
		}
	
		void insertarElePos(int elem, int k ){
			
			for(int i = cantidad; i >= k; i--){
				vector[i] = vector[i-1];
			}
			vector[k-1] = elem;
			cantidad++;
			
		}
			
		void eliminarElemPos(int pos){
			for(int i = pos ; i<cantidad; i++){
				vector[i] = vector[i+1];
			}
			cantidad--;
		}
			//quiz 02/06/2020
			
		int buscaRepetidos(int ele) {
			int repetidos = 0;
			for(int i = 0; i<cantidad;i++){
				if(vector[i] == ele) {
					repetidos++;
				}
			}
			return repetidos;
		}
		
		void sumaVectores(Coleccion obj2, Coleccion &obj3)	{
			for (int i = 0; i<cantidad; i++)
				obj3.vector[i]=vector[i]+obj2.vector[i];
		}
		
		void intercambioColeccion(Coleccion &obj2){
			int aux = 0;
			for(int i = 0: i<cantidad: i++){
				aux = vector[i];
				vector[i]=obj2.vector[i];
				obj2.vector[i]=aux;
			}
		}
		//practica en clase 05/06/2020
			bool sonIguales (Coleccion obj) {
			for(int i = 0; i<cantidad;i++) {
				if (vector[i] != obj.vector[i]) {
					return false;
				}
			}
			
			return true;
		}
		
		void multiplica(Coleccion B, Coleccion &C) {
			for(int i = 0; i < cantidad; i++) {
				C.vector[i] = vector[i] * B.vector[i];
			}
		}
			
		void burbuja(){
			int auxiliar;
			for(int  = 0; i<cantidad, i++){
				for(int j = 0; j<cantidad-1, j++){
					if(vector[j]>vector[j+1]){
					auxiliar = vector [j];
					vector [j] = vector [j+1];
					vector[j+1] = auxiliar;
					}
				}
			}
		}	
			
		// Tarea como hacer metodo burbuja más eficiente()
			
		~Coleccion(){
		}
};



#endif
 
