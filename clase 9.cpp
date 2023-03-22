#include <iostream>
using namespace std;

//Punteros matriz dinamica
main(){
	int fil = 0, col = 0, **pm_notas;
	cout<<"Ingrese la cantidad de estudiantes:";
	cin>>fil;
	cout<<"Ingrese las notas por estudiante:";
	cin>>col;
	
	pm_notas = new int *[fil];
	for(int i=0;i<fil;i++){
		pm_notas[i]=new int[col];
	}
	for(int i=0;i<fil;i++){
		cout<<"_________Estudiante_________"<<i<<endl;
		for(int ii=0;ii<col;ii++){
			cout<<"Nota: "<<ii<<": ";
			cin>>*(*(pm_notas+i)+ii);
		}
		cout<<"_____________________"<<endl;
	}
	cout<<"_________Mostrar Notas_________"<<endl;
	for(int i=0;i<fil;i++){
		for (int ii=0;ii<col;ii++){
			cout<<*(*(pm_notas+i)+ii)<<endl;
		}
		cout<<"_____________________"<<endl;
	}
	//Liberar el espacio reservado en memoria
	for(int i=0;i<fil;i++){
		delete[]pm_notas[i];
	}
	delete[]pm_notas;
	//VIDEO min: 26:28
	
/*Punteros con asignacion de memoria dinamica
//new = reservar un espacio en memoria
//delete[] = liberar la memoria
//c++ no cuenta con un recolector de basura (garbage collector)
	int total = 0,*p_notas;
	p_notas = new int[total];
	char res;
	
	do{
		cout<<"Ingrese nota "<<total<<": ";
		cin>>p_notas[total];
		total++;
		cout<<"Desea ingresar otro valor (s/n):";
		cin>>res;
	}while(res=='s'|| res=='S');
	
	cout<<"----------Mostrar Notas----------"<<endl;
	for(int i=0;i<total;i++){
		cout<<"Nota ("<<i<<"): "<<*p_notas<<endl;
		p_notas++;
	}	
	delete[]p_notas;*/
/*----------------------------------------------------------------	
	main(){
	int total = 0;
	int notas[total];
	char res;
	int *p_notas = notas;
	do{
		cout<<"Ingrese nota "<<total<<": ";
		cin>>notas[total];
		total++;
		cout<<"Desea ingresar otro valor (s/n):";
		cin>>res;
	}while(res=='s'|| res=='S');
	
	cout<<"----------Mostrar Notas----------"<<endl;
	for(int i=0;i<total;i++){
		cout<<"Nota ("<<i<<"): "<<*p_notas<<endl;
		p_notas++;
	}*/	
/*-----------------------------------------------------	
	int edad,*p_edad;
	p_edad = &edad;
	cout<<"Ingrese edad: ";
	cin>>edad;
	cout<<*p_edad<<endl;
	
	if(*p_edad>18)
	{
		cout<<"Mayor de edad"<<endl;
	}else
	{
		cout<<"Menor de edad"<<endl;
	}*/
	
	system("pause");
	return 0;
}
