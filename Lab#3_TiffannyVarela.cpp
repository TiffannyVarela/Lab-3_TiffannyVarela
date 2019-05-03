#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::to_string;
using std::string;
#include <vector>
using std::vector;
int menu();
int e1(int, int);//ejercicio 1
int e2(int*, int);//ejercicio 2
int e3();//ejercicio 3
int val(int);//validar negativos
int* primos(int*, int);//arreglo de primos
int menue3();//menu de ejercicio 3
void insertar();
void buscar();
void eliminar();
void listar1();
void listar2();


int*inicializar(int size){//inicio inicializar
        int* retval = new int[size];
        return retval;
}//fin inicializar

void printArray(int* array ,int size){//inicio imprimir arreglo
        cout<<"Arreglo: ";
        for (int i=0; i<size;i++){//inicio for
                cout<<" "<<array[i]<<" ";
        }//fin for
        cout<<endl;
}//fin impirmir arreglo

void freeArray(int* array){//inicio liberar arreglo
        if(array!=NULL){//inicio if
                delete[] array;
        }//fin if
}//fin liberar arreglo

int main(){//inicio main
	int opc=0;
	int x;
        int y;
	int size= 25;
        int* pArray = inicializar(size);
	int num;
	int opc2=0;
	string cod, nombre, pais, continente,a_inicio,a_fin,paises,guerra;
        int resp=0;
	string bonito;
	string respuesta;
	vector <string> bonitos;
	vector<string> guerras;
	vector <string> codigos;
	vector <string> continentes;
        do {//inicio do while
                switch(opc=menu()){//inicio switch
                        case 1:
				cout<<"Ingrese x: "<<endl;
				cin>>x;
				if (val(x)==4){
					cout<<"Ingrese x positivo: "<<endl;
                               	 	cin>>x;
				}
				cout<<"Ingrese y:"<<endl;
				cin>>y;
				if (val(y)==4){
                                        cout<<"Ingrese y positivo: "<<endl;
                                        cin>>y;
                                }

				cout<<"La respuesta es: "<<e1(x,y)<<endl;

                        break;
			
                        case 2:
				primos(pArray, size);
				cout<<"Ingrese el numero a probar"<<endl;
				cin>>num;
				e2(pArray,num);
                        break;

                        case 3:
			do{
				switch(opc2=menue3()){
					case 5:
						 cout<<"Codigo: ";
        cin>>cod;
        cout<<"Nombre: ";
        cin>>nombre;
        cout<<"Anio de inicio: ";
        cin>>a_inicio;
        cout<<"anio de fin: ";
        cin>>a_fin;
        do{
                  cout<<"Ingrese pais: "<<endl;
                  cin>>pais;
                  paises+=pais+",";
                  cout<<"Ingresar otro pais? [0=si, 1=no]: ";
                  cin>>resp;
        }while(resp!=1);
        cout<<"Continente: ";
        cin>>continente;
	bonito+="Guerra de "+nombre+" llevada a cabo entre "+a_inicio+" y "+a_fin+" donde participaron "+paises+" en el continente de "+continente;
	bonitos.push_back(bonito);
        guerra+=cod+";"+nombre+";"+a_inicio+";"+a_fin+";"+paises+";"+continente;
        guerras.push_back(guerra);
	codigos.push_back(cod);
	continentes.push_back(continente);

				        break;

					case 6:
					cout<<"Codigo a buscar: "<<endl;
					cin>>respuesta;
                                        break;

					case 7:
					cout<<"Codigo a buscar: "<<endl;
                                        cin>>respuesta;
       
                                        break;

					case 8:
                                 

                                        break;

					case 9:
					cout<<"Continente a buscar: "<<endl;
                                        cin>>respuesta;
                                      

                                        break;

				}
			}while(opc2!=10);	
                        break;
			
                        case 4:
                        cout<<"Fin del programa"<<endl;
                        break;
                }
        }while (opc!=4);

        return 0;
}

int menu(){
        while(true){
        cout<<"MENU"<<endl
        <<"1.- Ejercicio 1"<<endl
        <<"2.- Ejercicio 2"<<endl
        <<"3.- Ejercicio 3"<<endl
        <<"4.- Salir"<<endl;
        cout<<"Ingrese una opcion: ";
        int opcion =0;
        cin>>opcion;
        if(opcion>=1 && opcion<= 4){
                return opcion;
          }
          else{

        cout<<"La opcion elegida no es valida, ingrese un valor entre 1 y 5"<<endl;
  }
  }//end del while
        return 0;
}

int val(int x){
	if(x<=0){
		return 4;
	}
	else{
		return 0;
	}
}

int e1(int x, int y){
	if (x<y){
		return e1(y,x);
	}
	else if(y==0){
		return x;
	}
	else{
		return e1(y, int(x%y));
	}
}

int* primos(int* pArray, int size){
pArray[0]=2;
pArray[1]=3;
pArray[2]=5;
pArray[3]=7;
pArray[4]=11;
pArray[5]=13;
pArray[6]=17;
pArray[7]=19;
pArray[8]=23;
pArray[9]=29;
pArray[10]=31;
pArray[11]=37;
pArray[12]=41;
pArray[13]=43;
pArray[14]=47;
pArray[15]=53;
pArray[16]=59;
pArray[17]=61;
pArray[18]=67;
pArray[19]=71;
pArray[20]=73;
pArray[21]=79;
pArray[22]=83;
pArray[23]=89;
pArray[24]=97;
	return pArray;
}

int e2(int* array, int x){
	int c=0;
	int indice=0;
	int div=x;
	for(int i=0;i<=div;i++){
		if(div%array[indice]==0){
			c++;
			div=div/array[indice];
		}
		else{
			if(c!=0){
				cout<<"("<<array[indice]<<"^"<<c<<")*";
			}
			indice++;
			c=0;
		}
	}
	cout<<"("<<array[indice]<<"^"<<c+1<<")="<<x<<endl;
	return 0;
}


int menue3(){
	 while(true){
        cout<<"		MENU"<<endl
        <<"	5.- Insertar"<<endl
        <<"	6.- Buscar"<<endl
        <<"	7.- Eliminar"<<endl
        <<"	8.- Listar Todo"<<endl
	<<"	9.- Listar por Continente"<<endl
	<<"	10.- Salir Ejercicio 3"<<endl;
        cout<<"		Ingrese una opcion: ";
        int opcion =0;
        cin>>opcion;
        if(opcion>=5 && opcion<= 10){
                return opcion;
          }
          else{

        cout<<"La opcion elegida no es valida, ingrese un valor entre 5 y 10"<<endl;
  }
  }//end del while
        return 0;
}
