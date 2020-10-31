#include <iostream>
#include <stdlib.h>
#include<conio.h>
#include<iomanip>
#include<string.h>
#include<fstream>
using namespace std;
//hola
class Password{
	
	private:
	int administrador=1031, colab1=3217,colab2=4990,colab3=6361,ucolab1=103169741;
	int ucolab2=123455,ucolab3=21345, uadmin=32179682, palomitasgran = 30, palomitaspeque =25; 
	int nachosgran = 20, nachospeque=15, bebidagran= 17, bebidapeque = 15; 
	int combo1=60 , combo2=110 , combo3= 120;
	int funcion2d=33, funcion3d=35,  admin,  admin2,  admin3; 
	float x,x1, y1;
	double y,a;
	
	
	public: 
	Password(int);
	Password(double);
	Password(int,int); 
	Password(float, double);
	Password(float,float);
	void comida();
	void horario();
	void contrasenia();
	int getAdministrador(){
	return administrador;
	}
	int getColab1(){
	return colab1;
	}
	int getColab2(){
	return colab2;		
	}
	int getColab3(){
	return colab3;
	}
	int getPalomitasgran(){
		return palomitasgran;		
	}
	int getPalomitaspeque(){
		return palomitaspeque;		
	}
	int getNachosgran(){
		return nachosgran;		
	}
	int getNachospeque(){
		return nachospeque;		
	}
	int getBebidasgran(){
		return bebidagran;		
	}
	int getBebidaspeque(){
		return bebidapeque;		
	}
	int getCombo1(){
		return combo1;		
	}
	int getCombo2(){
		return combo2;		
	}
	int getCombo3(){
		return combo3;		
	}
	
	int getFuncion2d(){
		return funcion2d;		
	}

	int getFuncion3d(){
		return funcion3d;		
	}
	
	
};


Password::Password(int _admin){ admin= _admin;
}

Password::Password(int _admin2, int _admin3){ admin2= _admin2; admin3=_admin3; 
}

Password::Password(float _x, double _y){ x=_x; 	y=_y;
}
Password::Password(float _x1, float _y1){ x1=_x1; 	y1=_y1;
}
Password::Password(double _a){ a=_a;
}

void Password::comida(){
	
	cout << "-------------------------------------" << endl; 
	cout << "           MENU DE COMIDA            " << endl; 
	cout << " ------------------------------------" << endl; 
	cout << endl; 
	cout << "                   BEBIDAS                 " << endl << endl; 
	cout << "-------------------------------------------" << endl << endl; 
	cout << "SABORES DISPONIBLES: " << "                    PRECIOS " << endl << endl; 
	cout << " CocaCola " << "                          " << "BEBIDA GRANDE Q." << bebidagran << endl;
	cout << " PepsiCola " << "                         " <<"BEBIDA PEQUEÑA Q." << bebidapeque << endl; 
	cout << " Mirinda   " << endl; 
	cout << " Grapette " << endl; 
	cout << " ZevenUp  " << endl; 
	cout << " Tea frio " << endl; 
	
	cout << endl; 
	cout << "---------------------------------------- " << endl; 
	cout << "                    COMIDA                   " << endl << endl; 
	cout << " ---------------------------------------- " << endl << endl; 
	cout << "NACHOS                                   NACHOS GRANDES Q." << nachosgran <<".00"<< endl; 
	cout << "                                         NACHOS PEQUEÑOS Q." << nachospeque<<".00"<<endl;
	cout << endl << endl; 
	cout << "PALOMITAS                                PALOMITAS GRANDES Q." << palomitasgran << ".00"<<endl; 
	cout << "                                         PALOMITAS PEQUENIAS Q." << palomitaspeque<< ".00"<< endl; 
	cout << endl; 
	cout << "-----------------------------------------"<< endl;
	cout << "                COMBOS DISPONIBLES       " << endl;
	cout << "-----------------------------------------"<< endl;
	cout << " COMBO 1:  " << endl; 
	cout << " INCLUYE: " << endl; 
	cout << " 2 PALOMITAS PEQUEÑAS " << endl; 
	cout << " 1 BEBIDA GRANDE " << endl; 
	cout << " A TAN SOLO ---------> " << combo1;
	cout << endl << endl; 
	cout << " COMBO 2:  " << endl; 
	cout << " INCLUYE: " << endl; 
	cout << " 2 PALOMITAS GRANDE " << endl; 
	cout << " 1 BEBIDA GRANDE " << endl;
	cout << " 1 NACHO GRANDE " << endl;  
	cout << " A TAN SOLO ---------> " << combo2;
	cout << endl << endl; 
	cout << " COMBO 3:  " << endl; 
	cout << " INCLUYE: " << endl; 
	cout << " 2 PALOMITAS GRANDES " << endl; 
	cout << " 2 BEBIDAS GRANDES " << endl; 
	cout << " 2 NACHOS GRANDES " << endl; 
	cout << " A TAN SOLO ---------> " << combo3;
	cout << endl << endl; 
	
	
}

void Password::contrasenia(){
	cout << endl << endl;
	cout << "CONTROL DE USUARIOS Y CONTRASENIAS" << endl; 
	cout << "NO PUEDES MODIFICAR LAS CONTRASENIAS" << endl;
	
	cout << " ADMINISTRADOR  " << "                " << "   CONTRASENIA " << endl; 
	cout <<  uadmin << "                           " <<  administrador << endl; 
	cout << " COLABORADOR 1  " << "                " << "   CONTRASENIA " << endl; 
	cout << ucolab1 << "                           " << colab1 << endl; 
	cout << " COLABORADOR 2   " << "                " << "   CONTRASENIA " << endl; 
	cout << ucolab2 << "                           " << colab2 << endl; 
	cout << " COLABORADOR 3 " << "                " << "   CONTRASENIA " << endl; 
	cout << ucolab3 << "                           " << colab3 << endl; 
	
	cout << "AUTORIZACION PARA CONTROL " << endl << endl; 
	
}


ofstream agregarpeli1; 
ifstream consulta; 
string  nombre1, codigop, nombrep, director1, actorp1, actora1, duracion1,horario,anio;
string clavep, auxClavep;
void agregarpeli(){
bool repetido = false; 
char opcion[20];
agregarpeli1.open("peliculas.txt",ios::out|ios::app);
consulta.open("peliculas.txt",ios::in);
fflush(stdin);
if(agregarpeli1.is_open()&&consulta.is_open()){
	fflush(stdin);
	do{
	
	cout << "                            "<< endl; 
	cout << " AGREGUE UNA NUEVA PELICULA " << endl; 
	cout << "                            " <<endl; 
	fflush(stdin);
	cout << "INGRESA LA CONTRASEÑA DE LA PELICULA " << endl; 
	getline(cin,auxClavep);
	consulta>>clavep; 
	
	while(!consulta.eof()){
		
consulta>>codigop>>nombrep>>director1>>actorp1>>actora1>>duracion1>>horario>>anio; 
	
	if(clavep==auxClavep){
		
		cout << "YA EXISTE UN REGISTRO CON ESTA CLAVE: " << auxClavep << endl; 
		repetido=true; 
		break; 
	}
	consulta>> clavep; 
	}
	
	if(repetido==false){
	fflush(stdin);	
	cout << "INGRESE EL CODIGO DE LA PELICULA " <<endl; 
	getline(cin,codigop);
	cout << "DIGITE EL NOMBRE DE LA PELICULA " <<endl; 
	getline(cin,nombrep);
	cout << "DIGITE EL DIRECTOR DE LA PELICULA " << endl; 
	getline(cin,director1);
	cout << " DIGITE EL ACTOR PRINCIPAL DE LA PELICULA " << endl; 
	getline(cin,actorp1);
	cout << " DIGITE EL ANTAGONISTA DE LA PELICULA " << endl; 
	getline(cin,actora1);
	cout << " DIGITE LA DURACION DE LA PELICULA " << endl; 
	getline(cin,duracion1);
	cout << "DIGITE EL HORARIO DE LA PELICULA " << endl; 
	getline(cin,horario); 
	cout << " DIGITE EL AÑO DE ESTRENO " << endl; 
	getline(cin,anio); 

agregarpeli1<<auxClavep<< "  "<<codigop<<"   "<<nombrep<<"      "<<director1<<"    "<<actorp1<<"     "<<actora1<<"     "<<duracion1<<"   "<<horario<<"   "<<anio<< endl; 
cout << "REGISTRO AGREGADO" << endl; 
	cout << endl << endl; 
		
	}
	cout << "DESEAS INGRESAR OTRA PELICULA (S/N)? " << endl << endl; 
	cin >> opcion[0]; 	
	cout << endl << endl; 
	
}while(opcion[0] == 'S' || opcion[0] == 's');

}else{
	
	cout << "EL ARCHIVO NO SE PUDO ABRIR o NO HA SIDO CREADO" << endl; 
	
	
}	
	
	agregarpeli1.close(); 
	consulta.close();
}

