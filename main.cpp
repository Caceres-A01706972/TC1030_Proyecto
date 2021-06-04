/*
Creador: Ricardo Andrés Cáceres Villibord
Matricula: A01706972
Repositorio: https://github.com/Caceres-A01706972/TC1030_Proyecto.git
*/

#include "nadador.h" //Agrega clase nadador y las clases heredadas
#include "prueba.h" //Agrega clase prueba y la clase heredada


int main(){
    Nadador swimmer1("","","",0);
    Nadador *nadadores[2];
    Prueba prueba1("","","",0.0,0.0,0,0.1);
    swimmer1.setNombre();
    swimmer1.setEdad();
    swimmer1.setSexo();
    swimmer1.setPais();
    if (swimmer1.getSexo()=="hombre"){
         nadadores[0] = new Hombre(swimmer1.getNombre(),swimmer1.getSexo(),swimmer1.getPais(),swimmer1.getEdad());
        cout<<"\nBienvenido "<<nadadores[0]->getNombre()<<endl;
        bool continua = true;
        while (continua == true){
            int resp;
            cout<<"\nMENU"<<endl;
            cout<<"1. Ver Records de Hombres"<<endl;
            cout<<"2. Mostrar mi Perfil"<<endl;
            cout<<"3. Ver Tiempo Base de una Prueba"<<endl;
            cout<<"4. Calcular Mis Puntos FINA"<<endl;
            cout<<"5. Agregar Pruebas"<<endl;
            cout<<"6. Ver Mis Pruebas"<<endl;
            cout<<"7. SALIR\n"<<endl;
            cin>>resp;
            if (resp == 1){
                nadadores[0]->verRecords();
            } else if (resp == 2){
                nadadores[0]->showInfo();
            } else if (resp == 3){
                prueba1.setGenero();
                prueba1.setEstilo();
                prueba1.set_poolType();
                prueba1.setDistancia();
                prueba1.set_baseTime();
                cout<<"El tiempo base es: "<<convertir(prueba1.get_baseTime())<<endl;
                cout<<"Deseas calcular puntos FINA en esta prueba? (si=1/no=0)"<<endl;
                cin>>resp;
                if (resp == 1){
                    prueba1.setTiempo();
                    Puntos puntos1("","","",0.0,0.0,0);
                    cout<<"Tus puntos FINA son: "<<puntos1.calcularPuntos(prueba1.get_baseTime(), prueba1.getTiempo())<<"\n"<<endl;
                } else if (resp == 0){
                    continue;
                }
            }else if (resp == 4){
                prueba1.setGenero();
                prueba1.setEstilo();
                prueba1.set_poolType();
                prueba1.setDistancia();
                prueba1.set_baseTime();
                prueba1.setTiempo();
                Puntos puntos1("","","",0.0,0.0,0);
                cout<<"Tus puntos FINA son: "<<puntos1.calcularPuntos(prueba1.get_baseTime(), prueba1.getTiempo())<<"\n"<<endl;
            } else if (resp == 5){
                Puntos puntos1("","","",0.0,0.0,0);
                prueba1.setGenero();
                prueba1.setEstilo();
                prueba1.set_poolType();
                prueba1.setDistancia();
                prueba1.set_baseTime();
                prueba1.setTiempo();
                prueba1.agregaPrueba(prueba1.getGenero(), prueba1.getEstilo(), prueba1.get_poolType(), prueba1.get_baseTime(), prueba1.getTiempo(), prueba1.getDistancia(),puntos1.calcularPuntos(prueba1.get_baseTime(), prueba1.getTiempo()));
                cout<<"Prueba agregada exitosamente!"<<endl;
                cout<<"Deseas ver su lista de pruebas? (si=1/no=0)"<<endl;
                cin>>resp;
                if (resp == 1){
                    prueba1.imprimePruebas(nadadores[0]->getNombre());
                } 
            }else if (resp == 6){
                prueba1.imprimePruebas(nadadores[0]->getNombre());
            } else if (resp == 7){
                continua = false;
                }
        }

    } else if (swimmer1.getSexo()=="mujer"){
        nadadores[1] = new Mujer(swimmer1.getNombre(),swimmer1.getSexo(),swimmer1.getPais(),swimmer1.getEdad());
        cout<<"\nBienvenida "<<nadadores[1]->getNombre()<<endl;
        bool continua = true;
        while (continua == true){
            int resp;
            cout<<"\nMENU"<<endl;
            cout<<"1. Ver Records de Mujeres"<<endl;
            cout<<"2. Mostrar mi Perfil"<<endl;
            cout<<"3. Ver Tiempo Base de una Prueba"<<endl;
            cout<<"4. Calcular Mis Puntos FINA"<<endl;
            cout<<"5. Agregar Pruebas"<<endl;
            cout<<"6. Ver Mis Pruebas"<<endl;
            cout<<"7. SALIR\n"<<endl;
            cin>>resp;
            if (resp == 1){
                nadadores[1]->verRecords();
            } else if (resp == 2){
                nadadores[1]->showInfo();
            } else if (resp == 3){
                prueba1.setGenero();
                prueba1.setEstilo();
                prueba1.set_poolType();
                prueba1.setDistancia();
                prueba1.set_baseTime();
                cout<<"El tiempo base es: "<<convertir(prueba1.get_baseTime())<<endl;
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
                prueba1.setGenero();
                prueba1.setEstilo();
                prueba1.set_poolType();
                prueba1.setDistancia();
                prueba1.set_baseTime();
                prueba1.setTiempo();
                Puntos puntos1("","","",0.0,0.0,0);
                cout<<"Tus puntos FINA son: "<<puntos1.calcularPuntos(prueba1.get_baseTime(), prueba1.getTiempo())<<"\n"<<endl;
            } else if (resp == 5){
                Puntos puntos1("","","",0.0,0.0,0);
                prueba1.setGenero();
                prueba1.setEstilo();
                prueba1.set_poolType();
                prueba1.setDistancia();
                prueba1.set_baseTime();
                prueba1.setTiempo();
                prueba1.agregaPrueba(prueba1.getGenero(), prueba1.getEstilo(), prueba1.get_poolType(), prueba1.get_baseTime(), prueba1.getTiempo(), prueba1.getDistancia(),puntos1.calcularPuntos(prueba1.get_baseTime(), prueba1.getTiempo()));
                cout<<"Prueba agregada exitosamente!"<<endl;
                cout<<"Deseas ver su lista de pruebas? (si=1/no=0)"<<endl;
                cin>>resp;
                if (resp == 1){
                    prueba1.imprimePruebas(nadadores[1]->getNombre());
                } 
            } else if (resp == 6){
                prueba1.imprimePruebas(nadadores[1]->getNombre());
            } else if (resp == 7){
                continua = false;
            }
        }
    }
}