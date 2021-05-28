/*
Creador: Ricardo Andrés Cáceres Villibord
Matricula: A01706972
Repositorio: https://github.com/Caceres-A01706972/TC1030_Proyecto.git
Esta archivo contiene la clase Nadador y contiene sus clases heredas Hombre y Mujer.
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "math.h"
#include "listaderecords.h"
using namespace std;

//Funcion para poder cambiar el tiempo a formato mm:ss. s
int convertir(float tiempo){
    float seconds;
    int _seconds;
    int minutes;
    float hundreds;

    seconds = tiempo;
    minutes = seconds/60;
    hundreds = (seconds - floor(seconds));
    _seconds = seconds;
    _seconds = _seconds % 60;
    
    cout<<minutes<<":"<<_seconds+hundreds<<endl;
    return EXIT_SUCCESS;
}


//Crea la clase Nadador
class Nadador{
    private: //Atributos
        string nombre;
        string sexo;
        string pais;
        int edad;

    public: //Metodos
        //Constructor
        Nadador(string name, string sex, string country, int age);
        //Setters
        void setNombre();
        void setEdad();
        void setSexo();
        void setPais();
        //Getters
        int getEdad(){
            return edad;
        }
        string getNombre(){
            return nombre;
        }

        string getSexo(){
            return sexo;
        }
        string getPais(){
            return pais;
        }

};

//Constructor
Nadador::Nadador(string name, string sex, string country, int age){
            nombre = name;
            sexo = sex;
            pais = country;
            edad = age;
}

//Desarrollo de metodos setters
void Nadador::setNombre(){
    cout<<"Ingresa tu nombre: "<<endl;
    cin>>nombre;
}

void Nadador::setEdad(){
    cout<<"Ingresa tu edad: "<<endl;
    cin>>edad;
}

void Nadador::setSexo(){
    cout<<"Eres hombre o mujer?"<<endl;
    cin>>sexo;
}

void Nadador::setPais(){
    cout<<"De que pais eres?"<<endl;
    cin>>pais;
}

//Crea la clase Hombre que hereda de la clase Nadador
class Hombre : public Nadador{
    public:
        //Constructor con las variables que hereda
        Hombre(string name, string sex, string country, int age):Nadador(name,sex,country,age){};
        //Metodos Nuevos para clase Hombre
        void ver_recordsHombres();
        void showInfo();
        
};


//Desarrollo de metodos 
void Hombre::ver_recordsHombres(){
    string resp;
    cout<<"Quieres ver los records de 25m o 50m?"<<endl;
    cin>>resp;
    if (resp == "25m"){
        cout<<"\n--------------------------------------------------"<<endl;
        cout<<"Viendo los records de Hombres de Piscina Corta"<<endl;
        cout<<"50 libre: "<<convertir(_short_cincuentaLibre[0])<<endl;
        cout<<"100 libre: "<<convertir(_short_cienLibre[0])<<endl;
        cout<<"200 libre: "<<convertir(_short_dosLibre[0])<<endl;
        cout<<"400 libre: "<<convertir(_short_cuatroLibre[0])<<endl;
        cout<<"800 libre: "<<convertir(_short_ocho[0])<<endl;
        cout<<"1500 libre: "<<convertir(_short_milqui[0])<<endl;
        cout<<" "<<endl;
        cout<<"50 dorso: "<<convertir(_short_cincuentaDorso[0])<<endl;
        cout<<"100 dorso: "<<convertir(_short_cienDorso[0])<<endl;
        cout<<"200 dorso: "<<convertir(_short_dosDorso[0])<<endl;
        cout<<" "<<endl;
        cout<<"50 pecho: "<<convertir(_short_cincuentaPecho[0])<<endl;
        cout<<"100 pecho: "<<convertir(_short_cienPecho[0])<<endl;
        cout<<"200 pecho: "<<convertir(_short_dosPecho[0])<<endl; 
        cout<<" "<<endl;
        cout<<"50 fly: "<<convertir(_short_cincuentaFly[0])<<endl;
        cout<<"100 fly: "<<convertir(_short_cienFly[0])<<endl;
        cout<<"200 fly: "<<convertir(_short_dosFly[0])<<endl;
        cout<<" "<<endl;
        cout<<"100 C.I: "<<convertir(_short_cienCombi[0])<<endl;
        cout<<"200 C.I: "<<convertir(_short_dosCombi[0])<<endl;
        cout<<"400 C.I: "<<convertir(_short_cuatroCombi[0])<<endl; 
        cout<<"--------------------------------------------------\n"<<endl;
    } else if (resp == "50m"){
        cout<<"\n--------------------------------------------------"<<endl;
        cout<<"Viendo los records de Hombres de Piscina Larga"<<endl;
        cout<<"50 libre: "<<convertir(_long_cincuentaLibre[0])<<endl;
        cout<<"100 libre: "<<convertir(_long_cienLibre[0])<<endl;
        cout<<"200 libre: "<<convertir(_long_dosLibre[0])<<endl;
        cout<<"400 libre: "<<convertir(_long_cuatroLibre[0])<<endl;
        cout<<"800 libre: "<<convertir(_long_ocho[0])<<endl;
        cout<<"1500 libre: "<<convertir(_long_milqui[0])<<endl;
        cout<<" "<<endl;
        cout<<"50 dorso: "<<convertir(_long_cincuentaDorso[0])<<endl;
        cout<<"100 dorso: "<<convertir(_long_cienDorso[0])<<endl;
        cout<<"200 dorso: "<<convertir(_long_dosDorso[0])<<endl;
        cout<<" "<<endl;
        cout<<"50 pecho: "<<convertir(_long_cincuentaPecho[0])<<endl;
        cout<<"100 pecho: "<<convertir(_long_cienPecho[0])<<endl;
        cout<<"200 pecho: "<<convertir(_long_dosPecho[0])<<endl; 
        cout<<" "<<endl;
        cout<<"50 fly: "<<convertir(_long_cincuentaFly[0])<<endl;
        cout<<"100 fly: "<<convertir(_long_cienFly[0])<<endl;
        cout<<"200 fly: "<<convertir(_long_dosFly[0])<<endl;
        cout<<" "<<endl;
        cout<<"200 C.I: "<<convertir(_long_dosCombi[0])<<endl;
        cout<<"400 C.I: "<<convertir(_long_cuatroCombi[0])<<endl; 
        cout<<"--------------------------------------------------\n"<<endl;
    }
}

void Hombre::showInfo(){
    cout<<"\nMOSTRANDO INFORMACION DEL NADADOR"<<endl;
    cout<<"Nombre: "<<getNombre()<<endl;
    cout<<"Edad: "<<getEdad()<<endl;
    cout<<"Sexo: "<<getSexo()<<endl;
    cout<<"Pais: "<<getPais()<<"\n"<<endl;
}

//Crea la clase Mujer que hereda de la clase Nadador
class Mujer : public Nadador{
    public:
        //Constructor con las variables que hereda
        Mujer(string name, string sex, string country, int age):Nadador(name,sex,country,age){};
        //Metodos Nuevos para clase Mujer
        void ver_recordsMujeres();
        void showInfo();
};

//Desarrollo de Metodos
void Mujer::ver_recordsMujeres(){
    string resp;
    cout<<"Quieres ver los records de 25m o 50m?"<<endl;
    cin>>resp;
    if (resp == "25m"){
        cout<<"\n--------------------------------------------------"<<endl;
        cout<<"Viendo los records de Mujeres de Piscina Corta"<<endl;
        cout<<"50 libre: "<<convertir(_short_cincuentaLibre[1])<<endl;
        cout<<"100 libre: "<<convertir(_short_cienLibre[1])<<endl;
        cout<<"200 libre: "<<convertir(_short_dosLibre[1])<<endl;
        cout<<"400 libre: "<<convertir(_short_cuatroLibre[1])<<endl;
        cout<<"800 libre: "<<convertir(_short_ocho[1])<<endl;
        cout<<"1500 libre: "<<convertir(_short_milqui[1])<<endl;
        cout<<" "<<endl;
        cout<<"50 dorso: "<<convertir(_short_cincuentaDorso[1])<<endl;
        cout<<"100 dorso: "<<convertir(_short_cienDorso[1])<<endl;
        cout<<"200 dorso: "<<convertir(_short_dosDorso[1])<<endl;
        cout<<" "<<endl;
        cout<<"50 pecho: "<<convertir(_short_cincuentaPecho[1])<<endl;
        cout<<"100 pecho: "<<convertir(_short_cienPecho[1])<<endl;
        cout<<"200 pecho: "<<convertir(_short_dosPecho[1])<<endl; 
        cout<<" "<<endl;
        cout<<"50 fly: "<<convertir(_short_cincuentaFly[1])<<endl;
        cout<<"100 fly: "<<convertir(_short_cienFly[1])<<endl;
        cout<<"200 fly: "<<convertir(_short_dosFly[1])<<endl;
        cout<<" "<<endl;
        cout<<"100 C.I: "<<convertir(_short_cienCombi[1])<<endl;
        cout<<"200 C.I: "<<convertir(_short_dosCombi[1])<<endl;
        cout<<"400 C.I: "<<convertir(_short_cuatroCombi[1])<<endl;
        cout<<"--------------------------------------------------\n"<<endl; 
    } else if (resp == "50m"){
        cout<<"\n--------------------------------------------------"<<endl;
        cout<<"Viendo los records de Mujeres de Piscina Larga"<<endl;
        cout<<"50 libre: "<<convertir(_long_cincuentaLibre[1])<<endl;
        cout<<"100 libre: "<<convertir(_long_cienLibre[1])<<endl;
        cout<<"200 libre: "<<convertir(_long_dosLibre[1])<<endl;
        cout<<"400 libre: "<<convertir(_long_cuatroLibre[1])<<endl;
        cout<<"800 libre: "<<convertir(_long_ocho[1])<<endl;
        cout<<"1500 libre: "<<convertir(_long_milqui[1])<<endl;
        cout<<" "<<endl;
        cout<<"50 dorso: "<<convertir(_long_cincuentaDorso[1])<<endl;
        cout<<"100 dorso: "<<convertir(_long_cienDorso[1])<<endl;
        cout<<"200 dorso: "<<convertir(_long_dosDorso[1])<<endl;
        cout<<" "<<endl;
        cout<<"50 pecho: "<<convertir(_long_cincuentaPecho[1])<<endl;
        cout<<"100 pecho: "<<convertir(_long_cienPecho[1])<<endl;
        cout<<"200 pecho: "<<convertir(_long_dosPecho[1])<<endl; 
        cout<<" "<<endl;
        cout<<"50 fly: "<<convertir(_long_cincuentaFly[1])<<endl;
        cout<<"100 fly: "<<convertir(_long_cienFly[1])<<endl;
        cout<<"200 fly: "<<convertir(_long_dosFly[1])<<endl;
        cout<<" "<<endl;
        cout<<"200 C.I: "<<convertir(_long_dosCombi[1])<<endl;
        cout<<"400 C.I: "<<convertir(_long_cuatroCombi[1])<<endl; 
        cout<<"--------------------------------------------------\n"<<endl;
    }
}

void Mujer::showInfo(){
    cout<<"\nMOSTRANDO INFORMACION DEL LA NADADORA"<<endl;
    cout<<"Nombre: "<<getNombre()<<endl;
    cout<<"Edad: "<<getEdad()<<endl;
    cout<<"Sexo: "<<getSexo()<<endl;
    cout<<"Pais: "<<getPais()<<"\n"<<endl;
}