ofstream agregarestre1; 
string  resenia, clavee, auxClavee, codigoe, nombree,actorpe,actorae,directore, duracione,nombre2,horarioe;
 

void agregarestre(){
char opcion[20];
agregarestre1.open("estrenos.txt",ios::out|ios::app);

if(agregarestre1.is_open()){
	do{
	cout << "                            "<< endl; 
	cout << " AGREGUE UN NUEVO ESTRENO " << endl; 
	cout << "                            " <<endl; 
	cout << "DATOS DE LA PELICULA " << endl; 
	getline(cin,nombre2);
	cout << "INGRESE EL CODIGO DE LA PELICULA " <<endl; 
	getline(cin,codigoe);
	cout << "DIGITE EL NOMBRE DE LA PELICULA " <<endl; 
	getline(cin,nombree);
	cout << "DIGITE EL DIRECTOR DE LA PELICULA " << endl; 
	getline(cin,directore);
	cout << " DIGITE EL ACTOR PRINCIPAL DE LA PELICULA " << endl; 
	getline(cin,actorpe);
	cout << " DIGITE EL ANTAGONISTA DE LA PELICULA " << endl; 
	getline(cin,actorae);
	cout << " DIGITE LA DURACION DE LA PELICULA " << endl; 
	getline(cin,duracione);
	cout << "ESCRIBA LA RESENIA DE LA PELICULA " << endl; 
	getline(cin,resenia);
	cout << "DIGITE EL HORARIO DE LA PELICULA " << endl; 
	getline(cin,horarioe);

agregarestre1<<codigoe<<"   "<<nombree<<"      "<<directore<< "    "<<actorpe <<"     "<<actorae<<"     "<< duracione <<"     "<<resenia<<"    "<<horarioe<<endl; 
	cout << endl << endl; 
	cout << "DESEAS INGRESAR OTRO ESTRENO (S/N)? " << endl << endl; 
	cin >> opcion[0]; 	
	cout << endl << endl; 
}while(opcion[0] == 'S' || opcion[0] == 's');
}else{
	cout << "EL ARCHIVO NO SE PUDO ABRIR " << endl; 
}	
	agregarestre1.close(); 
}

ofstream agregarcolab1; 
string codigoc, nombrec,nombre4,nombre3, apellidoc,edadc;

void agregarcolab(){
	
char opcion[20];
int conteo=1;
agregarcolab1.open("colaboradores.txt",ios::out|ios::app);

if(agregarcolab1.is_open()){
	do{
	conteo++;
	cout << "                            "<< endl; 
	cout << " AGREGUE UN NUEVO COLABORADOR " << endl; 
	cout << "                            " <<endl; 
	cout << " INGRESAS EL COLABORADOR NUMERO " << conteo-1;
	cout << "                                " << endl; 
	fflush(stdin);
	cout << "DATOS DEL COLABORADOR " << endl; 
	cout << "INGRESE EL CODIGO DEL NUEVO COLABORADOR" <<endl; 
	getline(cin,codigoc);
	cout << "DIGITE EL NOMBRE DEL COLABORADOR" <<endl; 
	getline(cin,nombrec);
	cout << "DIGITE EL APELLIDO DEL COLABORADOR" << endl; 
	getline(cin,apellidoc);
	cout << "DIGITE LA EDAD " << endl; 
	getline(cin,edadc);
	
agregarcolab1<<codigoc<<"   "<<nombrec<<"      "<<apellidoc<< "    "<<edadc<<"     "<<endl; 
cout << endl << endl; 
	
	if(conteo<4){
	cout << "DESEAS INGRESAR OTRO ESTRENO (S/N)? " << endl << endl; 
	cin >> opcion[0]; 	
	}else {
	cout << "NO PUEDES INGRESAR MAS DE 3 COLABORADORES " << endl << endl;  	
	}
}while(opcion[0] == 'S' || opcion[0] == 's' && conteo<4);
}else{
	cout << "EL ARCHIVO NO SE PUDO ABRIR " << endl; 
}agregarcolab1.close(); 
}

void mostrarcolab(){
	ifstream lectura; 
	lectura.open("colaboradores.txt",ios::out|ios::in);

if(lectura.is_open()){
	cout << endl << endl; 
	cout << "VISUALIZACION DE LOS DATOS DE LOS COLABORADORES " << endl << endl;

	lectura >> codigoc; 
	while(!lectura.eof()){
	lectura >> nombrec; 
	lectura >> apellidoc;
	lectura >> edadc;	
		
cout << "CODIGO DEL COLABORADOR " << codigoc << "  NOMBRE Y APELLIDOS " << nombrec << " " << apellidoc  << " EDAD  " << edadc;
cout << endl << endl; 
lectura >> codigoc; 
}}else {
	cout << "NO SE PUDO ABRIR EL ARCHIVO" << endl; 
} lectura.close();
}

void mostrarpeli(){
	ifstream lectura; 
	lectura.open("peliculas.txt",ios::in);

if(lectura.is_open()){
	cout << endl << endl; 
	cout << "VISUALIZACION DE LOS DATOS DE LAS PELICULAS DISPONIBLES " << endl << endl;

	lectura >> clavep; 
	while(!lectura.eof()){
	lectura >> codigop; 
	lectura >> nombrep; 
	lectura >> director1;
	lectura >> actorp1;
	lectura >> actora1;
	lectura >> duracion1; 
	lectura >> horario;
	lectura	>>anio;

cout << "CONTRASEÑA " << clavep<< endl; 
cout << " CODIGO DE LA PELICULA :" <<codigop << endl;
cout << " NOMBRE DE LA PELICULA :" << nombrep<< endl;
cout << " DIRECTOR :" << director1<< endl;
cout << " ACTOR PRINCIPAL :" << actorp1<< endl;
cout << " ACTOR PRINCIPAL 2: " << actora1<< endl;
cout << " DURACION :" <<duracion1<< endl;
cout << " HORARIO :" << horario<< endl;
cout << " ANIO DE ESTRENO: " << anio<< endl;
		
cout << endl << endl; 
lectura >> clavep; 
}}else {
	cout << "NO SE PUDO ABRIR EL ARCHIVO" << endl; 
} 
lectura.close();
}

