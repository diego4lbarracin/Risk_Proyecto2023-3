#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

//Proyecto RISK para Estructuras de Datos 2023-3
//Autores
//Giseth Villalobos
//Carlos D'Silvestri
//Diego Albarracin
//Vesion: Entregable 0

void imprimirLogoInicio();
void ayuda();
bool inicializar();
bool mostrar_unidades();
bool mostrar_sitios();
bool mover();
bool atacar();
bool reclutar();
bool pasar_turno();
bool guardar();
void lanzarDados(string turno);
int imprimirDados(int caso);
void condicionesVictoria(vector<int> resultsDadoAtacante, int resultDadoDefensor);

//Variables Globales para almacenar los 3 resultados de lanzar los 
//dados del atacante y el resultado de la suma de los dados del defensor
vector<int> resultsDadoAtacante;
int resultDadosDefensor;

int main() {
    //int userInput: Variable para almacenar la entrada del usuario en el
    //menú de inicio del juego.
    int userInput;
    //bool inicializer: Variable usada para almacenar el retorna de la función 'inicializer()'
    //la cual se usura para determinar si el usuario quiere iniciar el juego o no.
    bool inicializer = false;
    //int optionVerifier: Variable usada para almacenar la opcion seleccionada por el usuario en el menu al que 
    //se ingresa si el usuario decide inicializar el juego.
    int optionVerifier = 0;


    do {
        imprimirLogoInicio();
        cout << "RISK el juego para dominar el mundo :)" << endl;
        cout << endl;
        cout << "* Si deseas saber los comandos escribe 1 para recibir ayuda *" << endl;
        cout << endl;
        cout<< "* Selecciona 2 para inciar a jugar"<<endl;
        cout << "* Si deseas salir del juego escibe 0 para salir *";
        cout << endl;
        cout << "$ ";
        cin >> userInput;

        if (inicializer == false) {
          //Switch-case que recibe la opcion en userInput e inicializa 
          //el caso correspondiente.
            switch (userInput) {
                case 1:
                //Llamado a la funcion 'ayuda()' la cual contiene 
                //la descripcion de los comandos.
                    ayuda();
                    break;
                case 2:
                  //Inicializacion del juego, al cambiar el valor de 'false' a 'true'
                  //el programa entra el menu principal.
                    inicializer = inicializar();
                    cout << inicializer;
                    break;
                case 0:
                    break;
                default:
                  cout << endl;
                  cout << "Ingrese una opcion correcta." << endl;
                  cout << endl;
                  break;
                }
        }

        if (inicializer == true) {
            optionVerifier = userInput;
            //Switch-case con las opciones del juego.
            switch (userInput) {
                case 1:
                    ayuda();
                    break;
                case 3:
                    if(mostrar_unidades()){
                      cout << endl;
                      cout << "Comando ejecutado con exito" << endl;
                      cout << endl;
                    }else{
                      cout << endl;
                      cout << "Comando no ejecutado con exito" << endl;
                      cout << endl;
                    }
                  break;
                case 4:
                    if(mostrar_sitios()){
                        cout << endl;
                        cout << "Comando ejecutado con exito" << endl;
                        cout << endl;
                    }else{
                        cout << endl;
                        cout << "Comando no ejecutado con exito" << endl;
                        cout << endl;
                    }

                  break;
                case 5:
                    if(mover()){
                      cout << endl;
                      cout << "Comando ejecutado con exito" << endl;
                      cout << endl;
                    }else{
                      cout << endl;
                      cout << "Comando no ejecutado con exito" << endl;
                      cout << endl;
                    }
                
                  break;
              case 6:
                  if(atacar()){
                    cout << endl;
                    cout << "Comando ejecutado con exito" << endl;
                    cout << endl;
                  }else{
                    cout << endl;
                    cout << "Comando no ejecutado con exito" << endl;
                    cout << endl;
                  }
                
                break;
              case 7:
                  if(reclutar()){
                    cout << endl;
                    cout << "Comando ejecutado con exito" << endl;
                    cout << endl;
                  }else{
                    cout << endl;
                    cout << "Comando no ejecutado con exito" << endl;
                    cout << endl;
                  }
                
                  break;
              case 8:
                  if(pasar_turno()){
                    cout << endl;
                    cout << "Comando ejecutado con exito" << endl;
                    cout << endl;
                  }else{
                    cout << endl;
                    cout << "Comando no ejecutado con exito" << endl;
                    cout << endl;
                  }
                
                  break;
              case 9:
                  if(guardar()){
                    cout << endl;
                    cout << "comando ejecutado con exito" << endl;
                    cout << endl;
                  }else{
                    cout << endl;
                    cout << "comando no ejecutado con exito" << endl;
                    cout << endl;
                  }
                  
                  break;
              case 0:

                  break;
              default:
                  if (optionVerifier <= 0 || optionVerifier > 9) {
                    cout << endl;
                    cout << "Ingrese una opcion correcta" << endl;
                    cout << endl;
                  }
          
                break;
            }
        }
    //Condicion para que el menu se repita mientras el usuario no haya presionado
    //la opcion salir.
    }while (userInput != 0);
    system("Color 07");
    return 0;
}

