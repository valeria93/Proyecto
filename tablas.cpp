#include <iostream>
#include <conio>
#include <math>
#include <fstream>

//******************************************************************************
//Función que muestra el menú
//******************************************************************************
int menu(){
	clrscr();
	int op;
   cout<<"************************************************"<<endl;
   cout<<"***ESCUELA SUPERIOR POLITECNICA DE CHIMBORAZO***"<<endl;
   cout<<"********TRABAJO FINAL DE PROGRAMACION I*********"<<endl;
   cout<<"************************************************"<<endl;
   cout<<"********INTEGRANTES: SANTIAGO VACA  745*********"<<endl;
   cout<<"********           : JOEL RODRIGUES 744*********"<<endl;
   cout<<"********           : VALERIA PEREZ  748*********"<<endl;
   cout<<"************************************************"<<endl;
   cout<<"************************************************"<<endl;
   cout<<"            ***MENU DE OPCIONES***              "<<endl;

   cout<<"1. Generar tablas de verdad con dos entradas"<<endl;
   cout<<"2. Ver tablas de verdad con dos entradas"<<endl;
   cout<<"3. Generar y ver tabla con n entradas"<<endl;
   cout<<"4. Salir"<<endl;
	cout<<"   Opcion: ";cin>>op;
   return op;
}

//******************************************************************************
//Función que genera tablas de verdad con 2 entradas
//******************************************************************************
void generarTablas2Entradas(){
	clrscr();
	cout<<"GENERAR TABLAS CON DOS ENTRADAS";
}

//******************************************************************************
//Función que permite ver tablas de verdad con 2 entradas
//******************************************************************************
void verTablas2Entradas(){
	clrscr();
	cout<<"VER TABLAS CON DOS ENTRADAS";
}

//******************************************************************************
//Función que genera la tabla de verdad AND
//******************************************************************************
void generarAnd(int lineas,int nEntradas){
   ofstream fs("nombre.txt");
	//Genera el encabezado
   for(int i=1;i<=nEntradas;i++){
   	fs<<"X"<<i<<" ";
	   if(i==nEntradas)
     	fs<<"AND"<<endl;
	}
	//Genera la tabla de verdad AND
   for(int i=1;i<=lineas;i++){
   	bool and=1;
      for(int j=nEntradas;j>=1;j--){
	     	int divisor=pow(2,j);
     	   int digito;
        	digito=(i%divisor);

	      if(digito<=(divisor/2)){
            if(digito==0)
     	      	digito=1;
        	   else
        			digito=0;
	      }
         else
     	   	digito=1;

	      if(digito==0)
         	and=0;
     	   fs<<digito<<"  ";
	   }
      fs<<and<<endl;
   }
   fs.close();
}


//******************************************************************************
//Función que genera tablas de verdad con n entradas
//******************************************************************************
void generarTablasNEntradas(int nEntradas,int op){
   char cadena[128];
   int lineas = pow(2,nEntradas);


   if(op==1){
	   generarAnd(lineas,nEntradas);
   }