void mostrarestreno(){
	ifstream lectura; 
lectura.open("estrenos.txt",ios::out|ios::in);

if(lectura.is_open()){
	cout << endl << endl; 
	cout << " ESTRENOS DE LA SEMANA " << endl;
	cout << " HORARIOS EXCLUSIVOS  " << endl << endl;

	lectura >> codigoe; 
	while(!lectura.eof()){
	lectura >> nombree; 
	lectura >> directore;
	lectura >> actorpe;	
	lectura >> actorae; 
	lectura >> duracione; 
	lectura >> resenia;
	lectura >> horarioe;

cout << " CODIGO DE LA PELICULA :" << codigoe<<endl; 
cout << " NOMBRE DE PELICULA    :" << nombree<<endl;
cout << " DIRECTOR              :" << directore << endl;
cout << " ACTOR PRINCIPAL 1     :"	<<actorpe << endl;
cout << " ACTOR PRINCIPAL 2     :" << actorae << endl; 
cout << " LA PELICULA TIENE UNA DURACION DE: " << duracione << " MINUTOS " << endl; 
cout << endl << endl;
cout << " SE ENCUENTRA EN EL HORARIO DE: " << endl; 
cout << horarioe; 
cout << endl << endl; 
lectura >> codigoe; 
}}else {
	cout << "NO SE PUDO ABRIR EL ARCHIVO" << endl; 
} lectura.close();
}
int i =0;
	int totalcomida, totalnacho,totalbebida,totalpalomitas, totalcombo, general2, totalc1; 

void totalc(){
	int g,h,i;
Password obtener(3.67);
g= obtener.getCombo1();
h= obtener.getCombo2();
i= obtener.getCombo3(); 
	
int total=0,total1=0,total2=0; 

cout << "------------------------------------------" << endl; 
 cout << " SELECCION DE COMBOS ESPECIALES DE COMIDA " << endl; 
 cout << "------------------------------------------" << endl; 
 cout << endl; 
 cout << " 1. COMBO 1" << endl;
 cout << " 2. COMBO 2" << endl; 
 cout << " 3. COMBO 3" << endl; 
 cout << "DIGITE SU OPCION "; 
 cin >> general2; 
 
 switch(general2){
 	
 	case 1: 
 	cout << endl << endl; 
 	cout << " COMBO 1:  " << endl; 
	cout << " INCLUYE: " << endl; 
	cout << " 2 PALOMITAS PEQUEÑAS " << endl; 
	cout << " 1 BEBIDA GRANDE " << endl; 
	cout << " A TAN SOLO ---------> Q." << g << ".00";
	cout << endl; 
	totalcombo=g; 
	total=totalcombo; 
	cout << endl << endl; 
 	break; 
 	
 	case 2:
 	cout << endl << endl;
 	cout << " COMBO 2:  " << endl; 
	cout << " INCLUYE: " << endl; 
	cout << " 2 PALOMITAS GRANDE " << endl; 
	cout << " 1 BEBIDA GRANDE " << endl;
	cout << " 1 NACHO GRANDE " << endl;  
	cout << " A TAN SOLO ---------> Q." << h << ".00";
	cout << endl;	
	totalcombo=h; 
	total1=totalcombo; 
	cout << endl << endl; 
 	break;
 	
 	case 3: 
 	cout << endl << endl; 
	cout << " COMBO 3:  " << endl; 
	cout << " INCLUYE: " << endl; 
	cout << " 2 PALOMITAS GRANDES " << endl; 
	cout << " 2 BEBIDAS GRANDES " << endl; 
	cout << " 2 NACHOS GRANDES " << endl; 
	cout << " A TAN SOLO ---------> Q." << i << ".00";
	cout << endl;
	totalcombo=i; 
	total2=totalcombo; 
	cout << endl << endl; 
 	break; 
 	
 	default: 
 	cout << "OPCION INCORRECTA " << endl;  
 	break; 
 }
 }

