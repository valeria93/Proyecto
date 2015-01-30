
//Función que genera la tabla de verdad AND

void generarAnd(int lineas,int nEntradas){
   ofstream fs("nombre2.txt");
   ifstream fe("nombre.txt");
   char cadena[128];

   //Copia el contenido de nombre.txt a nombre2.txt
   while(!fe.eof()) {
      fe.getline(cadena, 128);
      fs<<cadena<<endl;
   }
