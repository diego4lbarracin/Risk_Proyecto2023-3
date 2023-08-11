#include <iostream>
#include <string>

using namespace std;

void ayuda();
bool inicializar();
bool mostrar_unidades();
bool mostrar_sitios();
bool mover();
bool atacar();
bool reclutar();
bool pasar_turno();
bool guardar();

int main() {
  int userInput;
  bool inicializer = false;
  int optionVerifier = 0;

  cout << "Bienvenido a RISK el juego para dominar el mundo :)" << endl;
  cout << endl;
  cout << "* Si deseas saber los comandos escribe 1 para recibir ayuda *"
       << endl;
  cout << endl;
  cout << "* Si deseas salir del juego escibe 0 para salir *" << endl;
  cout << endl;

  do {

    cout << "$ ";
    cin >> userInput;

    if (inicializer == false) {
      switch (userInput) {
      case 1:
        ayuda();
        break;
      case 2:
        inicializar();
        inicializer = true;
        break;
      case 0:
        break;
      default:
        cout << endl;
        cout << "opcion no encontrada" << endl;
        cout << endl;
        break;
      }
    }

    if (inicializer == true) {
      optionVerifier = userInput;
      switch (userInput) {
      case 1:
        ayuda();
        break;
      case 3:
        if(mostrar_unidades()){
          cout << endl;
          cout << "comando ejecutado con exito" << endl;
          cout << endl;
        }else{
          cout << endl;
          cout << "comando no ejecutado con exito" << endl;
          cout << endl;
        }
        
        break;
      case 4:
        if(mostrar_sitios()){
          cout << endl;
          cout << "comando ejecutado con exito" << endl;
          cout << endl;
        }else{
          cout << endl;
          cout << "comando no ejecutado con exito" << endl;
          cout << endl;
        }
        
        break;
      case 5:
        if(mover()){
          cout << endl;
          cout << "comando ejecutado con exito" << endl;
          cout << endl;
        }else{
          cout << endl;
          cout << "comando no ejecutado con exito" << endl;
          cout << endl;
        }
        
        break;
      case 6:
        if(atacar()){
          cout << endl;
          cout << "comando ejecutado con exito" << endl;
          cout << endl;
        }else{
          cout << endl;
          cout << "comando no ejecutado con exito" << endl;
          cout << endl;
        }
        
        break;
      case 7:
        if(reclutar()){
          cout << endl;
          cout << "comando ejecutado con exito" << endl;
          cout << endl;
        }else{
          cout << endl;
          cout << "comando no ejecutado con exito" << endl;
          cout << endl;
        }
        
        break;
      case 8:
        if(pasar_turno()){
          cout << endl;
          cout << "comando ejecutado con exito" << endl;
          cout << endl;
        }else{
          cout << endl;
          cout << "comando no ejecutado con exito" << endl;
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
          cout << "opcion no encontrada" << endl;
          cout << endl;
        }

        break;
      }
    }

  } while (userInput != 0);

  cout << "¡Hasta luego!" << endl;

  return 0;
}

void ayuda() {
  string userOption;
  string userDesition;
  cout << endl;
  cout << "accedio al comando de ayuda, los comandos disponibles son los "
          "siguienes: "
       << endl;

  do {

    cout << endl;
    cout << " _-_ inicalizar _-_" << endl;
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
    cout << "si desea saber el funcionamiento de un comando en especifico solo "
            "escribe el comando para poder decirte como funciona, de lo "
            "contrario escribe salir: "
         << endl;
    cout << "AYUDA: ";
    cin >> userOption;

    if (userOption == "inicalizar") {
      cout << endl;
      cout << "inicalizar -----> este comando sirve para poder iniciar el "
              "juego"
           << endl;

    } else if (userOption == "mostrar_unidades") {
      cout << endl;
      cout << "mostrar_unidades -----> este comando sirve para poder "
              "mostrar las unidades de tus oponentes y las tuyas"
           << endl;
    } else if (userOption == "mostrar_sitios") {
      cout << endl;
      cout << "mostrar_sitios -----> este comando sirve para poder mostrar "
              "los sitios en general para poder ver el terreno que te falta "
              "por conquistar o que ya conquistaste"
           << endl;
    } else if (userOption == "mover") {
      cout << endl;
      cout << "mover -----> este comando sirve para poder mover tus tropas "
              "en tus territorios"
           << endl;
    } else if (userOption == "atacar") {
      cout << endl;
      cout << "atacar -----> este comando sirve para poder atacar los "
              "terriorios que todavia no has conquistado"
           << endl;
    } else if (userOption == "reclutar") {
      cout << endl;
      cout << "reclutar -----> este comando sirve para poder agregar mas "
              "tropas a tus territorios y asi poder atacar o defender"
           << endl;
    } else if (userOption == "pasar_turno") {
      cout << endl;
      cout << "pasar_turno -----> este comando sirve para poder pasar el "
              "turno de la ronda para que los demas jugadores puedan jugar"
           << endl;
    } else if (userOption == "guardar") {
      cout << endl;
      cout << "guardar -----> este comando sirve para poder guardar la "
              "partida y tu progreso"
           << endl;
    } else if (userOption == "salir") {
      cout << endl;
      cout << "salir -----> este comando sirve para poder salir del juego (si "
              "no guardas antes, perderas todo tu progreso)"
           << endl;
      cout << "si deseas salir de ayuda escribe si, de lo contrario, escribe "
              "no: "
           << endl;
      cout << endl;
      cout << "---------escribe si o no---------" << endl;
      cout << endl;

      cout << "AYUDA: ";
      cin >> userDesition;

      if (userDesition == "si") {
        userOption = "salir";
      } else if (userDesition == "no") {
        userOption = "salir1";
      } else {
        cout << endl;
        cout << "saliendo de comando ayuda..." << endl;
        cout << endl;
      }

    } else {
      cout << endl;
      cout << "opcion no encontrada" << endl;
      cout << endl;
    }

    cout << endl;
  } while (userOption != "salir");
}

bool inicializar() {
  cout << endl;
  cout << "inicializando el juego" << endl;
  cout << endl;
  return true;
}
bool mostrar_unidades() {
  cout << endl;
  cout << "comando para mostrar unidades" << endl;
  cout << endl;
  return true;
}
bool mostrar_sitios() {
  cout << endl;
  cout << "comando para mostrar sitios" << endl;
  cout << endl;
  return true;
}
bool mover() {
  cout << endl;
  cout << "comando para mover unidades" << endl;
  cout << endl;
  return true;
}
bool atacar() {
  cout << endl;
  cout << "comando para atacar oponentes" << endl;
  cout << endl;
  return true;
}
bool reclutar() {
  cout << endl;
  cout << "comando para reclutar unidades" << endl;
  cout << endl;
  return true;
}
bool pasar_turno() {
  cout << endl;
  cout << "comando para pasar turno" << endl;
  cout << endl;
  return true;
}
bool guardar() {
  cout << endl;
  cout << "comando para guardar la partida, se ejecuto con exito" << endl;
  cout << endl;
  return true;
}