void seleccioncomida(){
int a,b,c,d,e,f,g,h,i;
int opcion,opcion2,opcion3,opcion4, opcion1; 
int opcion5,opcion6,opcion7,opcion8,opcion9,opcion10,opcion11,opcion12,opcion13,opcion14,opcion15,opcion16;
int otro,otro1,otro2,otro3,otro4,otro5,otro6,otro7,otro8,otro9,otro10;
string tamanio,tamanio2,tamanio3,tamanio4,tamanio5,tamanio6,tamanio7,tamanio8,tamanio9,tamanio10,tamanio11,tamanio1,tamanio12; 
string sabor, tamanio13, tamanio14, tamanio15;
int opcion17, opcion18,opcion19, opcion20, general,general2; 
int total=0, total1=0, total2=0, total3=0, total4=0, total5=0, total6=0, total7=0, total8=0, total9=0, total10=0, total11=0, total12=0, total13=0, total14=0, total15=0;
Password obtener(3.67);
a= obtener.getPalomitasgran(); 
b= obtener.getPalomitaspeque(); 
c= obtener.getNachosgran();
d= obtener.getNachospeque();
e= obtener.getBebidasgran(); 
f= obtener.getBebidaspeque(); 
g= obtener.getCombo1();
h= obtener.getCombo2();
i= obtener.getCombo3(); 

cout << "--------------------------------------------" << endl; 
cout << " BIENVENIDO A LA SELECCION DE COMIDA " << endl; 
cout << " -------------------------------------------" << endl; 


cout << " SELECCION DE COMIDA " << endl; 
cout << " 1. BEBIDAS " << endl; 
cout << " 2. NACHOS " << endl;
cout << " 3. PALOMITAS" << endl; 
cout << endl;
cout << "DIGITE SU OPCION ---->   ";
cin >>opcion; 
switch(opcion){

case 1: //aqui
	fflush(stdin);
 	cout << " DIGITE EL SABOR DE SU BEBIDA " << endl; 
 	getline(cin,sabor);
 	
 	cout << " DESEA QUE SU BEBIDA SEA: " << endl;
 	cout << "1. BEBIDA GRANDE " << endl;
 	cout << "2. BEBIDA PEQUEÑA " << endl; 
 	cout << " DIGITE SU OPCION -----> ";
 	cin >> opcion1; 
 		switch(opcion1){
 			
 			case 1: 
 			totalbebida=e;
 			tamanio="GRANDE";
 			break;
			  
 			case 2: 
 			totalbebida=f;
 			tamanio="PEQUEÑO"; 
 			break; 
 			
 			default:
			 cout << " OPCION INCORRECTA " << endl;  
 			break; 
 			
 		}
 	fflush(stdin);
 	cout << endl << endl; 
 	cout << "HAZ SELECCIONADO UNA BEBIDA SABOR A " << sabor << " DE TAMAÑO " << tamanio << endl; 
 	cout << " CON UN VALOR DE " << totalbebida << endl;
	cout << endl << endl;  
	total=totalbebida; 

cout << "DESEA AÑADIR ALGO MAS? " << endl; 
	cout << " 1. NACHOS " << endl;
	cout << " 2. PALOMITAS " << endl; 
	cout << "DIGITA SU OPCION ----->   "; 
	cin >>opcion3; 
	
	switch(opcion3){
		
		case 1: 
		
	cout << " QUE TAMAÑO? " << endl; 
	cout << " 1. GRANDES (incluyen doble queso)" << endl;
	cout << " 2. PEQUEÑOS " << endl;
	cout << " DIGITE SU OPCION -----> ";
	cin >>opcion6;
	switch(opcion6){
		
		case 1: 
		totalnacho=c; 
		tamanio3= "GRANDE ";
		break; 
		
		case 2: 
		totalnacho=d; 
		tamanio3= "PEQUEÑOS ";
		break; 
		
		default:
		cout << "OPCION INCORRECTA " << endl;  
		break;
		
	}
	
	fflush(stdin);
 	cout << endl << endl; 
 	cout << "HAZ SELECCIONADO UNOS NACHOS DE TAMAÑO " << tamanio3 << endl; 
 	cout << " CON UN VALOR DE " << totalnacho << endl;
	cout << endl << endl;  
		total1=totalnacho; 
	break; 
		
	case 2: 
	cout << " QUE TAMAÑO? " << endl; 
	cout << " 1. GRANDES (incluyen doble mantequilla)" << endl;
	cout << " 2. PEQUEÑOS " << endl;
	cout << " DIGITE SU OPCION -----> ";
	cin >> opcion7;
	
	switch(opcion7){
		
		case 1:
		totalpalomitas=a; 
		tamanio4="GRANDES "; 
		break; 
		
		case 2: 
		totalpalomitas=b; 
		tamanio4="PEQUEÑAS "; 
		break; 
		
		default: 
		cout << "OPCION INCORRECTA " << endl; 
		break; 
		
		
	}	
	fflush(stdin);
 	cout << endl << endl; 
 	cout << "HAZ SELECCIONADO UNAS PALOMITAS DE TAMAÑO " << tamanio4 << endl; 
 	cout << " CON UN VALOR DE " << totalpalomitas << endl;
	cout << endl << endl;  
		total2=totalpalomitas; 
	
		break; 
		
		default: 
		cout << "OPCION INCORRECTA " << endl; 
		break;
		
		
	}

cout << " AÑADA ALGO MAS  " << endl;
cout << " 1. PALOMITAS" << endl; 
cout << " 2. NACHOS " << endl; 
cout << " 3. YA NO DESEO AÑADIR ALGO MAS  " << endl; 
cin >>opcion11;

switch(opcion11){
	
	case 1: 
	cout << " QUE TAMAÑO? " << endl; 
	cout << " 1. GRANDES (incluyen doble mantequilla)" << endl;
	cout << " 2. PEQUEÑOS " << endl;
	cout << " DIGITE SU OPCION -----> ";
	cin >> opcion17;
	
	switch(opcion17){
		
		case 1: 
		totalpalomitas=a; 
		tamanio12="GRANDES "; 
		break; 
		
		case 2: 
		totalpalomitas=b; 
		tamanio12="PEQUEÑAS "; 
		break; 
		
		default:
		cout << "OPCION INCORRECTA " << endl;  
		break;
		
	}
	
	fflush(stdin);
	cout << endl << endl; 
	cout << "HAZ SELECCIONADO UNAS PALOMITAS DE TAMAÑO " << tamanio12 << endl; 
	cout << " CON UN VALOR DE " << totalpalomitas << endl;
	cout << endl << endl;  
		total3=totalpalomitas; 
	
	break; 
	
	case 2: 
	cout << " QUE TAMAÑO? " << endl; 
	cout << " 1. GRANDES (incluyen doble queso)" << endl;
	cout << " 2. PEQUEÑOS " << endl;
	cout << " DIGITE SU OPCION -----> ";
	cin >> opcion18;
	
	switch(opcion18){
		
		case 1: 
		totalnacho=c; 
		tamanio13="GRANDE";
		break;
		
		case 2: 
		totalnacho=d; 
		tamanio13="PEQUEÑOS ";
		break; 
		
		default:
		cout << "OPCION INCORRECTA " << endl; 
		break;
	}
	fflush(stdin);
 	cout << endl << endl; 
 	cout << "HAZ SELECCIONADO UNOS NACHOS DE TAMAÑO " << tamanio13 << endl; 
 	cout << " CON UN VALOR DE " << totalnacho << endl;
	cout << endl << endl;  
		total4=totalnacho; 
	
	break; 
	
	case 3: 
	cout << "GRACIAS POR COMPRAR CON NOSOTROS " << endl; 
	break; 
	
	default: 
	cout << "OPCION INCORRECTA " << endl; 
	break; 
}
	
break; //aqui termina

case 2: 
	cout << " QUE TAMAÑO? " << endl; 
	cout << " 1. GRANDES (incluyen doble queso)" << endl;
	cout << " 2. PEQUEÑOS " << endl;
	cout << " DIGITE SU OPCION -----> ";
	cin >> opcion2; 
	switch(opcion2){
		
		case 1:
		totalnacho=c; 
		tamanio5="GRANDE";
		break; 
		
		case 2: 
		totalnacho=d; 
		tamanio5="PEQUEÑOS"; 
		break; 
		default: 
		cout << "OPCION INCORRECTA " << endl; 
		break; 
	}
	
	fflush(stdin);
 	cout << endl << endl; 
 	cout << "HAZ SELECCIONADO UNOS NACHOS DE TAMAÑO " << tamanio5 << endl; 
 	cout << " CON UN VALOR DE " << totalnacho << endl;
	cout << endl << endl;  
		total5=totalnacho; 

	cout << "DESEA AÑADIR ALGO MAS? " << endl; 
	cout << " 1. BEBIDAS " << endl;
	cout << " 2. PALOMITAS " << endl; 
	cout << "DIGITA SU OPCION ----->   "; 
	cin >> opcion4; 
	
	switch(opcion4){
		
		case 1: 
	fflush(stdin);
 	cout << " DIGITE EL SABOR DE SU BEBIDA " << endl; 
 	getline(cin,sabor);
 	
 	cout << " DESEA QUE SU BEBIDA SEA: " << endl;
 	cout << "1. BEBIDA GRANDE " << endl;
 	cout << "2. BEBIDA PEQUEÑA " << endl; 
 	cout << " DIGITE SU OPCION -----> ";
 	cin >> opcion8; 
 	switch(opcion8){
 		
 		case 1: 
		totalbebida=e;
		tamanio6="GRANDE";
 		break; 
 		
 		case 2: 
 		totalbebida=f;
 		tamanio6="PEQUEÑO"; 
 		break; 
 		
 		default:
 			cout << "OPCION INCORRECTA " << endl; 
 		break; 
 		 }
 	fflush(stdin);
 	cout << endl << endl; 
 	cout << "HAZ SELECCIONADO UNA BEBIDA SABOR A " << sabor << " DE TAMAÑO " << tamanio6 << endl; 
 	cout << " CON UN VALOR DE " << totalbebida << endl;
	cout << endl << endl;  
		total6=totalbebida; 
	break; 
		
	case 2:
	cout << " QUE TAMAÑO? " << endl; 
	cout << " 1. GRANDES (incluyen doble mantequilla)" << endl;
	cout << " 2. PEQUEÑOS " << endl;
	cout << " DIGITE SU OPCION -----> ";
	cin >> opcion9; 
	
	switch(opcion9){
		
		case 1: 
		totalpalomitas=a; 
		tamanio7="GRANDES "; 
		break; 
		
		case 2: 
		totalpalomitas=b; 
		tamanio7="PEQUEÑAS "; 
		break; 
		
		default:
		cout << "OPCION INCORRECTA " << endl;  
		break; 
	}
	fflush(stdin);
	cout << endl << endl; 
	cout << "HAZ SELECCIONADO UNAS PALOMITAS DE TAMAÑO " << tamanio7 << endl; 
	cout << " CON UN VALOR DE " << totalpalomitas << endl;
	cout << endl << endl;  
		total7=totalpalomitas; 
	break; 
		
		default: 
		cout << "OPCION INCORRECTA " << endl; 
		break; 
		
	}
	
cout << " AÑADA ALGO MAS  " << endl;
cout << " 1. PALOMITAS " << endl; 
cout << " 2. BEBIDAS " << endl; 
cout << " 3. YA NO DESEO AÑADIR ALGO MAS  " << endl; 
cin >>opcion13;

switch(opcion13){
	
	case 1: 
	cout << " QUE TAMAÑO? " << endl; 
	cout << " 1. GRANDES (incluyen doble mantequilla)" << endl;
	cout << " 2. PEQUEÑOS " << endl;
	cout << " DIGITE SU OPCION -----> ";
	cin >>opcion20; 
	
	switch(opcion20){
		
		case 1: 
		totalpalomitas=a; 
		tamanio14="GRANDES "; 
		break; 
		
		case 2:
		totalpalomitas=b; 
		tamanio14="PEQUEÑAS "; 
		break;
		
		default:
		cout << "OPCION INCORRECTA " << endl; 
		break; 
	}
	fflush(stdin);
	cout << endl << endl; 
	cout << "HAZ SELECCIONADO UNAS PALOMITAS DE TAMAÑO " << tamanio14 << endl; 
	cout << " CON UN VALOR DE " << totalpalomitas << endl;
	cout << endl << endl;
		total8=totalpalomitas;   
	break; 
	
	case 2: 
	fflush(stdin);
 	cout << " DIGITE EL SABOR DE SU BEBIDA " << endl; 
 	getline(cin,sabor);
 	
 	cout << " DESEA QUE SU BEBIDA SEA: " << endl;
 	cout << "1. BEBIDA GRANDE " << endl;
 	cout << "2. BEBIDA PEQUEÑA " << endl; 
 	cout << " DIGITE SU OPCION -----> ";
 	cin>>opcion19;
 	
 	switch(opcion19){
 		
 		case 1: 
 		totalbebida=e;
		tamanio15="GRANDE"; 		
 		break; 
 		
 		case 2:
 		totalbebida=e;
		tamanio15="GRANDE";
 		
 		break; 
 		
 		default: 
 		cout << "OPCION INCORRECTA " << endl; 
 		break;
 		
 		
 		
	 }
 	fflush(stdin);
 	cout << endl << endl; 
 	cout << "HAZ SELECCIONADO UNA BEBIDA SABOR A " << sabor << " DE TAMAÑO " << tamanio15 << endl; 
 	cout << " CON UN VALOR DE " << totalbebida << endl;
	cout << endl << endl;  
		total9=totalbebida; 
	
 	break; 
	
	case 3: 
	cout << "GRACIAS POR COMPRAR CON NOSOTROS " << endl; 
	break; 
	
	default: 
	cout << "OPCION INCORRECTA " << endl; 
	break; 
	
}

break; //aqui termina

case 3: //aqui
	cout << " QUE TAMAÑO? " << endl; 
	cout << " 1. GRANDES (incluyen doble mantequilla)" << endl;
	cout << " 2. PEQUEÑOS " << endl;
	cout << " DIGITE SU OPCION -----> ";
	cin >> opcion2; 
	
	switch(opcion2){
		
		case 1:
		totalpalomitas=a;
		tamanio2="GRANDES"; 
		break; 
		
		case 2: 
		totalpalomitas=b;
		tamanio2="PEQUEÑAS";
		break; 
		
		default: 
		cout << "OPCION INCORRECTA " << endl; 
		break; 
	}
	fflush(stdin);
 	cout << endl << endl; 
 	cout << "HAZ SELECCIONADO UNAS PALOMITAS DE TAMAÑO " << tamanio << endl; 
 	cout << " CON UN VALOR DE " << totalpalomitas << endl;
 		total10=totalpalomitas; 
	cout << endl << endl;  
	
	cout << "DESEA AÑADIR ALGO MAS? " << endl; 
	cout << " 1. BEBIDAS " << endl;
	cout << " 2. NACHOS " << endl; 
	cout << "DIGITA SU OPCION ----->   "; 
	cin >>opcion5;
	
	switch(opcion5){
		
		case 1:
	fflush(stdin);
	cout << " DIGITE EL SABOR DE SU BEBIDA " << endl; 
	getline(cin,sabor);
	
	cout << " DESEA QUE SU BEBIDA SEA: " << endl;
	cout << "1. BEBIDA GRANDE " << endl;
	cout << "2. BEBIDA PEQUEÑA " << endl; 
	cout << " DIGITE SU OPCION -----> ";
	cin >> opcion10; 
	switch(opcion10){
		
		case 1: 
		totalbebida=e;
		tamanio8="GRANDE";
		break; 
		
		case 2: 
		totalbebida=f;
		tamanio8="PEQUEÑO"; 
 		break; 
		
		default:
		 cout << "OPCION INCORRECTA " << endl; 
		break; 
	}
	fflush(stdin);
 	cout << endl << endl; 
 	cout << "HAZ SELECCIONADO UNA BEBIDA SABOR A " << sabor << " DE TAMAÑO " << tamanio8 << endl; 
 	cout << " CON UN VALOR DE " << totalbebida << endl;
	cout << endl << endl;  
		total11=totalbebida; 
	
	break; 
		
	case 2: 
	cout << " QUE TAMAÑO? " << endl; 
	cout << " 1. GRANDES (incluyen doble queso)" << endl;
	cout << " 2. PEQUEÑOS " << endl;
	cout << " DIGITE SU OPCION -----> ";
	cin >> opcion11; 
	
	switch(opcion11){
		
		case 1: 
		totalnacho=c; 
		tamanio9="GRANDE";
		break; 
		
		case 2: 
		totalnacho=d; 
		tamanio9="PEQUEÑOS"; 
		break; 
		
		default:
		cout << "OPCION INCORRECTA " << endl;  
		break; 
	}
	fflush(stdin);
 	cout << endl << endl; 
 	cout << "HAZ SELECCIONADO UNOS NACHOS DE TAMAÑO " << tamanio9 << endl; 
 	cout << " CON UN VALOR DE " << totalnacho << endl;
	cout << endl << endl;  
		total12=totalnacho; 
	break; 
		
		default: 
		cout << "OPCION INCORRECTA " << endl; 
		break; 
	}

cout << " AÑADA ALGO MAS  " << endl;
cout << " 1. NACHOS " << endl; 
cout << " 2. BEBIDAS " << endl; 
cout << " 3. YA NO DESEO AÑADIR ALGO MAS  " << endl; 
cin >>opcion14;

switch(opcion14){
	
	case 1: 
	cout << " QUE TAMAÑO? " << endl; 
	cout << " 1. GRANDES (incluyen doble queso)" << endl;
	cout << " 2. PEQUEÑOS " << endl;
	cout << " DIGITE SU OPCION -----> ";
	cin >> opcion15; 
	
	switch(opcion15){
		
		case 1: 
		totalnacho=c; 
		tamanio10="GRANDE";
		break; 
		
		case 2: 
		totalnacho=d; 
		tamanio10="PEQUEÑOS"; 
		break; 
		
		default:
		cout << "OPCION INCORRECTA " << endl;  
		break; 
	}
	
	fflush(stdin);
 	cout << endl << endl; 
 	cout << "HAZ SELECCIONADO UNOS NACHOS DE TAMAÑO " << tamanio10 << endl; 
 	cout << " CON UN VALOR DE " << totalnacho << endl;
	cout << endl << endl;  
		total13=totalnacho; 
	break; 
	
	case 2: 
	fflush(stdin);
 	cout << " DIGITE EL SABOR DE SU BEBIDA " << endl; 
 	getline(cin,sabor);
 	
 	cout << " DESEA QUE SU BEBIDA SEA: " << endl;
 	cout << "1. BEBIDA GRANDE " << endl;
 	cout << "2. BEBIDA PEQUEÑA " << endl; 
 	cout << " DIGITE SU OPCION -----> ";
 	cin >>opcion16;
 	
 	switch(opcion16){
 		
 		case 1:
		totalbebida=e;
		tamanio11="GRANDE";
		break; 
 		
 		case 2: 
 		totalbebida=f;
		tamanio11="PEQUEÑO"; 
 		break;
		 
		default:
		cout << "OPCION INCORRECTA " << endl;  
		break;  
 		
 		
	 }
	fflush(stdin);
 	cout << endl << endl; 
 	cout << "HAZ SELECCIONADO UNA BEBIDA SABOR A " << sabor << " DE TAMAÑO " << tamanio11 << endl; 
 	cout << " CON UN VALOR DE " << totalbebida << endl;
	cout << endl << endl;  
		total14=totalbebida; 
 	break; 
	
	case 3: 
	cout << "GRACIAS POR COMPRAR CON NOSOTROS " << endl; 
	break; 
	
	default: 
	cout << "OPCION INCORRECTA " << endl; 
	break; 
	
}

break; //termina

default:
cout << "OPCION INCORRECTA " << endl;  
break; //aqui termina
}
totalcomida=total+total1+total2+total3+total4+total5+total6+total7+total8+total9+total10+total11+total12+total13+total14+total15;


}

