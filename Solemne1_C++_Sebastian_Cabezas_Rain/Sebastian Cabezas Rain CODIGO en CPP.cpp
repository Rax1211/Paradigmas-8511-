//Sebastian Andres Cabezas Rain
#include <iostream> 
#include <string.h> 
#include <fstream> 
#include <cstdlib> 
#include <cstdio> 
#include <charconv> 
#include <string> 
#include <algorithm> 

using namespace std;
//se crea la clase asignatura
class Asignatura{
  public:
  string asig[5]={"Programacion","Base de datos","Algoritmo y estructura de datos","Desarrollo Web y Mobil","Paradigmas Programacion"};
  string codi[10]={"PR001","PR002","BD001","BD002","AE001","AE002","DM001","DM002","PP001","PP002"};
  void mostrarasig();
  //Asignatura();
  //~Asignatura();
}; 
//se crea la clase persona
class Persona{
public:
string nombre_per,apellP1,apellP2,direcc_per,telf_per,email_per,rut_per;
//string nombre,rut,direccion,telefono,apellido1,apellido2,email;
struct{
  
  string Nombre,apell1,apell2,direc,telf,email,RUT;
  string edad;
  }pers;
//Persona();
//~Persona();
void ingresardato();
void mostrardato();
};
//es la base para el codigo pida los datos de los usuarios tanto profesores como estudiantes
void Persona::ingresardato(){
  
  cout<< "Ingrese su Nombre (solo caracteres): ";cin.ignore(); getline(cin,pers.Nombre);
  
  cout<< "Ingrese su Primer Apellido (solo caracteres): ";cin.ignore(); getline(cin,pers.apell1);
  
  cout<< "Ingrese su Segundo Apellido (solo caracteres): ";cin.ignore(); getline(cin,pers.apell2);
  
  cout<< "Ingrese su Direccion : ";cin.ignore(); getline(cin,pers.direc);
  
  cout<< "Ingrese su RUT: "; getline(cin,pers.RUT);
  
  cout<< "Ingrese su Edad (solo numeros): ";cin.ignore(); getline(cin,pers.edad);
  
  cout<< "Ingrese su Telefono : ";cin.ignore(); getline(cin,pers.telf);
  
  cout<< "Ingrese su Email : ";cin.ignore(); getline(cin,pers.email);

}
//se muestran los datos anteriormente pedidos
void Persona::mostrardato(){
  cout << endl <<  "TUS DATOS" << endl;
  cout << "Nombre : " << pers.Nombre <<endl;
  cout << "Apellidos : " << pers.apell1 << " " << pers.apell2 << endl;
  cout << "E-mail : " << pers.email << endl;
  cout << "Rut : " << pers.RUT << endl;
  cout << "Edad : " << pers.edad << endl;
  cout << "Telefono : " << pers.telf <<endl;
  cout << "Direccion : " << pers.direc <<endl;
};
//se crea la clase estudiante 

