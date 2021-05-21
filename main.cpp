/*
Creador: Ricardo Andrés Cáceres Villibord
Matricula: A01706972
Repositorio: https://github.com/Caceres-A01706972/TC1030_Proyecto.git
*/

#include "nadador.h" //Agrega clase nadador y las clases heredadas
#include "prueba.h" //Agrega clase prueba y la clase heredada

int main(){
    Nadador swimmer1("","","",0);
    swimmer1.setNombre();
    swimmer1.setEdad();
    swimmer1.setSexo();
    swimmer1.setPais();
    if (swimmer1.getSexo()=="hombre"){
        Hombre hombre1(swimmer1.getNombre(),swimmer1.getSexo(),swimmer1.getPais(),swimmer1.getEdad());
        cout<<"\nBienvenido "<<hombre1.getNombre()<<endl;
        bool continua = true;
        while (continua == true){
            int resp;
            cout<<"\nMENU"<<endl;
            cout<<"1. Ver Records de Hombres"<<endl;
            cout<<"2. Mostrar mi Perfil"<<endl;
            cout<<"3. Ver Tiempo Base de una Prueba"<<endl;
            cout<<"4. Calcular Mis Puntos FINA"<<endl;
            cout<<"5. SALIR\n"<<endl;
            cin>>resp;
            if (resp == 1){
                hombre1.ver_recordsHombres();
            } else if (resp == 2){
                hombre1.showInfo();
            } else if (resp == 3){
                Prueba prueba1("","","",0.0,0.0,0);
                prueba1.setGenero();
                prueba1.setEstilo();
                prueba1.set_poolType();
                prueba1.setDistancia();
                prueba1.set_baseTime();
                cout<<"El tiempo base es: "<<prueba1.get_baseTime()<<endl;
                cout<<"Deseas calcular tus puntos FINA en esta prueba? (si=1/no=0)"<<endl;
                cin>>resp;
                if (resp == 1){
                    prueba1.setTiempo();
                    Puntos puntos1("","","",0.0,0.0,0);
                    cout<<"Tus puntos FINA son: "<<puntos1.calcularPuntos(prueba1.get_baseTime(), prueba1.getTiempo())<<"\n"<<endl;
                } else if (resp == 0){
                    continue;
                }
            }else if (resp == 4){
                Prueba prueba1("","","",0.0,0.0,0);
                prueba1.setGenero();
                prueba1.setEstilo();
                prueba1.set_poolType();
                prueba1.setDistancia();
                prueba1.set_baseTime();
                prueba1.setTiempo();
                Puntos puntos1("","","",0.0,0.0,0);
                cout<<"Tus puntos FINA son: "<<puntos1.calcularPuntos(prueba1.get_baseTime(), prueba1.getTiempo())<<"\n"<<endl;
            } else if (resp == 5){
                continua = false;
            }
            
        }
    } else if (swimmer1.getSexo()=="mujer"){
        Mujer mujer1(swimmer1.getNombre(),swimmer1.getSexo(),swimmer1.getPais(),swimmer1.getEdad());
        cout<<"\nBienvenida "<<mujer1.getNombre()<<endl;
        bool continua = true;
        while (continua == true){
            int resp;
            cout<<"\nMENU"<<endl;
            cout<<"1. Ver Records de Mujeres"<<endl;
            cout<<"2. Mostrar mi Perfil"<<endl;
            cout<<"3. Ver Tiempo Base de una Prueba"<<endl;
            cout<<"4. Calcular Mis Puntos FINA"<<endl;
            cout<<"5. SALIR\n"<<endl;
            cin>>resp;
            if (resp == 1){
                mujer1.ver_recordsMujeres();
            } else if (resp == 2){
                mujer1.showInfo();
            } else if (resp == 3){
                Prueba prueba1("","","",0.0,0.0,0);
                prueba1.setGenero();
                prueba1.setEstilo();
                prueba1.set_poolType();
                prueba1.setDistancia();
                prueba1.set_baseTime();
                cout<<"El tiempo base es: "<<prueba1.get_baseTime()<<endl;
                cout<<"Deseas calcular tus puntos FINA en esta prueba? (si=1/no=0)"<<endl;
                cin>>resp;
                if (resp == 1){
                    prueba1.setTiempo();
                    Puntos puntos1("","","",0.0,0.0,0);
                    cout<<"Tus puntos FINA son: "<<puntos1.calcularPuntos(prueba1.get_baseTime(), prueba1.getTiempo())<<"\n"<<endl;
                } else if (resp == 0){
                    continue;
                }
            }else if (resp == 4){
                Prueba prueba1("","","",0.0,0.0,0);
                prueba1.setGenero();
                prueba1.setEstilo();
                prueba1.set_poolType();
                prueba1.setDistancia();
                prueba1.set_baseTime();
                prueba1.setTiempo();
                Puntos puntos1("","","",0.0,0.0,0);
                cout<<"Tus puntos FINA son: "<<puntos1.calcularPuntos(prueba1.get_baseTime(), prueba1.getTiempo())<<"\n"<<endl;
            } else if (resp == 5){
                continua = false;
            }
        }
    }
}