 #include <iostream>
 using namespace std;
 main(){
	/*
	int total = 0;
	int notas[total];
	char res;
	
	do{
		cout<<"Ingrese nota "<<total<<": ";
		cin>>notas[total];
		total++;
		cout<<"Desea ingresar otro valor (s/n): ";
		cin>>res;
	}while(res=='s' || res=='S');
 	
 	cout<<" ------- Mostrar notas ------- "<<endl;
 	for (int i=0;i<total;i++){
 		cout<<"Notas ("<<i<<"): "<<notas[i]<<endl;
	}
	*/
	
	/*
	int total = 0;
	int notas[total];
	char res;
	int *p_notas = notas;
	
	do{
		cout<<"Ingrese nota "<<total<<": ";
		cin>>notas[total];
		total++;
		cout<<"Desea ingresar otro valor (s/n): ";
		cin>>res;
	}while(res=='s' || res=='S');
 	
 	cout<<" ------- Mostrar notas ------- "<<endl;
 	for (int i=0;i<total;i++){
 		cout<<"Notas ("<<i<<"): "<<*p_notas<<endl;
 		p_notas++;
	}
	*/

	/*
	// Punteros con asignacion de memoria dinamica;
	// new = reservar un espacio en memoria
	// delete [] = Liberar la memoria
	int total = 0,*p_notas;
	p_notas = new int[total];
	
	char res;
	
	do{
		cout<<"Ingrese nota "<<total<<": ";
		cin>>p_notas[total];
		total++;
		cout<<"Desea ingresar otro valor (s/n): ";
		cin>>res;
	}while(res=='s' || res=='S');
 	
 	cout<<" ------- Mostrar notas ------- "<<endl;
 	for (int i=0;i<total;i++){
 		cout<<"Notas ("<<i<<"): "<<*p_notas<<endl;
 		p_notas++;
	}
	delete[] p_notas;
	*/
	
	int fil=0,col=0,**pm_notas;
	// Ingrese filas
	cout<<"Ingrese la cantidad de Estudiantes: ";
	cin>>fil;
	//Ingrese columnas
	cout<<"Ingrese la cantidad de Notas por estudiante: ";
	cin>>col;
	
	pm_notas = new int *[fil];
	for (int i=0;i<fil;i++){
		pm_notas[i]=new int[col];
	}
	
	for (int i=0;i<fil;i++){
		cout<<"_________Estudiante_________"<<i<<endl;
		for (int ii=0;ii<col;ii++){
			// cout<<"Estudiante"<<i<<", notas:"<<ii<<" : ";
			cout<<"Notas:"<<ii<<" : ";
			cin>>*(*(pm_notas+i)+ii);
		}
		cout<<"__________________"<<endl;
	}
	cout<<"------- Mostrar notas -------"<<endl;
	for (int i=0;i<fil;i++){
		for (int ii=0;ii<col;ii++){
			cout<<*(*(pm_notas+i)+ii)<<endl;
		}
		cout<<"__________________"<<endl;
	}
	
	for (int i=0;i<fil;i++){
		delete [] pm_notas[i];
	}
	delete [] pm_notas;
	
 	system("pause");
 }

