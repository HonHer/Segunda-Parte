#include <iostream>
#include <stdio.h>  
#include <string.h> 

    using namespace std;

	void traductor (string& palabras, string busca, string rem){
	int pos = palabras.find(busca);
	while  (pos != -1){
		palabras.replace(pos, busca.size(), rem);
		pos = palabras.find(busca, pos + rem.size());
	}
}
	int main() {
		
		string frase;
		cout<<"                                     ***************************************"<<endl;
		cout<<"                                                       TRADUCTOR"<<endl;
		cout<<"                                     ***************************************"<<endl;
		cout<<"                                             INGRESE FRASE A TRADUCIR:  \n\n";
		getline(cin,frase);



		traductor(frase, "char","cadena");
		traductor(frase, "static","estatico");
		traductor(frase, "sizeof","tamaño_de");
		traductor(frase, "while","mientras");
		traductor(frase, "void","vacio");
		traductor(frase, "const","constante");
		traductor(frase, "asm","asm");
		traductor(frase, "cin ","leer ");
		traductor(frase, "()","()");
		traductor(frase, "if ","si ");
		traductor(frase, "void ","vacio ");
		traductor(frase, "and ","y ");
		traductor(frase, "int ","entero ");
		traductor(frase, "main ","principal ");
		traductor(frase, "string","cadena");
		traductor(frase, "cout","escribir");
		traductor(frase, "float","flotadora");
		traductor(frase, "for","por");
		traductor(frase, "friend","amigo");
		traductor(frase, "goto","ir a");
		traductor(frase, "if","si");
		traductor(frase, "inline","en_linea");
		traductor(frase, "int","en_t");
		traductor(frase, "long","largo");
		traductor(frase, "mutable","mutable");
		traductor(frase, "namespace","espacio_de_nombres");
		traductor(frase, "new","nuevo");
		traductor(frase, "operator","operador");
		traductor(frase, "auto","auto");
		traductor(frase, "bool","booleana");
		traductor(frase, "break","romper");
		traductor(frase, "case","caso");
		traductor(frase, "catch","capturar");
		traductor(frase, "class","clase");
		traductor(frase, "const_cast","caso_constante ");
		traductor(frase, "private","privado");
		traductor(frase, "protected","protegido");
		traductor(frase, "public","publico");
		traductor(frase, "register","registro");
		traductor(frase, "Reinterpret_cast","Reinterpretar_Caso");
		traductor(frase, "return","regreso");
		traductor(frase, "short","pequeño");
		traductor(frase, "signed","firmado");
		traductor(frase, "static_cast","elenco_estatico");
		traductor(frase, "struct","estructura");
		traductor(frase, "switch","cambiar");
		traductor(frase, "template","planilla");
		traductor(frase, "this","esto");
		traductor(frase, "throw","lanzar");
		traductor(frase, "true","verdadero");
		traductor(frase, "try","tratar");
		traductor(frase, "typedef","tipo_def");
		traductor(frase, "typename","tipo_nombre");
		traductor(frase, "union","union");
		traductor(frase, "unsigned","no_firmado");
		traductor(frase, "using","utilizando");
		traductor(frase, "virtual","virtual");
		traductor(frase, "volatile","volatil");	
		cout << frase<<" "<< endl;
	}

