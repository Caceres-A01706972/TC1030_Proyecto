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
using namespace std;

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
    cout<<"\n Viendo los records de Hombres "<<endl;
    cout<<".Pendiente..."<<endl;
    cout<<". \n"<<endl;
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
    cout<<"\n Viendo los records de Mujeres \n"<<endl;
}

void Mujer::showInfo(){
    cout<<"\nMOSTRANDO INFORMACION DEL LA NADADORA"<<endl;
    cout<<"Nombre: "<<getNombre()<<endl;
    cout<<"Edad: "<<getEdad()<<endl;
    cout<<"Sexo: "<<getSexo()<<endl;
    cout<<"Pais: "<<getPais()<<"\n"<<endl;
}