class Estudiante: public Persona, public Asignatura{
  public:
  struct{
    string carrera,nrc_est[5];
  }est;
  string clase[5];
  int i,cantmat;
  void pedir_notas();
  //Estudiante();
  //~Estudiante();
  void ingresar_estudiante();
  void mostrar_estudiante();
  string encontrar_asigatura(string NRC);
  
};
//se ingresa los datos de persona y luego le pide la carrera
void Estudiante::ingresar_estudiante(){
  ingresardato();
  cout<<"Carrera que estudia: ";cin.ignore();
  cin>>est.carrera;
  
  /*
  cout<<"Cantidad de Asignatura: "; cin>>cantmat;
  for (i=0;i<cantmat;i++){
    cout<<"Escriba el nrc "<<i<<": ";
    cin>>materia[i];
  }
*/
}
//se pregunta cuantas asignaturas va a tener y luego le pregunta el nrc, dando la asignatura por el nrc
void Estudiante::mostrar_estudiante(){
  cout<<"Cantidad de Asignatura: "; cin.ignore();
  cin>>cantmat;cin.ignore();
  for (i=0;i<cantmat;i++){
    cout<<"Escriba el nrc "<<i<<": ";
    cin>>est.nrc_est[i];
  }
  //NRC 0
  if ( est.nrc_est[0]==codi[0] or est.nrc_est[0]==codi[1] ){
    clase[0]=asig[0];
  }
  if ( est.nrc_est[0]==codi[2] or est.nrc_est[0]==codi[3] ){
    clase[0]=asig[1];
  }
  if ( est.nrc_est[0]==codi[4] or est.nrc_est[0]==codi[5] ){
    clase[0]=asig[2];
  }
  if ( est.nrc_est[0]==codi[6] or est.nrc_est[0]==codi[7] ){
    clase[0]=asig[3];
  }
  if ( est.nrc_est[0]==codi[8] or est.nrc_est[0]==codi[9] ){
    clase[0]=asig[4];
  }
  
// NRC 1
  if ( est.nrc_est[1]==codi[0] or est.nrc_est[1]==codi[1] ){
    clase[1]=asig[0];
  }
  if ( est.nrc_est[1]==codi[2] or est.nrc_est[1]==codi[3] ){
    clase[1]=asig[1];
  }
  if ( est.nrc_est[1]==codi[4] or est.nrc_est[1]==codi[5] ){
    clase[1]=asig[2];
  }
  if ( est.nrc_est[1]==codi[6] or est.nrc_est[1]==codi[7] ){
    clase[1]=asig[3];
  }
  if ( est.nrc_est[1]==codi[8] or est.nrc_est[1]==codi[9] ){
    clase[1]=asig[4];
  }
  //NRC 2
  if ( est.nrc_est[2]==codi[0] or est.nrc_est[2]==codi[1] ){
    clase[2]=asig[0];
  }
  if ( est.nrc_est[2]==codi[2] or est.nrc_est[2]==codi[3] ){
    clase[2]=asig[1];
  }
  if ( est.nrc_est[2]==codi[4] or est.nrc_est[2]==codi[5] ){
    clase[2]=asig[2];
  }
  if ( est.nrc_est[2]==codi[6] or est.nrc_est[2]==codi[7] ){
    clase[2]=asig[3];
  }
  if ( est.nrc_est[2]==codi[8] or est.nrc_est[2]==codi[9] ){
    clase[2]=asig[4];
  }
  //NRC 3
  if ( est.nrc_est[3]==codi[0] or est.nrc_est[3]==codi[1] ){
    clase[3]=asig[0];
  }
  if ( est.nrc_est[3]==codi[2] or est.nrc_est[3]==codi[3] ){
    clase[3]=asig[1];
  }
  if ( est.nrc_est[3]==codi[4] or est.nrc_est[3]==codi[5] ){
    clase[3]=asig[2];
  }
  if ( est.nrc_est[3]==codi[6] or est.nrc_est[3]==codi[7] ){
    clase[3]=asig[3];
  }
  if ( est.nrc_est[3]==codi[8] or est.nrc_est[3]==codi[9] ){
    clase[3]=asig[4];
  }
  //NRC 4
  if ( est.nrc_est[4]==codi[0] or est.nrc_est[4]==codi[1] ){
    clase[4]=asig[0];
  }
  if ( est.nrc_est[4]==codi[2] or est.nrc_est[4]==codi[3] ){
    clase[4]=asig[1];
  }
  if ( est.nrc_est[4]==codi[4] or est.nrc_est[4]==codi[5] ){
    clase[4]=asig[2];
  }
  if ( est.nrc_est[4]==codi[6] or est.nrc_est[4]==codi[7] ){
    clase[4]=asig[3];
  }
  if ( est.nrc_est[4]==codi[8] or est.nrc_est[4]==codi[9] ){
    clase[4]=asig[4];
  }
//muestra las asignaturas 
  cout<<"Tus materias seleccionadas son: "<<endl<<clase[0]<<" "<<est.nrc_est[0]<<endl<<clase[1]<<" "<<est.nrc_est[1]<<endl<<clase[2]<<" "<<est.nrc_est[2]<<endl<<clase[3]<<" "<<est.nrc_est[3]<<endl<<clase[4]<<" "<<est.nrc_est[4];

}