void entrada2(){
Password obtener(3.67);
int a,b, entrada, general;	
a= obtener.getFuncion2d();
b=obtener.getFuncion3d();

cout << "PRECIO DE FUNCIONES       "     << endl; 
cout << "1. FUNCION 2D           Q." << a << ".00 "<<  endl; 
cout << "2. FUNCION 3D           Q." << b << ".00 "<< endl; 
}

int entrada1, entradac;

void entrada(){
Password obtener(3.67);
int a,b, general;	
a= obtener.getFuncion2d();
b=obtener.getFuncion3d();

cout << "¿EN QUE MODALIDAD QUIERE LA PELICULA? " << endl; 
cout << "1. FUNCION 2D " << endl; 
cout << "2. FUNCION 3D " << endl; 
cout << "DIGITE SU OPCION --- >" << endl; 
cin>>general; 

switch(general){
	
	case 1:
		entrada1=a;
	break; 
	
	case 2: 
		entrada1=b;
	break;
	
	default:
	cout << " OPCION INCORRECTA " << endl;  
	break;
	
}
 
	
	cout << " TU ENTRADA TIENE UN VALOR DE Q." << entrada1 <<".00 " << endl << endl ; 
	cout << " DISFRUTA TU FUNCION " << endl;
	cout << endl; 
}
//AQUIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII
int fac; 
string nombre;
string nit;
	