void ayuda() {
  //La funcion 'ayuda()' imprime en pantalla una descripcion
  // del funcionamiento de cada uno de los comandos mientras el
  //usuario no presione la opcion salir dentro del menu de 'ayuda()'. 
    string userOption;
    string userDesition;
    cout << endl;
    cout << "Ha accedio al menu de ayuda, los comandos disponibles son los siguienes: "<< endl;
    
    do {

      cout << endl;
      cout << " _-_ inicializar _-_" << endl;
      cout << endl;
      cout << " ** comandos que se activan una vez inicialzado el juego: "
          << endl;
      cout << endl;
      cout << " _-_ mostrar_unidades _-_" << endl;
      cout << endl;
      cout << " _-_ mostrar_sitios _-_" << endl;
      cout << endl;
      cout << " _-_ mover _-_" << endl;
      cout << endl;
      cout << " _-_ atacar _-_" << endl;
      cout << endl;
      cout << " _-_ reclutar _-_" << endl;
      cout << endl;
      cout << " _-_ pasar_turno _-_" << endl;
      cout << endl;
      cout << " _-_ guardar _-_" << endl;
      cout << endl;
      cout << " _-_ salir _-_" << endl;
      cout << endl;
      cout << "Si desea saber el funcionamiento de un comando en especifico solo "
              "escribe el comando para poder decirte como funciona, de lo "
              "contrario escribe salir: "
          << endl;
      cout << "$";
      cin >> userOption;

      if (userOption == "iniicalizar") {
          cout << endl;
          cout << "inicializar -----> Este comando sirve para poder iniciar el juego." << endl;
      }else if (userOption == "mostrar_unidades") {
          cout << endl;
          cout << "mostrar_unidades -----> Este comando sirve para mostrar las unidades de tus oponentes y las tuyas."<< endl;
      } else if (userOption == "mostrar_sitios") {
          cout << endl;
          cout << "mostrar_sitios -----> este comando sirve para poder mostrar los sitios en general para poder ver el terreno que te falta por conquistar o que ya conquistaste" << endl;
      } else if (userOption == "mover") {
          cout << endl;
          cout << "mover -----> Este comando sirve para poder mover tus tropas en tus territorios"<< endl;
      } else if (userOption == "atacar") {
        cout << endl;
        cout << "atacar -----> Este comando sirve para poder atacar los terriorios que todavia no has conquistado"<< endl;
      } else if (userOption == "reclutar") {
        cout << endl;
        cout << "reclutar -----> este comando sirve para poder agregar mas tropas a tus territorios y asi poder atacar o defender" << endl;
      } else if (userOption == "pasar_turno") {
        cout << endl;
        cout << "pasar_turno -----> Este comando sirve para poder pasar el turno de la ronda para que los demas jugadores puedan jugar"
            << endl;
      } else if (userOption == "guardar") {
        cout << endl;
        cout << "guardar -----> Este comando sirve para poder guardar la partida y tu progreso"
            << endl;
      } else if (userOption == "salir") {
        cout << endl;
        cout << "salir -----> este comando sirve para poder salir del juego (si no guardas antes, perderas todo tu progreso)" << endl;
        cout << "si deseas salir de ayuda escribe 'si', de lo contrario, escribe 'no': " << endl;
        cout << endl;
        cout << "---------Escribe 'si' o 'no'---------" << endl;
        cout << endl;
        cout << "$";
        cin >> userDesition;

          if (userDesition == "si") {
              userOption = "salir";
          } else if (userDesition == "no") {
              userOption = "salir1";
          } else {
              cout << endl;
              cout << "Saliendo..." << endl;
              cout << endl;
          }

      }else {
          cout << endl;
          cout << "Opcion no encontrada" << endl;
          cout << endl;
      }
      cout << endl;
    } while (userOption != "salir");
}