//se crea la clase profesor ligada a la clase persona
class Profesor: public Persona,public Asignatura{
  public:
  struct{
    string Nombre,Apellido,RUT,estado;
    float promedio;
  };
  int k,i,cantmate;
  //char categoria[15];
  string nrc[4];
  int err;
  string lista_profesor[5]= {"16168653-7","14873654-8","13923756-4","18721621-3","17918032-4"};
  char asignaturas[40];
  float notas[10];
  //Profesor();
  //~Profesor();
  int entrada_profesor();
  void entrada_notas_manual(); 
  void entrada_notastxt();
  void leer_notas(string nomb);
  void mostrar_datos_profesor();
  void notas_listas();
  

}; 
// es donde se verifica que es un profesor el que entra a la plataforma, por lo cual tienen que revisar si su rut es un rut autorizado
int Profesor::entrada_profesor(){
  int cantmate;
  string rut;
  cout<<"Bienvenido porfavor digite su rut ";cin>>rut_per;
  if (rut_per==lista_profesor[0] or rut_per==lista_profesor[1] or rut_per==lista_profesor[2] or rut_per==lista_profesor[3] or rut_per==lista_profesor[4]){
    err=1;
    cout<<"Cantidad de Asignaturas: "; 
    cin>>cantmate;cin.ignore();
    for (i=0;i<cantmate;i++){
      cout<<"Escriba el nrc "<<i<<": ";
      cin>>nrc[i];
      
    }
    return err=1;
  }else
    cout<<"Rut incorrecto"<<endl;
    return err=2;
};  
//muestra las asignaturas del profesor y sus nrc
void Profesor::mostrar_datos_profesor(){
  string clases[10];
//realiza una lectura simple para mostrar que nrc pertenece a cada asignatura
//seleccion de la clase 1
  if ( nrc[0]==codi[0] or nrc[0]==codi[1] ){
    clases[0] = asig[0];
    
  }
  if ( nrc[0]==codi[2] or nrc[0]==codi[3] ){
    clases[0] = asig[1];
    
  }
  if ( nrc[0]==codi[4] or nrc[0]==codi[5] ){
    clases[0] = asig[2];
    
  }
  if ( nrc[0]==codi[6] or nrc[0]==codi[7] ){
    clases[0] = asig[3];
    
  }
  if ( nrc[0]==codi[8] or nrc[0]==codi[9] ){
    clases[0] = asig[4];
    
  }
//seleccion de la clase 2
  if ( nrc[1]==codi[0] or nrc[1]==codi[1] ){
    clases[1] = asig[0];
    
  }
  if ( nrc[1]==codi[2] or nrc[1]==codi[3] ){
    clases[1] = asig[1];
    
  }
  if ( nrc[1]==codi[4] or nrc[1]==codi[5] ){
    clases[1] = asig[2];
    
  }
  if ( nrc[1]==codi[6] or nrc[1]==codi[7] ){
    clases[1] = asig[3];
    
  }
  if ( nrc[1]==codi[8] or nrc[1]==codi[9] ){
    clases[1] = asig[4];
    
  }
//seleccion de la clase 3
  if ( nrc[2]==codi[0] or nrc[2]==codi[1] ){
    clases[2] = asig[0];
    
  }
  if ( nrc[2]==codi[2] or nrc[2]==codi[3] ){
    clases[2] = asig[1];
    
  }
  if ( nrc[2]==codi[4] or nrc[2]==codi[5] ){
    clases[2] = asig[2];
    
  }
  if ( nrc[2]==codi[6] or nrc[2]==codi[7] ){
    clases[2] = asig[3];
    
  }
  if ( nrc[2]==codi[8] or nrc[2]==codi[9] ){
    clases[2] = asig[4];
    
  }
//seleccion de la clase 4
  if ( nrc[3]==codi[0] or nrc[3]==codi[1] ){
    clases[3] = asig[0];
    
  }
  if ( nrc[3]==codi[2] or nrc[3]==codi[3] ){
    clases[3] = asig[1];
    
  }
  if ( nrc[3]==codi[4] or nrc[3]==codi[5] ){
    clases[3] = asig[2];
    
  }
  if ( nrc[3]==codi[6] or nrc[3]==codi[7] ){
    clases[3] = asig[3];
    
  }
  if ( nrc[3]==codi[8] or nrc[3]==codi[9] ){
    clases[3] = asig[4];
    
  }
 //imprime los valores
  cout<<"Sus clases seleccionadas son: "<<endl<<clases[0]<<" "<<nrc[0]<<endl<<clases[1]<<" "<<nrc[1]<<endl<<clases[2]<<" "<<nrc[2]<<endl<<clases[3]<<" "<<nrc[3]<<endl;
  //cout<<"Sus secciones seleccionadas son: "<<;
};


