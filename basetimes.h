/* 
Creador: Ricardo Andrés Cáceres Villibord
Matricula: A01706972
Archivo con clase abstracta piscina y las clases Corta y Larga que heredan de Piscina.
Fuente de los tiempos: https://resources.fina.org/fina/document/2021/01/11/43122943-963d-47da-a7d1-b0ad34e76ec9/fina_points_base_times_-_scm_and_lcm_2021.pdf
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;

//Crea clase Piscina que es abstracta
class Piscina{
    private:
        string tipo;
    public:
        Piscina(string _tipo);
        void setTipo(){
            tipo = "outdoor";
        };
        string getTipo(){
            return tipo;
        }
        virtual void setRecords()=0; //Metodo virtual puro

};

//Constructor
Piscina::Piscina(string _tipo){
    tipo = _tipo;
}

//Creo clase Corta que hereda de Piscina
class Corta : public Piscina{
    public:
        float cincuentaLibre[2];
        float cienLibre[2];
        float dosLibre[2]; 
        float cuatroLibre[2];
        float ocho[2];
        float milqui[2];

        float cincuentaDorso[2];
        float cienDorso[2];
        float dosDorso[2];

        float cincuentaPecho[2];
        float cienPecho[2];
        float dosPecho[2];

        float cincuentaFly[2];
        float cienFly[2];
        float dosFly[2];

        float cienCombi[2];
        float dosCombi[2];
        float cuatroCombi[2];
    public:
        Corta(string _tipo):Piscina(_tipo){};
        void setRecords(){
            cincuentaLibre[0] = {20.24};
            cincuentaLibre[1] = {22.93};
            cienLibre[0] = {44.94};
            cienLibre[1] = {50.25};
            dosLibre[0] = {99.37};
            dosLibre[1] = {110.43};
            cuatroLibre[0] = {212.25};
            cuatroLibre[1] = {233.92};
            ocho[0] = {443.42};
            ocho[1] = {479.34};
            milqui[0] = {848.06};
            milqui[1] = {918.01};

            cincuentaDorso[0] = {22.22};
            cincuentaDorso[1] = {25.67};
            cienDorso[0] = {48.88};
            cienDorso[1] = {54.89};
            dosDorso[0] = {105.63};
            dosDorso[1] = {119.23};

            cincuentaPecho[0] = {25.25};
            cincuentaPecho[1] = {28.56};
            cienPecho[0] = {55.61};
            cienPecho[1] = {62.36};
            dosPecho[0] = {120.16};
            dosPecho[1] = {134.57};

            cincuentaFly[0] = {21.75};
            cincuentaFly[1] = {24.38};
            cienFly[0] = {48.08};
            cienFly[1] = {54.61};
            dosFly[0] = {108.24};
            dosFly[1] = {119.61};

            cienCombi[0] = {50.26};
            cienCombi[1] = {56.51};
            dosCombi[0] = {109.63};
            dosCombi[1] = {121.86};
            cuatroCombi[0] = {234.81};
            cuatroCombi[1] = {258.94};
        }
        
};

//Creo clase Larga que hereda de Piscina
class Larga : public Piscina{
    public: 
        float cincuentaLibre[2];
        float cienLibre[2];
        float dosLibre[2];
        float cuatroLibre[2];
        float ocho[2];
        float milqui[2];

        float cincuentaDorso[2];
        float cienDorso[2];
        float dosDorso[2];

        float cincuentaPecho[2];
        float cienPecho[2];
        float dosPecho[2];

        float cincuentaFly[2];
        float cienFly[2];
        float dosFly[2];

        float dosCombi[2];
        float cuatroCombi[2];
    public:
        Larga(string _tipo):Piscina(_tipo){};
        void setRecords(){
            cincuentaLibre[0] = {20.91};
            cincuentaLibre[1] = {23.67};
            cienLibre[0] = {46.91};
            cienLibre[1] = {51.71};
            dosLibre[0] = {102.00};
            dosLibre[1] = {112.98};
            cuatroLibre[0] = {220.07};
            cuatroLibre[1] = {236.46};
            ocho[0] = {452.12};
            ocho[1] = {484.79};
            milqui[0] = {871.02};
            milqui[1] = {920.48};

            cincuentaDorso[0] = {24.00};
            cincuentaDorso[1] = {26.98};
            cienDorso[0] = {51.85};
            cienDorso[1] = {57.57};
            dosDorso[0] = {111.92};
            dosDorso[1] = {123.35};

            cincuentaPecho[0] = {25.95};
            cincuentaPecho[1] = {29.40};
            cienPecho[0] = {56.88};
            cienPecho[1] = {64.13};
            dosPecho[0] = {126.12};
            dosPecho[1] = {139.11};

            cincuentaFly[0] = {22.27};
            cincuentaFly[1] = {24.43};
            cienFly[0] = {49.50};
            cienFly[1] = {55.48};
            dosFly[0] = {110.73};
            dosFly[1] = {121.81};

            dosCombi[0] = {114.00};
            dosCombi[1] = {126.12};
            cuatroCombi[0] = {243.84};
            cuatroCombi[1] = {266.36};
        }

};