void factura(){
ofstream agregarfactura;
agregarfactura.open("facturas.txt",ios::out|ios::app);

if(agregarfactura.is_open()){
	
		
	fflush(stdin);
	cout << "DATOS PARA SU FACTURA " << endl; 
	cout << endl << endl; 
	cout << "GRACIAS POR CONSUMIR CON NOSOTROS " << endl<<endl;
	cout << " INGRESA TUS DATOS PARA TU COMPROBANTE DE PAGO " <<endl << endl; 
	fflush(stdin);
	cout << "DIGITA EL NIT DE LA FACTURA " << endl; 
	getline(cin,nit);
	cout << " DIGITA EL NOMBRE EN LA FACTURA " << endl; 
	getline(cin, nombre);	
	cout << endl << endl; 
	fac=totalcomida+totalcombo+entrada1; 

agregarfactura<<nit<<"   "<<nombre<<"      "<<fac<< "    "<<endl; 
cout << endl << endl; 

cout << "---------------------------------- " << endl; 
	cout << "     POP CINEMA S.A    " <<"FACURA NO. " << i+1 << endl; 
	cout << " Tiquisate, Escuintla  " << endl; 
	cout << endl << endl; 
	cout << " NOMBRE:  "<<nombre << endl; 
	cout << " NIT:     "<<nit<<endl;
	cout << "---------------------------------- " << endl; 
	i++;
	cout << endl; 
	cout << "    DESCRIPCION                       SUBTOTALES " << endl; 
	cout << endl; 
	cout << " VALOR DE LA ENTRADA................."<<entrada1 << endl; 
	cout << " VALOR DE REFACCIONES INDIVIDUALES..."<<totalcomida << endl; 
	cout << " VALOR DE COMBOS SOLICITADOS ........"<<totalcombo << endl; 
	cout << endl; 
	cout << ".............TOTALES................."<<fac;
	cout << endl;
  

}else{
	cout << "EL ARCHIVO NO SE PUDO ABRIR " << endl; 
}agregarfactura.close(); 
}

void mostrarfac(){
	ifstream lectura; 
	lectura.open("facturas.txt",ios::in);

if(lectura.is_open()){
	cout << endl << endl; 
	cout << "DE LAS VENTAS SEMANALES " << endl << endl;

	lectura >> nit; 
	while(!lectura.eof()){
	lectura >> nombre; 
	lectura >> fac;
	
	 	
cout <<nit <<  nombre<< fac;

cout << endl << endl; 
lectura >> nit; 
}}else {
	cout << "NO SE PUDO ABRIR EL ARCHIVO" << endl; 
} 
lectura.close();
}

bool encontrado=false;
string auxCodigo;

buscarpeli(){
	
ifstream lectura2; 

lectura2.open("peliculas.txt",ios::out|ios::in);
fflush(stdin);
if(lectura2.is_open()){
cout << endl << endl; 
fflush(stdin);
cout <<"____________________________________________"<< endl;
cout << "BIENVENIDO AL BUSCADOR DEL POP CINEMA " << endl; 
cout << endl;
cout << "___________________________________________" << endl; 
cout << endl << endl; 
fflush(stdin);
cout << "INGRESA EL CODIGO DE LA PELICULA A BUSCAR " << endl; 
cout << "------------------->";
getline(cin,auxCodigo);

lectura2 >> codigop; 
encontrado=false; 

while(!lectura2.eof()){
	
lectura2 >> nombrep >> director1 >> actorp1 >> actora1 >> duracion1>> horario >> anio; 
		
		if(auxCodigo==codigop){
			
cout << " CODIGO DE LA PELICULA :" <<codigop << endl;
cout << " NOMBRE DE LA PELICULA :" << nombrep<< endl;
cout << " DIRECTOR :" << director1<< endl;
cout << " ACTOR PRINCIPAL :" << actorp1<< endl;
cout << " ACTOR PRINCIPAL 2: " << actora1<< endl;
cout << " DURACION :" <<duracion1<< endl;
cout << " HORARIO :" << horario<< endl;
cout << " ANIO DE ESTRENO: " << anio<< endl;
cout << endl; 
encontrado = true; 			
		}
	
	lectura2 >> codigop; 
}
	if(encontrado=false){
		
		cout << "NO SE ENCONTRO LA PELICULA CON EL CODIGO  "  <<auxCodigo<< endl; 
}
}else{
	cout << "NO SE PUDO ABRIR EL ARCHVIVO " << endl; 
}	
	
lectura2.close();	
	
}
 
bool encontradoc=false;
string auxCodigoc;

buscarcolab(){
	
ifstream lectura3; 

lectura3.open("colaboradores.txt",ios::out|ios::in);
fflush(stdin);
if(lectura3.is_open()){
cout << endl << endl; 
fflush(stdin);
cout <<"____________________________________________"<< endl;
cout << "BIENVENIDO AL BUSCADOR DEL POP CINEMA " << endl; 
cout << endl;
cout << "___________________________________________" << endl; 
cout << endl << endl; 
fflush(stdin);
cout << "INGRESA EL CODIGO DEL COLABORADOR A BUSCAR " << endl; 
cout << "------------------->";
getline(cin,auxCodigoc);

lectura3 >> codigoc; 
encontradoc=false; 

while(!lectura3.eof()){
	
lectura3 >> nombrec >> apellidoc >> edadc; 
		
		if(auxCodigoc==codigoc){
			
cout << "CODIGO DEL COLABORADOR " << codigoc << endl; 
cout << "  NOMBRE " << nombrec << endl;
cout << " APELLIDO " << apellidoc << endl;
cout  << " EDAD  " << edadc << endl;
cout << endl; 
encontradoc = true; 			
		}
	
	lectura3 >> codigoc; 
}
	if(encontradoc=false){
		
		cout << "NO SE ENCONTRO LA PELICULA CON EL CODIGO  "  <<auxCodigo<< endl; 
}
}else{
	cout << "NO SE PUDO ABRIR EL ARCHVIVO " << endl; 
}	
	
lectura3.close();	
	
}