bool inicializar() {
  //Funcion Inicializar. Es la función que permite el funcionamiento
  //de los menus. Retorna true si el el usuario presiona la opcion
  //en donde se hace el llamado a la funcion.
    cout << endl;
    cout << "Inicializando el juego" << endl;
    cout << endl;
    return true;
}
bool mostrar_unidades() {
  //Funcion para mostrar a las unidades.
    cout << endl;
    cout << "Comando para mostrar unidades" << endl;
    cout << endl;
    return true;
}
bool mostrar_sitios() {
  //Funcion para mostrar sitios.
    cout << endl;
    cout << "Comando para mostrar sitios" << endl;
    cout << endl;
    return true;
}
bool mover() {
  //La funcion mover permite al jugador en turno mover 
  //a sus soldados.
    cout << endl;
    cout << "Comando para mover unidades" << endl;
    cout << endl;
    return true;
}
bool atacar() {
  //La funcion atacar permite al jugador en truno 
  //atacar a sus oponentes. 
    cout << endl;
    cout << "Comando para atacar oponentes" << endl;
    cout << endl;
    return true;
}
bool reclutar() {
  //La funcion reclutar permite reclutar a soldados para la tropa.
    cout << endl;
    cout << "Comando para reclutar unidades" << endl;
    cout << endl;
    return true;
}
bool pasar_turno(){
  //La funcion pasar turno permite pasar el turno al siguiente jugador.
    cout << endl;
    cout << "Comando para pasar turno" << endl;
    cout << endl;
    return true;
}
bool guardar() {
    //La funcion guardar se encarga de permitir guardar una partida.
    cout << endl;
    cout << "Comando para guardar la partida, se ejecuto con exito" << endl;
    cout << endl;
    return true;
}