//el profesor agrega las notas de forma manual, de 1 en 1
void Profesor::entrada_notas_manual(){
  int i,cantest;
  string arch_name,nombre,txt;
  float n1,n2,n3,n4;
  ofstream arch;
	// Abrimos el archivo, pide el nombre y le agrega el txt
  txt= ".txt";
  cout<<"Escriba el nombre del archivo.txt: ";
  cin>>arch_name;
  arch_name=arch_name+txt;
	arch.open(arch_name.c_str(), fstream::out);
		
	cout<<"Cantidad de Estudiantes a ingresar "; cin>>cantest;

  
	//pide los datos de los alumnos a agregar nombre,apellido,rut,nota:1,2,3,4
  for (i=0;i<cantest;i++){
    cout<<"Escriba el nombre del alumno:  ";
    cin>>nombre_per;
    cout<<"Escriba el apellido del alumno:  ";
    cin>>apellP1;
    cout<<"Escriba el rut del alumno:  ";
    cin>>rut_per;
    cin.ignore();
    cout<<"Escriba la nota 1: ";
    cin>>n1;
    cin.ignore();
    cout<<"Escriba la nota 2: ";
    cin>>n2;
    cin.ignore();
    cout<<"Escriba la nota 3: ";
    cin>>n3;
    cin.ignore();
    cout<<"Escriba la nota 4: ";
    cin>>n4;
    cin.ignore();
    
   //verifica que las notas sean validas
  if (n1>=1 && n1<=7){
    cout<<"Nota 1 Guardada"<<endl;
    }
  else{
    cout<<"Escriba la nota 1 mayor que 1 y menor que 7: ";
    cin>>n1;
  }
  if (n2>=1 && n2<=7){
      cout<<"Nota 2 Guardada"<<endl;
  }
  else{
    cout<<"Escriba la nota 2 mayor que 1 y menor que 7: ";
    cin>>n2;
  }
  if (n3>=1 && n3<=7){
    cout<<"Nota 3 Guardada"<<endl;
  }else{
    cout<<"Escriba la nota 3 mayor que 1 y menor que 7: ";
    cin>>n3;
  }
  if (n4>=1 && n4<=7){
     cout<<"Nota 4 Guardada"<<endl;
  }else{
    cout<<"Escriba la nota 4 mayor que 1 y menor que 7: ";
    cin>>n4;
  } 

    
    arch <<nombre_per <<" "<<apellP1<<" "<<rut_per<<" "<<n1<<" "<<n2<<" "<<n3<<" " <<n4<<endl;
      
    }
		arch.close();
		cout << "Escrito correctamente"<<endl;
    leer_notas(arch_name);
}



string Estudiante::encontrar_asigatura(string NRC){
  
  //NRC 0
  if ( NRC==codi[0] or NRC==codi[1] ){
    NRC=asig[0];
  }
  if ( NRC==codi[2] or NRC==codi[3] ){
    NRC=asig[1];
  }
  if ( NRC==codi[4] or NRC==codi[5] ){
    NRC=asig[2];
  }
  if ( NRC==codi[6] or NRC==codi[7] ){
    NRC=asig[3];
  }
  if ( NRC==codi[8] or NRC==codi[9] ){
    NRC=asig[4];
  }
  return NRC;
}

