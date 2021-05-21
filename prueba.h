/*
Creador: Ricardo Andrés Cáceres Villibord
Matricula: A01706972
Repositorio: https://github.com/Caceres-A01706972/TC1030_Proyecto.git
Esta archivo contiene la clase Prueba y contiene sus clase hereda Puntos.
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "basetimes.h" //Agrega archivo con tiempos base para cada prueba.
#include "math.h"
using namespace std;

//Crea la clase Prueba
class Prueba{
    private: //Atributos
        string genero;
        string estilo;
        string poolType;
        float baseTime;
        float tiempo;
        int distancia;

    public://Metodos
        //Constructor
        Prueba(string gender, string stroke, string pool, float time, float tiempo, int distance);
        //Setters
        void setGenero();
        void setEstilo();
        void set_poolType();
        void set_baseTime();
        void setTiempo();
        void setDistancia();
        //Getters
        string getGenero(){
            return genero;
        }
        string getEstilo(){
            return estilo;
        }
        string get_poolType(){
            return poolType;
        }
        float get_baseTime(){
            return baseTime;
        }
        float getTiempo(){
            return tiempo;
        }
        int getDistancia(){
            return distancia;
        }
};

//Constructor
Prueba::Prueba(string gender, string stroke, string pool, float time, float tiempo, int distance){
    genero = gender;
    estilo = stroke;
    poolType = pool;
    baseTime = time;
    tiempo = tiempo;
    distancia = distance;
}

//Desarrollo de setters
void Prueba::setGenero(){
    string resp;
    cout<<"La prueba es de masculino o femenino?"<<endl;
    cin>>resp;
    genero = resp;
}

void Prueba::setEstilo(){
    string resp;
    cout<<"Cual es el estilo? (libre, dorso, fly, pecho, combi)"<<endl;
    cin>>resp;
    estilo = resp;
}

void Prueba::set_poolType(){
    string resp;
    cout<<"La piscina es de 25m o 50m ? "<<endl;
    cin>>resp;
    poolType = resp;
}

void Prueba::setDistancia(){
    int resp;
    cout<<"SELECCIONA LA DISTANCIA DE TU PRUEBA"<<endl;
    cout<<"50, 100, 200, 400, 800, 1500"<<endl;
    cin>>resp;
    distancia = resp;
}

void Prueba::setTiempo(){
    float resp;
    cout<<"Ingesa el tiempo que haces en segundos"<<endl;
    cin>>resp;
    tiempo = resp;
}

void Prueba::set_baseTime(){
    //Los tiempos base los agarra del archivo llamado basetimes.h
    //Para Fly
    if (genero == "masculino" && estilo == "fly" && distancia == 50){
        if (poolType == "25m"){
            baseTime = short_cincuentaFly[0];
        } else if (poolType == "50m"){
            baseTime = long_cincuentaFly[0];
        }
    } else if (genero == "femenino" && estilo == "fly" && distancia == 50){
        if (poolType == "25m"){
            baseTime = short_cincuentaFly[1];
        } else if (poolType == "50m"){
            baseTime = long_cincuentaFly[1];
        }
    }

    if (genero == "masculino" && estilo == "fly" && distancia == 100){
        if (poolType == "25m"){
            baseTime = short_cienFly[0];
        } else if (poolType == "50m"){
            baseTime = long_cienFly[0];
        }
    } else if (genero == "femenino" && estilo == "fly" && distancia == 100){
        if (poolType == "25m"){
            baseTime = short_cienFly[1];
        } else if (poolType == "50m"){
            baseTime = long_cienFly[1];
        }
    }

    if (genero == "masculino" && estilo == "fly" && distancia == 200){
        if (poolType == "25m"){
            baseTime = short_dosFly[0];
        } else if (poolType == "50m"){
            baseTime = long_dosFly[0];
        }
    } else if (genero == "femenino" && estilo == "fly" && distancia == 200){
        if (poolType == "25m"){
            baseTime = short_dosFly[1];
        } else if (poolType == "50m"){
            baseTime = long_dosFly[1];
        }
    }

    //Para Libre
    if (genero == "masculino" && estilo == "libre" && distancia == 50){
        if (poolType == "25m"){
            baseTime = short_cincuentaLibre[0];
        } else if (poolType == "50m"){
            baseTime = long_cincuentaLibre[0];
        }
    } else if (genero == "femenino" && estilo == "libre" && distancia == 50){
        if (poolType == "25m"){
            baseTime = short_cincuentaLibre[1];
        } else if (poolType == "50m"){
            baseTime = long_cincuentaLibre[1];
        }
    }

    if (genero == "masculino" && estilo == "libre" && distancia == 100){
        if (poolType == "25m"){
            baseTime = short_cienLibre[0];
        } else if (poolType == "50m"){
            baseTime = long_cienLibre[0];
        }
    } else if (genero == "femenino" && estilo == "libre" && distancia == 100){
        if (poolType == "25m"){
            baseTime = short_cienLibre[1];
        } else if (poolType == "50m"){
            baseTime = long_cienLibre[1];
        }
    }

    if (genero == "masculino" && estilo == "libre" && distancia == 200){
        if (poolType == "25m"){
            baseTime = short_dosLibre[0];
        } else if (poolType == "50m"){
            baseTime = long_dosLibre[0];
        }
    } else if (genero == "femenino" && estilo == "libre" && distancia == 200){
        if (poolType == "25m"){
            baseTime = short_dosLibre[1];
        } else if (poolType == "50m"){
            baseTime = long_dosLibre[1];
        }
    }

    if (genero == "masculino" && estilo == "libre" && distancia == 400){
        if (poolType == "25m"){
            baseTime = short_cuatroLibre[0];
        } else if (poolType == "50m"){
            baseTime = long_cuatroLibre[0];
        }
    } else if (genero == "femenino" && estilo == "libre" && distancia == 400){
        if (poolType == "25m"){
            baseTime = short_cuatroLibre[1];
        } else if (poolType == "50m"){
            baseTime = long_cuatroLibre[1];
        }
    }

    if (genero == "masculino" && estilo == "libre" && distancia == 800){
        if (poolType == "25m"){
            baseTime = short_ocho[0];
        } else if (poolType == "50m"){
            baseTime = long_ocho[0];
        }
    } else if (genero == "femenino" && estilo == "libre" && distancia == 800){
        if (poolType == "25m"){
            baseTime = short_ocho[1];
        } else if (poolType == "50m"){
            baseTime = long_ocho[1];
        }
    }

    if (genero == "masculino" && estilo == "libre" && distancia == 1500){
        if (poolType == "25m"){
            baseTime = short_milqui[0];
        } else if (poolType == "50m"){
            baseTime = long_milqui[0];
        }
    } else if (genero == "femenino" && estilo == "libre" && distancia == 1500){
        if (poolType == "25m"){
            baseTime = short_milqui[1];
        } else if (poolType == "50m"){
            baseTime = long_milqui[1];
        }
    }

    //Para Dorso
    if (genero == "masculino" && estilo == "dorso" && distancia == 50){
        if (poolType == "25m"){
            baseTime = short_cincuentaDorso[0];
        } else if (poolType == "50m"){
            baseTime = long_cincuentaDorso[0];
        }
    } else if (genero == "femenino" && estilo == "dorso" && distancia == 50){
    if (poolType == "25m"){
            baseTime = short_cincuentaDorso[1];
        } else if (poolType == "50m"){
            baseTime = long_cincuentaDorso[1];
        }
    }

    if (genero == "masculino" && estilo == "dorso" && distancia == 100){
        if (poolType == "25m"){
            baseTime = short_cienDorso[0];
        } else if (poolType == "50m"){
            baseTime = long_cienDorso[0];
        }
    } else if (genero == "femenino" && estilo == "dorso" && distancia == 100){
        if (poolType == "25m"){
            baseTime = short_cienDorso[1];
        } else if (poolType == "50m"){
            baseTime = long_cienDorso[1];
        }
    }

    if (genero == "masculino" && estilo == "dorso" && distancia == 200){
        if (poolType == "25m"){
            baseTime = short_dosDorso[0];
        } else if (poolType == "50m"){
            baseTime = long_dosDorso[0];
        }
    } else if (genero == "femenino" && estilo == "dorso" && distancia == 200){
        if (poolType == "25m"){
            baseTime = short_dosDorso[1];
        } else if (poolType == "50m"){
            baseTime = long_dosDorso[1];
        }
    }

    //Para Pecho
    if (genero == "masculino" && estilo == "pecho" && distancia == 50){
        if (poolType == "25m"){
            baseTime = short_cincuentaPecho[0];
        } else if (poolType == "50m"){
            baseTime = long_cincuentaPecho[0];
        }
    } else if (genero == "femenino" && estilo == "pecho" && distancia == 50){
        if (poolType == "25m"){
            baseTime = short_cincuentaPecho[1];
        } else if (poolType == "50m"){
            baseTime = long_cincuentaPecho[1];
        }
    }

    if (genero == "masculino" && estilo == "pecho" && distancia == 100){
        if (poolType == "25m"){
            baseTime = short_cienPecho[0];
        } else if (poolType == "50m"){
            baseTime = long_cienPecho[0];
        }
    } else if (genero == "femenino" && estilo == "pecho" && distancia == 100){
        if (poolType == "25m"){
            baseTime = short_cienPecho[1];
        } else if (poolType == "50m"){
            baseTime = long_cienPecho[1];
        }
    }

    if (genero == "masculino" && estilo == "pecho" && distancia == 200){
        if (poolType == "25m"){
            baseTime = short_dosPecho[0];
        } else if (poolType == "50m"){
            baseTime = long_dosPecho[0];
        }
    } else if (genero == "femenino" && estilo == "pecho" && distancia == 200){
        if (poolType == "25m"){
            baseTime = short_dosPecho[1];
        } else if (poolType == "50m"){
            baseTime = long_dosPecho[1];
        }
    }

    //Para Combinado
    if (genero == "masculino" && estilo == "combinado" && distancia == 100 && poolType == "25m"){
        baseTime = short_cienCombi[0];
    } else if (genero == "femenino" && estilo == "combinado" && distancia == 100 && poolType == "25m"){
        baseTime = short_cienCombi[1];
    }

    if (genero == "masculino" && estilo == "combinado" && distancia == 200){
        if (poolType == "25m"){
            baseTime = short_dosCombi[0];
        } else if (poolType == "50m"){
            baseTime = long_dosCombi[0];
        }
    } else if (genero == "femenino" && estilo == "combinado" && distancia == 200){
        if (poolType == "25m"){
            baseTime = short_dosCombi[1];
        } else if (poolType == "50m"){
            baseTime = long_dosCombi[1];
        }
    }

    if (genero == "masculino" && estilo == "combinado" && distancia == 400){
        if (poolType == "25m"){
            baseTime = short_cuatroCombi[0];
        } else if (poolType == "50m"){
            baseTime = long_cuatroCombi[0];
        }
    } else if (genero == "femenino" && estilo == "combinado" && distancia == 1500){
        if (poolType == "25m"){
            baseTime = short_cuatroCombi[1];
        } else if (poolType == "50m"){
            baseTime = long_cuatroCombi[1];
        }
    }

}

//Crea la clase Puntos que hereda de la clase Prueba
class Puntos : public Prueba{
    public:
        //Constructor con las variables que hereda
        Puntos(string gender, string stroke, string pool, float time, float tiempo, int distance):Prueba(gender,stroke,pool,time,tiempo,distance){};
        //Metodo nuevo para la clase Puntos
        float calcularPuntos(float baseTime, float tiempo);
};

//Desarrollo de Metodos
float Puntos::calcularPuntos(float baseTime, float tiempo){
    float fina;
    fina = 1000*pow((baseTime/tiempo),3);
    return fina;
}