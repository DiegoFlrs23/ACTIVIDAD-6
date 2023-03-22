#include <iostream>
using namespace std;

main()
{
	int edad = 25,*p_edad;
	p_edad = &edad;
	
	cout<<"Variable edad: "<<edad<<endl;
	cout<<"Puntero edad(&): "<<p_edad<<endl;
	cout<<"Puntero edad(*): "<<*p_edad<<endl;
	
	cout<<"------Cambio de valores------"<<endl;
	*p_edad = 40;
	
	cout<<"variable edad: "<<edad<<endl;
	cout<<"Puntero edad(&): "<<p_edad<<endl;
	cout<<"Puntero edad(*): "<<*p_edad<<endl;
	
	cout<<"------Cambio de valores------"<<endl;
	int edad2=100;
	p_edad = &edad2;
	edad = 400;
	
	cout<<"variable edad: "<<edad<<endl;
	cout<<"Puntero edad(&): "<<p_edad<<endl;
	cout<<"Puntero edad(*): "<<*p_edad<<endl;
	cout<<"variable edad2: "<<edad2<<endl;
	
	system("pause");
}