//se procede a pedir las notas del estudiante
void Estudiante::pedir_notas(){
//pide el nombre y le agrega el txt
  //------------------------------------------
  string dato,txt,nrc;
  string apr=" Aprobado",rep=" Reprobado";
  txt= ".txt";
  cout<<"introduzca el NRC de la clase que desea ver notas: ";
  cin>>dato;
  nrc=dato;
  cout<<nrc<<endl;
  cout<<"se muestra el rut"<<pers.RUT<<endl;
  dato=dato+txt;
  //-----------------------------------------
  string nomb,apell,datos,line,rutt,RUT_B,arr,promedio,Notas[100],rut_titulo,verificador,Asignatura;
  int i,large=0,lon,j,c;

  char l,b;
  //cout<<"a buscar: "<<dato<<endl;
  ifstream arch;
  arch.open(dato);

//pregunta si el archivo esta abierto o si encontro un archivo y si no tira error
  if(arch.is_open()){ 

    //cout<<"TXT abierto"<<endl;
//reinicia los valores 
    nomb="";
    apell=" ";
    rutt="";
    promedio=" ";
    
    //cout<<"tu RUT: "<<endl;
    //cin>>RUT_B;
    //arch>>nomb>>apell>>rutt>>promedio;
    
    while (getline(arch,datos)){
      //cout<<"holis";
      lon=datos.length();

      for(i=0;i<lon;i++){
        //cout<<"holis";
        l=datos[i];
        b=' ';
        if(l!=b){ 
          if(j==0){
            nomb=nomb+datos[i];
          }
          if(j==1){
            apell=apell+datos[i];
          }
          if(j==2){
            rutt=rutt+datos[i];
            arr=rutt; 

          }
          if(j==3){
            promedio=promedio+datos[i];
            verificador=promedio;


          }
        } 
        else
        j++;


      }
      float p = stold(verificador);
      //Sebastian Andres Cabezas Rain
      //cout<<"rut verificador"<<RUT_B<<endl;
      //cout<<"rut leido"<<rutt<<endl;

      //se prueban los datos obtenidos
      //cout<<nomb<<endl;
      //cout<<apell<<endl;
      //cout<<rutt<<endl;
      cout<<promedio<<endl;
      
      
      if(pers.RUT==rutt){
        //cout<<"Tus Notas Son: "<<datos;
        rut_titulo=rutt;
        rut_titulo=rut_titulo+txt;
        ofstream alumno;
        alumno.open(rut_titulo.c_str(),fstream::app);
       // if(alumno.is_open()){ 
          if (p>=4){ 
            datos=verificador+apr;
          }
          if (p<4){ 
            datos=verificador+rep;
          }
          Asignatura=encontrar_asigatura(nrc);
          cout<<Asignatura<<" "<<datos<<endl;
          alumno<<Asignatura<<" "<<datos<<endl;
       // }
      }
//reinicia los valores 
      j=0;
      nomb="";
      apell=" " ;
      rutt="";
      promedio=" ";

    }
  }else{ 
    cout<<"no hay notas"<<endl;
    }

  arch.close();
}
//este codigo lee las notas que se entregan por un archivo txt y los lee, luego saca el promedio y guarda el nombre, apellido, rut y promedio
void Profesor::leer_notas(string Nombre_txt){
  string Nrc,txt,nrc;
  txt= ".txt";
  ifstream archivo(Nombre_txt.c_str());
  string  line,N1,N2,N3,N4;
  int posicion,res,lon,i,j= 0,a=0;
  string arreglo[7],arreglonom[7];
  char b,l;
  string Tran1,Tran2,Tran3,Tran4;
  float arreglo2[7],aux;

  //crear archivo, pide el nombre y le agrega el txt
  
  cout<<"nombre del Nrc: ";
  cin>>Nrc;
  Nrc=Nrc+txt;
  ofstream arch;
  arch.open(Nrc.c_str(),fstream::app);

//reinicia los valores 
  Nombre="";
  Apellido=" ";
  RUT=" ";
  N1=" ";
  N2=" ";
  N3=" ";
  N4=" ";
//este while lee las lineas y las va guardando hasta llegar a espacio si no hay nada que guardar hace un salto de linea
  while (getline(archivo,line)){
    lon=line.length();
    for(i=0;i<lon;i++){
      l=line[i];
      b=' ';
      if(l!=b){
        if(j==0)
          Nombre=Nombre+line[i];

        if(j==1)
           Apellido=Apellido+line[i];

        if(j==2)
           RUT=RUT+line[i];

        if(j==3)
           N1=N1+line[i];
           Tran1=N1;


        if(j==4)
           N2=N2+line[i];
           Tran2=N2;

        if(j==5)
           N3=N3+line[i];
           Tran3=N3;

        if(j==6)
           N4=N4+line[i];
           Tran4=N4;
           arreglo[a]=Nombre+N1+N2+N3+N4;

      }
      else
        j++;
    }
    //Sebastian Andres Cabezas Rain
    //cout<<nomb<<apell<<rutt<<" Notas: "<<n1<< n2<<n3<<n4<<endl;
    //Transforma numero reales
    float b1 = stold(Tran1);
    float b2 = stold(Tran2);
    float b3 = stold(Tran3);
    float b4 = stold(Tran4);

    promedio=(b1+b2+b3+b4)/4;
    arreglo2[a]=promedio;
    arreglonom[a]=Nombre;

    //cout<<"El promedio es: "<<promedio<<endl;
    //guarda las variables en un archivo txt
    arch <<Nombre<<Apellido<<RUT<<" "<<promedio<<endl;
    //reinicia los valores 
    j=0;
    Nombre="";
    Apellido=" ";
    RUT=" ";
    N1=" ";
    N2=" ";
    N3=" ";
    N4=" "; 
  }
 arch.close();
}

