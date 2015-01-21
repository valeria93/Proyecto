#include <iostream>
#include <fstream>
#include <conio>

void tablaand()
main()
{
	ofstream archivo("C:/BC5/ARCHIVOS/nuevoarchivo.txt");
	bool p;
   archivo <<"p     Not p  " << endl;
   archivo<<"---    ----- " << endl;
   archivo<< true<<"       " <<!true<< endl;
   archivo<<false<<"       "<<!false<<endl;
   archivo<<endl;

   //ofstream archivo1("C:/BC5/ARCHIVOS/nuevoarchivo1.text",ios::app);
   archivo<<"p q       p And q"<< endl;
   archivo<<"-----    ------"<<endl;
   archivo<< false<<""<<false<<"   	   " <<(false&&false) << endl;
   archivo<< false<<""<<true<<"   	   " <<(false&&true) << endl;
   archivo<< true<<""<<false<<"   	   " <<(true&&false) << endl;
   archivo<< true<<""<<true<<"    	   " <<(true&&true) << endl;
   archivo<< endl;
   //archivo1.close();

   //ofstream archivo2("C:/BC5/ARCHIVOS/nuevoarchivo2.text1",ios::app);
	archivo<<"p q      p Or q"<< endl;
   archivo<<"-----    -------"<<endl;
   archivo<< false<<""<<false<<"  	  " <<(false||false) << endl;
   archivo<< false<<""<<true<<"  	  " <<(false||true) << endl;
   archivo<< true<<""<<false<<"  	  " <<(true||false) << endl;
   archivo<< true<<""<<true<<"  	  " <<(true||true) << endl;
   archivo<< endl;
   //archivo2.close();

   //ofstream archivo3("C:/BC5/ARCHIVOS/nuevoarchivo3.text1",ios::app);
   archivo<<"p q 	    p No-And q"<< endl;
   archivo<<"----- 	 -------"<<endl;
   archivo<< false<<""<<false<<"  	   "; cout<<"1" << endl;
   archivo<< false<<""<<true<<"   	   " ;cout<<"1"<< endl;
   archivo<< true<<""<<false<<"   	   " ;cout<<"1"<< endl;
   archivo<< true<<""<<true<<"   	   "; cout<<"0"<< endl;
   archivo<< endl;
   //archivo3.close();

   //ofstream archivo4("C:/BC5/ARCHIVOS/nuevoarchivo4.text1",ios::app);
   archivo<<"p q 	    p No-Or q"<< endl;
   archivo<<"----- 	 -------"<<endl;
   archivo<< false<<""<<false<<"  	   "; cout<<"1" << endl;
   archivo<< false<<""<<true<<"   	   " ;cout<<"0"<< endl;
   archivo<< true<<""<<false<<"   	   " ;cout<<"0"<< endl;
   archivo<< true<<""<<true<<"   	   "; cout<<"0"<< endl;
   archivo<< endl;
   //archivo4.close();

   //ofstream archivo5("C:/BC5/ARCHIVOS/nuevoarchivo5.text1",ios::app);
   archivo<<"p q 	     p X-Or q"<< endl;
   archivo<<"----- 	 -------"<<endl;
   archivo<< false<<""<<false<<"  	   "; cout<<"0" << endl;
   archivo<< false<<""<<true<<"   	   " ;cout<<"1"<< endl;
   archivo<< true<<""<<false<<"   	   " ;cout<<"1"<< endl;
   archivo<< true<<""<<true<<"   	   "; cout<<"0"<< endl;
   archivo<< endl;
   //archivo5.close();

   //ofstream archivo6("C:/BC5/ARCHIVOS/nuevoarchivo6.text1",ios::app);
   archivo<<"p q 	    p X-Nor q"<< endl;
   archivo<<"----- 	 -------"<<endl;
   archivo<< false<<""<<false<<"  	   "; cout<<"1" << endl;
   archivo<< false<<""<<true<<"   	   " ;cout<<"0"<< endl;
   archivo<< true<<""<<false<<"   	   " ;cout<<"0"<< endl;
   archivo<< true<<""<<true<<"   	   "; cout<<"1"<< endl;
   archivo<< endl;
   archivo.close();
   getch();
}