bool encontradoe=false;
string auxCodigoe;

buscarestreno(){
	
ifstream lectura4; 

lectura4.open("estrenos.txt",ios::out|ios::in);
fflush(stdin);
if(lectura4.is_open()){
cout << endl << endl; 
fflush(stdin);
cout <<"____________________________________________"<< endl;
cout << "BIENVENIDO AL BUSCADOR DEL POP CINEMA " << endl; 
cout << endl;
cout << "___________________________________________" << endl; 
cout << endl << endl; 
fflush(stdin);
cout << "INGRESA EL CODIGO DEL ESTRENO A BUSCAR " << endl; 
cout << "------------------->";
getline(cin,auxCodigoe);

lectura4 >> codigoe; 
encontradoe=false; 

while(!lectura4.eof()){
	
lectura4 >> nombree >> directore >> actorpe>> actorae>>duracione>>resenia>>horarioe; 
		
		if(auxCodigoe==codigoe){
			
cout << " CODIGO DE LA PELICULA :" << codigoe<<endl; 
cout << " NOMBRE DE PELICULA    :" << nombree<<endl;
cout << " DIRECTOR              :" << directore << endl;
cout << " ACTOR PRINCIPAL 1     :"	<<actorpe << endl;
cout << " ACTOR PRINCIPAL 2     :" << actorae << endl; 
cout << " LA PELICULA TIENE UNA DURACION DE: " << duracione << " MINUTOS " << endl; 
cout << endl << endl;
cout << " SE ENCUENTRA EN EL HORARIO DE: " << endl; 
cout << horarioe; 
encontradoc = true; 			
		}
	
	lectura4 >> codigoc; 
}
	if(encontradoc=false){
		
		cout << "NO SE ENCONTRO LA PELICULA CON EL CODIGO  "  <<auxCodigo<< endl; 
}
}else{
	cout << "NO SE PUDO ABRIR EL ARCHVIVO " << endl; 
}	
	
lectura4.close();	
	
}