//este codigo estaria ordenando las notas pero no pude hacerlo funcionar
void Profesor::notas_listas(){ 
  string Nrc="PP002_prueba.txt",a;
  ifstream archivo(Nrc.c_str());
  int i,j,large;
  string line,Promedio;
  char l,b;
//reinicia los valores 
  Nombre="";
  Apellido="";
  RUT="" ;
  promedio=0;
//este while lee las lineas y las va guardando hasta llegar a espacio si no hay nada que guardar hace un salto de linea
  while(getline(archivo,line)){
    large=line.length();
    for(i=0;i<large;i++){
      l=line[i];
      b=' ';
      if(l!=b){
        if(j==0){
          Nombre=Nombre+line[i];
          //cout<<nomb<<endl;
        }if(j==1){
          Apellido=Apellido+line[i];
          //cout<<apell<<endl;
        }if(j==2){
          RUT=RUT+line[i];
          //cout<<rutt<<endl;
        }if(j==3){
          promedio=promedio+line[i];
          //cout<<promedio<<endl;
        }
      }else{
        j++;
      }
    }
    cout<<Nombre<<" "<<Apellido<<" "<<RUT<<" "<<promedio<<endl;
    j=0;
    Nombre="";
    RUT="";
    Apellido="";
    promedio=0;

  a[i]=promedio;
  int aux,coni,conj;
  for(coni=0;coni<7;coni++){
    for (conj=coni+1;conj<7;conj++){
      if(a[coni]<a[conj]){
        aux=a[coni];
        a[coni]=a[conj];
        a[conj]=aux;
        }
    }
  }
  for(i=0;i<7;i++){
   cout<<a[i]<<","<<endl;
  }


  }
}
/*
  while (getline(archivo,line)){
    large=line.length();
    for(i=0;i<large;i++)
      l=line[i];
      b=' ';
      if(l!=b){ 
        if(j==0){ 
          Nombre=Nombre+line[i];
          //nomb=nomb;
          cout<<nomb<<endl;
          }
        if(j==1){
            Apellido=Apellido;
            cout<<apell<<endl;
          }
        if(j==1){ 
          rutt=rutt+line[i];
          //rutt=rutt;
          cout<<rutt<<endl;
          }
        if(j==2){ 
          promedio=promedio+line[i];
          //promedio=promedio;
          cout<<promedio<<endl;
          
          }
      }else
        j++;

//reinicia los valores 
  
  j=0;
  nomb=' ';
  rutt=" ";
  promedio=0;
}
  
  
*/


int main() {
  Persona per;
  Estudiante est;
  Profesor prof;
  //asignatura as;
  //as.mostrarasig();
  //est.ingresarest();
  //est.mostrarest();
  //prof.entrada_notastxt();
  //prof.entrada_notasmanual();
  //Sebastian Andres Cabezas Rain
  //prof.notas_listas();
  //prof.entrada_notas_manual();
  //est.pedir_notas();


  int opc=1,opcc=0;
  while (opc==1){
    
    int ingr,archv;
    cout<<"Bienvenido a la Universidad Andres Bello "<<endl;
    cout<<"Como desea ingresar?"<<endl;
    cout<<"1)Profesor"<<endl;
    cout<<"2)Estudiante"<<endl;
    cin>>ingr;
    //opcion del profesor
    if (ingr==1){
      int err=prof.entrada_profesor();
      prof.mostrar_datos_profesor();
      if (err==1){
        int seguir=1;
        while(seguir==1){
          cout<<"1)Manual"<<endl<<"2)Cargar archivo"<<endl;
          cin>>archv;
          if (archv==1){
            prof.entrada_notas_manual();
          }
          if (archv==2){
            string dato,txt;
            txt= ".txt";
            cout<<"Escriba el nombre del archivo ";
            cin>>dato;
            dato=dato+txt;
            prof.leer_notas(dato);
          }
          cout<<"Desea continuar? si=1 no=2"<<endl;
          cin>>seguir;
        }
      }
      if (err==2){
          cout<<"Intentelo otra vez"<<endl;
      }
    }
    if (ingr==2){
      //est.ingresardato();
      est.ingresar_estudiante();
      est.mostrar_estudiante();
      cout<<endl<<"1)Ver sus notas "<<endl;
      cout<<"2)Salir "<<endl;
      cin>>opcc;cin.ignore();
      while(opcc==1){
        est.pedir_notas();
        cout<<"Desea solicitar otra nota? si=1 no=2"<<endl;
        cin>>opcc;
      }
    }
    cout<<"desea seguir en el programa? si=1 no=2"    <<endl,cin>>opc;  
  }

  cout<<"Se ha salido del sistema"<<endl<<"Tenga un buen dia"<<endl<<"codigo de Sebastian Andres Cabezas Rain"<<endl;
} 
  