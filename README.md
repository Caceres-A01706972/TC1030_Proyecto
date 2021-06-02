# TC1030_Proyecto
Este es un repositorio para mi proyecto de la clase de Programación Orientada a Objetos.
Trata sobre una aplicación en consola (por el momento) para nadadores. La aplicación permite hacer comparaciones de los resultados del atleta en los diferentes eventos. El atleta puede consultar cuales son los records en cada evento, al igual que poder consultar cuantos puntos FINA corresponden al tiempo que el atleta hace en ese evento. 
## Sobre los Puntos FINA
La puntuación de los puntos FINA asigna un valor a la "performance" de el nadador, asignando mayor número de puntos a los mejores resultados típicamente 1000 o más y menor puntuación a los resultados menos óptimos. 

Los puntos se asignan cada año según una fórmula que toma como base el récord mundial más reciente aprobdo por la FINA (Federación Internacional de Natación). 

Para más información consulte la siguiente liga: https://www.fina.org/swimming/points
## Funcionalidad
El programa toma en cuenta los tiempos base aprobados por la FINA, sexo del usuario, el evento y el tiempo ingresado por el usuario, y procede a hacer los calculos de los puntos FINA con ayuda de una fórmula cúbica. El programa permite crear una lista con las pruebas que el usuario ingrese, asi luego podra ver la lista de sus pruebas y comparar su tiempo con el tiempo base, al igual que ver sus puntos FINA en cada una de sus pruebas.
## Consideraciones
El programa solo corre en consola y esta hecho con c++ standard por lo que corre en todos los sistemas operativos. Compilar con "g++ nadador.h prueba.h basetimes.h listaderecords.h main.cpp".
Correr en linux: "\a.out"
correr en windows: "a.exe"
