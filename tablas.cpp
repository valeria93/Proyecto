//Genera el encabezado
//Función que genera tablas de verdad con 2 entradas

void generarTablas2Entradas(){
	clrscr();

   ofstream fe("nombre.txt");
   char cadena[128];

   //Genera el encabezado
   fe<<"2ENTRADAS"<<endl;
   fe.close();