void imprimirLogoInicio(){
    //system("Color 04") es para cambiar de color el texto de blanco a rojo.
    system("Color 03");
    //Indentacion para la impresión del logo del juego "RISK".
    cout<<setfill(' ')<<left<<setw(4)<<" "<<setw(20)<<" "<<setw(20)<<"         "<<setw(20)<<"         "<<setw(20)<<"       "<<endl;
                
    cout<<setfill('-')<<setw(80)<<'-'<<endl;
    cout<<setfill(' ')<<setw(32)<<" "<<"BIENVENIDO A: "<<endl;
    cout<<setfill('-')<<setw(80)<<'-'<<endl;
    cout<<setfill(' ')<<setw(18)<<" "<<setw(14)<<"********"<<setw(6)<<"**"<<setw(14)<<"********"<<setw(7)<<"**"<<"*"<<endl;
    cout<<setfill(' ')<<setw(18)<<" "<<setw(7)<<"**"<<setw(7)<<"*"<<setw(6)<<"**"<<setw(14)<<"**"<<setw(6)<<"**"<<"*"<<endl;
    cout<<setfill(' ')<<setw(18)<<" "<<setw(7)<<"**"<<setw(7)<<"*"<<setw(6)<<"**"<<setw(14)<<"**"<<setw(5)<<"**"<<"*"<<endl;
    cout<<setfill(' ')<<setw(18)<<" "<<setw(6)<<"**"<<setw(8)<<"*"<<setw(6)<<"**"<<setw(14)<<"**"<<setw(4)<<"**"<<"*"<<endl;
    cout<<setfill(' ')<<setw(18)<<" "<<setw(5)<<"**"<<setw(9)<<"*"<<setw(6)<<"**"<<setw(14)<<"**"<<setw(3)<<"**"<<"*"<<endl;
    cout<<setfill(' ')<<setw(18)<<" "<<setw(4)<<"**"<<setw(10)<<"*"<<setw(6)<<"**"<<setw(14)<<"********"<<setw(14)<<"***"<<endl;
    cout<<setfill(' ')<<setw(18)<<" "<<setw(3)<<"**"<<setw(11)<<"*"<<setw(6)<<"**"<<setw(6)<<" "<<setw(8)<<"**"<<setw(3)<<"**"<<"*"<<endl;
    cout<<setfill(' ')<<setw(18)<<" "<<setw(14)<<"***"<<setw(6)<<"**"<<setw(6)<<" "<<setw(8)<<"**"<<setw(4)<<"**"<<"*"<<endl;
    cout<<setfill(' ')<<setw(18)<<" "<<setw(3)<<"**"<<setw(11)<<"*"<<setw(6)<<"**"<<setw(6)<<" "<<setw(8)<<"**"<<setw(5)<<"**"<<"*"<<endl;
    cout<<setfill(' ')<<setw(18)<<" "<<setw(4)<<"**"<<setw(10)<<"*"<<setw(6)<<"**"<<setw(6)<<" "<<setw(8)<<"**"<<setw(6)<<"**"<<"*"<<endl;
    cout<<setfill(' ')<<setw(18)<<" "<<setw(6)<<"**"<<setw(8)<<"**"<<setw(6)<<"**"<<setw(14)<<"********"<<setw(7)<<"**"<<"*"<<endl;

    cout<<setfill('-')<<setw(80)<<'-'<<endl;
    cout<<setfill('-')<<setw(80)<<'-'<<endl;
}


void condicionesVictoria(vector<int> resultsDadoAtacante, int resultDadoDefensor){
// Funcion para determinar las condiciones de victoria.
// Se recibe como parametro un vector<int> resultsDadoAtacante con los tres resultados del atacante y
// una variable int resultDadoDefensor.
// Con la variables anteriores se podrá determinar el ganador y el perdedor.
    cout<<"Los resultados de 3 dados lanzados por el atacante: " <<endl;
    int dado1,dado2;
    for(int i: resultsDadoAtacante){
        cout<<"Dado: "<< i<< endl; //Imprmiendo los resultados de los dados lanzados por el atacante.
    }
    cout << "Elija 2 dados para la comparacion: " << endl; //Solicitando que elija solo 2 de los 3 resultados.
    cout << "Dado 1: ";
    cin>> dado1;
    cout << "Dado 2: ";
    cin>> dado2;

    //WHILE loop para evitar que el programa continue si el usuario no elije un valor correcto.
    //Se hace uso de la funcion .find() para determinar si el valor ingresado existe o no dentro de los vectores.
    while( find(resultsDadoAtacante.begin(),resultsDadoAtacante.end(),dado1) == resultsDadoAtacante.end() 
                    || find(resultsDadoAtacante.begin(),resultsDadoAtacante.end(),dado2) == resultsDadoAtacante.end()) {
        cout<<"El valor de los dados ingresados no existe"<<endl;
        cout<<"Ingrese nuevamente los valores: "<<endl;
        cout << "Dado 1: ";
        cin>> dado1;
        cout << "Dado 2: ";
        cin>> dado2;
    }

    //Condicionales para determinar el ganador y que hacer. Al implementador de estas funciones 
    //se le recomienda editarlas si es necesario de acuerdo a su logica o lo que tenga planeado.
    if((dado1+dado2) > resultDadoDefensor){
      cout<<"ATACANTE: "<< (dado1+dado2) << endl;
      cout<<"DEFENSOR: "<< (resultDadoDefensor) << endl; 
      cout<<"El defensor ha perdido una unidad de ejercito en su territorio el cual esta siendo atacado" << endl;      
    }else if((dado1+dado2) < resultDadoDefensor){
      cout<<"ATACANTE: "<< (dado1+dado2) << endl;
      cout<<"DEFENSOR: "<< (resultDadoDefensor) << endl;
      cout<<"El atacante ha perdido una unidad de ejercito en su territorio desde donde esta atacando" << endl;
    }else{
      cout<<"ATACANTE: "<< (dado1+dado2) << endl;
      cout<<"DEFENSOR: "<< (resultDadoDefensor) << endl;
      cout<<"Hay un empate!"<<endl;
      cout<<"El defensor ha ganado y el atacante pierde una unidad de ejercito desde el territorio donde ataca"<<endl;
    }

}