int main (){
int opcion=0;
int opcion1; 
int opcion2;
int opcion3;
int opcion4;
int opcion5; 
int horario;
int obtener1;
int obtener2;
int obtener3;
int obtener4; 
int contraadmin;  
int contracol; 
int maniana, tarde, noche; 
do{
cout << "******************************* POP CINEMA ******************************************" << endl; 
cout << " BIENVENIDO A LA BASE DE DATOS DE CONTROL DE POP CINEMA " << endl; 
cout << endl << endl; 

system("pause");
system("cls");

cout << " COMO DESEA INGRESAR " << endl; 
cout << endl << endl; 

cout << "1. ADMINISTRADOR DEL CINE " << endl; 
cout << "2. COLABORADOR " << endl; 
cout << "3. ERES UN CLIENTE " << endl; 

cout << endl << endl; 

cout << "DIGITE SU ROL ----> " ; 
cin >> opcion; 
	
system("pause");
system("cls");

Password obtenerPass(3);
 Password ingreso5(4.4,5.6);
				
	obtener1= obtenerPass.getAdministrador(); 
	obtener2= obtenerPass.getColab1(); 
	obtener3= obtenerPass.getColab2();
	obtener4= obtenerPass.getColab3();
	
switch(opcion){
	
	
	case 1: 
	cout << "HAZ INGRESADO COMO ADMINISTRADOR " << endl; 
	cout << endl; 
	cout << "DIGITA TU CONTRASEÑA " << endl; 
	cin >> contraadmin; 
	cout << endl; 

system("cls");
	
	if(obtener1 == contraadmin){
		
		cout << "  CLAVE EXITOSA " << endl; 
		cout << " BIENVENIDO USUARIO " << endl << endl; 
		cout << " MENU DEL ADMINISTRADOR "<< endl << endl; 
		
		cout << " 1. CAMBIOS EN LA CARTELERA " << endl; 
		cout << " 2. CAMBIOS EN EL PERSONAL " << endl; 
		cout << " 3. SALIR " << endl << endl; 
		cin >> opcion1; 
system("pause");
system("cls");
			
		switch(opcion1){
			
			case 1:
				
		cout << " ***************************** " << endl; 
		cout << " 1. INGRESAR NUEVA PELICULA " << endl; //archivo
		cout << " 2. INGRESAR ESTRENOS DE LA SEMANA " << endl;  //archivo2
		cout << " 3. ELIMINAR UNA PELICULA " << endl; 
		cout << " 4. BUSCAR UNA PELICULA " << endl; 
		cout << " 5. MODIFICAR UNA PELICULA " << endl; 
		cout << " 6. VERIFICAR LAS VENTAS DEL DIA " << endl; 
		cout << " 7. SALIR " << endl; 
		cout << " ************************** " << endl; 
		cout << "DIGITE SU OPCION ---------->: ";
		cin >>opcion3;
		
				
		switch(opcion3){
			
			case 1:
				system("cls");
			agregarpeli();	
			break;
			
			case 2:
				system("cls");
			agregarestre();
			break;
			
			case 3:
				//eliminar pelicula 
			break;
			
			case 4:
				//buscar pelicula 
				int z;
				
				cout<< "QUE DESEA BUSCAR? " << endl; 
				cout << endl << endl; 
				cout << "1. ESTRENOS " << endl; 
				cout << "2. PELICULAS DISPONIBLES " << endl; 
				cin >>z; 
				
				switch(z){
					
					case 1: 
					buscarestreno();
					break;
					
					case 2: 
					buscarpeli();
					break; 
					
					default: 
					cout << "ERROR " << endl; 
					break; 
					
				}
				
				
			break;
			
			case 5:
				//modificar pelicula 
				
			break;
			
			case 6:
				//ver ventas del dia 
				mostrarfac();
			break;
			
			case 7:
			cout << " SALIDA EXITOSA " << endl;  
			break; 
			
			default:
			cout << "OPCION INCORRECTA " << endl; 
			break; 
		}
			break; 
			
			case 2:
		cout << "**************************** " << endl; 
		cout << " 1. INGRESAR NUEVO COLABORADOR (No mas de 3)" << endl; 
		cout << " 2. MOSTRAR COLABORADORES ACTIVOS " << endl; 
		cout << " 3. BUSCAR COLABORADORES ACTIVOS " << endl; 
		cout << " 4. ELIMINAR UN COLABORADOR " << endl; 
		cout << " 5. MOSTRAR CONTRASENIA Y USUARIO DE COLABORADORES " << endl; 
		cout << " 6. SALIR " << endl; 
		cout << endl; 
		cout << "DIGITE UNA OPCION -----> "; 
		cout << "                                        " << endl; 
		cin >> opcion5; 
		
       
		switch(opcion5){
			
		case 1:
			system("cls");
		agregarcolab();		 
		break; 
		
		case 2:
			system("cls");
		 mostrarcolab();
		break; 
		
		case 3:
		//buscar colaborador 
		buscarcolab(); 
		break; 
		
		case 4:
		//eliminar un colaborador 
		break;
		
		case 5:
			system("cls");
		ingreso5.contrasenia();
		break;
		
		case 6: 
		system("cls");
		cout << "SALIDA EXITOSA " << endl; 
		break;
		
		default:
		cout << " OPCION INCORRECTA " << endl;  
		break; 
		}
			break;
					
			case 3: 
			system("cls");
			cout << "SALIDA EXITOSA"  << endl; 
			cout <<  endl; 
			break; 
			
			default:
				cout << "OPCION INCORRECTA " << endl; 
			break; 
		}	
		
	} else{
		system("cls");
		cout << " ERROR " << endl; 
		cout << "                " << endl; 
		cout << "CONTRASENIA INCORECTA " << endl; 
		cout << endl; 
	}
	
	break;
	
	case 2: 
	system("cls");
	cout << " HAZ INGRESADO COMO UN COLABORADOR " << endl; 
	cout << endl; 
	cout << "DIGITA TU CONTRASEÑA " << endl; 
	cin >> contracol; 
	
	if(contracol == obtener2 || contracol == obtener3 || contracol == obtener4 ){
		system("cls");
		cout << "CONTRASENIA CORRECTA " << endl; 
		cout << "BIENVENIDO USUARIO: " << endl; 
		cout << endl << endl; 
		cout << "*************** MENU DE ACCIONES ************* " << endl; 
		cout << endl; 
		cout << " 1. MOSTRAR PELICULAS DISPONIBLES " << endl; 
		cout << " 2. MOSTRAR ESTRENOS DE LA SEMANA " << endl; 
		cout << " 3. MOSTRAR NUMERO DE ASIENTOS DISPONIBLES " << endl; 
		cout << " 4. MOSTRAR MENU DE COMIDA Y PRECIOS " << endl;  
		cout << " 5. GENERAR FACTURAS MULTIPLES " << endl; 
		cout << " 6. SALIR " << endl; 
		cout << "********************************************** " << endl; 
		cout << endl << endl; 
		cout << "DIGITA TU OPCION ----> "; 
		cin >> opcion2;
		Password ingreso=Password(1,2);
		
		switch(opcion2){
			
			case 1:
				system("cls");
			      mostrarpeli(); 
			break;
			
			case 2:
				system("cls");
			mostrarestreno();
			break;
			
			case 3:
				//numero de asientos disponibles
			break;
			
			case 4:
				system("cls");
			ingreso.comida();
			break;
			
			case 5:
				system("cls");
				char opcion[20];
				cout << endl; 
				cout << "BIENVENIDO AL GENERADOR DE FACTURAS MULTIPLES " << endl; 
				cout << endl << endl; 
	do{
		cout << "....................................." << endl; 
		cout << "   GRACIAS POR CONSUMIR CON NOSOTROS " << endl; 
		cout << "....................................." << endl; 
		cout << endl << endl; 
		
		//apartado para buscar pelicula 
		int op,op2; 
		cout << " SELECCIONA EL TIPO DE FUNCION PARA TU PELICULA " << endl; 
		entrada();
		cout << "------------------------------------------------" << endl; 
		
		cout << " DESEAS PEDIR REFACCIONES? " << endl; 
		cout << "1. SI " << endl; 
		cout << "2. NO " << endl; 
		cin >>op; 
		switch(op){
			
			case 1:
			
cout<<"¿QUE DESEA ADQUIRIR?" << endl << endl; 
cout << " 1. COMIDA INDIVIDUAL " << endl; 
cout << " 2. COMBOS " << endl << endl; 
cout << "DIGITE SU OPCION -----> " ;
cin >> op2; 

switch(op2){
	
	case 1: 
	seleccioncomida();
	break; 
	
	case 2: 
	totalc();
	break; 
	
	default:
	cout << endl; 
	cout << "OPCION INCORRECTA " << endl;  
	cout << endl; 
	break; 
	
}

cout << " SUBTOTAL GASTADO EN COMIDA " << endl; 
cout << " Q." <<totalcomida<< ".00" << endl; 
cout << " Q." <<totalcombo<< ".00" << endl; 

break; 		
			case 2: 
			cout << endl; 
			cout << " GRACIAS POR TU PREFERENCIA " << endl; 
			cout << " PROCEDEREMOS A REALIZAR TU FACTURA " << endl; 
			break; 
			
			default: 
			cout << "OPCION INCORRECTA " << endl; 
			break; 
}
cout << endl; 
cout << "----------------------------------- " << endl; 
cout << " SOLICITANDO DATOS PARA FACTURA " << endl; 
cout << " -------------------------------" << endl; 
factura();
	
	cout << endl << endl; 
	cout << "DESEAS INGRESAR OTRO ESTRENO (S/N)? " << endl << endl; 
	cin >> opcion[0]; 	
	cout << endl << endl; 

}while(opcion[0] == 'S' || opcion[0] == 's');
				
				
			//mostrar facturas multiples
			break;
			
			case 6:
				system("cls");
				cout << "SALIDA EXITOSA " << endl; 
			break;
			
			default:
			cout << "OPCION INCORRECTA " << endl;  
			break; 
			
		}
	}else{
		cout << "CONTRASEÑA INCORRECTA " << endl; 
	}
	break; 
	
	case 3:
	cout << "*************************************************" << endl << endl; 	
	cout << "BIENVENIDO A POP CINEMA " << endl << endl; 
	cout << "*************************************************" << endl << endl; 
	
	cout << " SELECCIONA TU INTERES " << endl<< endl; 
	cout << " 1. VISUALIZAR PELICULAS Y HORARIOS " << endl; 
	cout << " 2. MOSTRAR ULTIMOS ESTRENOS " << endl; 
	cout << " 3. MOSTRAR MENU DE COMIDA " << endl; 
	cout << " 4. PRECIO DE FUNCIONES " << endl;
	cout << " 5. GENERAR BOLETO " << endl; 
	cout << " 6. SALIR " << endl; 
	cout << " DIGITA TU OPCION ------->"; 
	cin >>opcion4; 
	
	Password ingreso1=Password(3.3,2.7);
	
	switch(opcion4){
		
		
		case 1:
			mostrarpeli();
		break;
			
		case 2:
			  mostrarestreno();
		break;
		
		case 3: 
		ingreso1.comida();
		break; 
		
		case 4: 
		cout << endl; 
		entrada2();
		break; 
		
		case 5: 
		
		cout << "....................................." << endl; 
		cout << "   GRACIAS POR CONSUMIR CON NOSOTROS " << endl; 
		cout << "....................................." << endl; 
		cout << endl << endl; 
		
		//apartado para buscar pelicula 
		int op,op2; 
		cout << " SELECCIONA EL TIPO DE FUNCION PARA TU PELICULA " << endl; 
		entrada();
		cout << "------------------------------------------------" << endl; 
		
		cout << " DESEAS PEDIR REFACCIONES? " << endl; 
		cout << "1. SI " << endl; 
		cout << "2. NO " << endl; 
		cin >>op; 
		switch(op){
			
			case 1:
			
cout<<"¿QUE DESEA ADQUIRIR?" << endl << endl; 
cout << " 1. COMIDA INDIVIDUAL " << endl; 
cout << " 2. COMBOS " << endl << endl; 
cout << "DIGITE SU OPCION -----> " ;
cin >> op2; 

switch(op2){
	
	case 1: 
	seleccioncomida();
	break; 
	
	case 2: 
	totalc();
	break; 
	
	default:
	cout << endl; 
	cout << "OPCION INCORRECTA " << endl;  
	cout << endl; 
	break; 
	
}

cout << " SUBTOTAL GASTADO EN COMIDA " << endl; 
cout << " Q." <<totalcomida<< ".00" << endl; 
cout << " Q." <<totalcombo<< ".00" << endl; 

break; 		
			case 2: 
			cout << endl; 
			cout << " GRACIAS POR TU PREFERENCIA " << endl; 
			cout << " PROCEDEREMOS A REALIZAR TU FACTURA " << endl; 
			break; 
			
			default: 
			cout << "OPCION INCORRECTA " << endl; 
			break; 
}
cout << endl; 
cout << "----------------------------------- " << endl; 
cout << " SOLICITANDO DATOS PARA FACTURA " << endl; 
cout << " -------------------------------" << endl; 
factura();
break; 
		
		case 6:
			cout << endl; 
		cout << "GRACIAS POR VISITARNOS " << endl;  
		break; 
		
		default:
		cout << "OPCION INCORRECTA " << endl;  
		break; 
		
	}
	
	break;
	
	 
}	
}while(opcion!=4);
	

	
	return 0;
}


