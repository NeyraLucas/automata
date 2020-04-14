// Automata finito determinista 1.1
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
using namespace std;

main(){
	
	int inicio = 1;
	int acepta = 3;
	int noacepta= 2;
	int actual = inicio;
	int longitud =0;
	char palabra[100]="";

	cout<<"------------------------------------------"<<endl;
	cout<<"------- AUTOMATA FINITO -------"<<endl;
	cout<<"------------------------------------------"<<endl;
	cout<<"-----BY: Luis N ---------"<<endl;
	cout<<"------------------------------------------"<<endl;		
	cout<<"\nIngrese datos: "<<endl;
	cin>>palabra;
// 	longitud= strlen(palabra);
	
	bool fin=false; //var de termino
	
	int contador=0;
	while(fin==false){

		if(contador>strlen(palabra-1)){ //compara para saber si termina
			fin=true;								//el tamañano del vector input
			break;
		}
	
		if(actual==1){ //para el estado 1
			
			if(palabra[contador]=='a','b','c','d','e','f','g','h','i','j','j','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'){
				actual=3;
			}
			if(palabra[contador]=='0'){
				actual=2;
			}
			if(palabra[contador]=='1'){
				actual=2;
			}
			if(palabra[contador]=='2'){
				actual=2;
			}
			if(palabra[contador]=='3'){
				actual=2;
			}
			if(palabra[contador]=='4'){
				actual=2;
			}
			if(palabra[contador]=='5'){
				actual=2;
			}
			if(palabra[contador]=='6'){
				actual=2;
			}
			if(palabra[contador]=='8'){
				actual=2;
			}
			if(palabra[contador]=='9'){
				actual=2;
			}
			contador++;
			continue;
		}
		
		if(actual==2){	//estado 2
			if(palabra[contador]==0){
				actual=2;
			}
			if(palabra[contador]=='a'){
				actual=2;
			}
		
			contador++;
			continue;
			}
			
		if(actual==3){	//estado 3
			
			if(palabra[contador]=='a','b','c','d','e','f','g','h','i','j','j','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'){
				actual=3;
			}
			if(palabra[contador]=='0'){
				actual=3;
			}	
			if(palabra[contador]=='1'){
				actual=3;
			}
			if(palabra[contador]=='2'){
				actual=3;
			}
			if(palabra[contador]=='3'){
				actual=3;
			}
			if(palabra[contador]=='4'){
				actual=3;
			}
			if(palabra[contador]=='5'){
				actual=3;
			}
			if(palabra[contador]=='6'){
				actual=3;
			}
			if(palabra[contador]=='7'){
				actual=3;
			}
			if(palabra[contador]=='8'){
				actual=3;
			}
			if(palabra[contador]=='9'){
				actual=3;
			}
			contador++;
			continue;
			
			}

	}
		if(actual==acepta){
			cout<<"La cadena es correcta";
		}else{
			cout<<"La cadena es incorrecta";
		}
		
	getch();
	return 0;
}