int imprimirDados(int caso){
  //Funcion para imprimir los dados cada vez que son lanzados.
  //recibe como parametro un entero con el caso del dado y retorna
  //el valor correspondiente al dado.
    int suma=0;
    switch (caso)
    {
        case 1:
            cout<<setfill(' ')<<setw(6)<<" "<<" ______________"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|              |"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|              |"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|      (*)     |"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|              |"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|______________|"<<endl;
            suma= 1;
          break;
        case 2:
            cout<<setfill(' ')<<setw(6)<<" "<<" ______________"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|              |"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|  (*)         |"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|              |"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|          (*) |"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|______________|"<<endl;
            suma= 2;
          break;
        case 3:
            cout<<setfill(' ')<<setw(6)<<" "<<" ______________"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|              |"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|  (*)         |"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|      (*)     |"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|          (*) |"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|______________|"<<endl;
            suma=3;
          break;
        case 4:
            cout<<setfill(' ')<<setw(6)<<" "<<" ______________"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|              |"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|  (*)     (*) |"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|              |"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|  (*)     (*) |"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|______________|"<<endl;
            suma=4;
          break;
        case 5:
            cout<<setfill(' ')<<setw(6)<<" "<<" ______________"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|              |"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|  (*)     (*) |"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|      (*)     |"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|  (*)     (*) |"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|______________|"<<endl;
            suma=5;
          break;
        case 6:
            cout<<setfill(' ')<<setw(6)<<" "<<" ______________"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|              |"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|  (*)    (*)  |"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|  (*)    (*)  |"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|  (*)    (*)  |"<<endl;
            cout<<setfill(' ')<<setw(6)<<" "<<"|______________|"<<endl;
            suma=6;
          break;
    }
    return suma;
}



void lanzarDados(string turno){
  //Funcion lanzar dados. Recibe un string para identificar quien va a lanzar
  // los dados, si el ATANCANTE o DEFENSOR. Si es atacante, lanza los dados 3 veces y los 
  // almacena cada resultado de manera individual en un vector creado con este fin. Si es defensor, 
  // lanza los dados 2 veces y almacena el resultado dentro de la variable creada con este fin.
    int dado= 0;
    if(turno=="atacante"){
        int i=3;
        while(i>0){
            dado = rand()% 6;
            resultsDadoAtacante.push_back(imprimirDados(dado));
            i--;
        }
    }else if(turno=="defensor"){
        int i=2;
        while(i>0){
            dado = rand()% 6;
            resultDadosDefensor+= imprimirDados(dado);
            i--;
        }
    }
}