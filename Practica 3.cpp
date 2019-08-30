#include <iostream>
#include <conio.h>
using namespace std;
struct equipo{
	char nombre[20];
	char jugador[20];
	char origen[20];
};
struct aficionado{
	char nombre[20];
	int edad;
	char ciudad[20];
	struct equipo equi;
};
int main(int argc, char** argv) {
	struct aficionado A1[5];
	struct aficionado *apuntador;
	
	apuntador=&A1[0];
	
	for(int i=0; i<3; i++){
		
		cout<<"Dame el nombre: ";
		cin.getline(apuntador->nombre,20,'\n');
		cout<<"Dame la edad: ";
		cin>>apuntador->edad;
		cout<<"Dame la Ciudad de Origen: ";
		cin>>apuntador->ciudad;
		cout<<"Dame el nombre de su equipo favorito: ";
		fflush(stdin);
		cin.getline(apuntador->equi.nombre,20,'\n');
		cout<<"Dame el nombre de su jugador favorito: ";
		//fflush(stdin);
		cin.getline(apuntador->equi.jugador,20,'\n');
		cout<<"El jugador es de : ";
		fflush(stdin);
		cin.getline(apuntador->equi.origen,20,'\n');
	}
	
	cout<<endl<<"Nombre :"<<apuntador->nombre;
	cout<<endl<<"Edad :"<<apuntador->edad;
	cout<<endl<<"Ciudad :"<<apuntador->ciudad;
	cout<<endl<<"Equipo favorito :"<<apuntador->equi.nombre;
	cout<<endl<<"Jugador favorito :"<<apuntador->equi.jugador;
	cout<<endl<<"Origen del equipo :"<<apuntador->equi.origen;	
	getch();
	return 0;
}
