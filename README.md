# tl1_tp1_2023-Javi-zafiro
#Taller de Lenguajes I - 2023
##TP01

####Ejercicio 2:

2. a) _.gitignore_ es un archivo que nos permite indicarle a git que archivos y directorios debe ignorar, esta es justamente la razon por la que debe ser incluido. Se puede crear un _.gitignore_ global con reglas y archivos que debe ignorar para todos nuestros repositorios o bien se crear un _.gitignore_ en el repositorio en el que estamos trabajando, se crea como un documento de texto donde agregamos los archivos a ignorar y lo guardamos como _.gitignore_, despues en la consola se coloca el comando **touch .gitignore** y de ahi todo los archivos que hayamos incluido en el _.gitignore_ no se subiran al repositorio. Las reglas a tener en cuenta para configurarlo son:
* cada linea debe contener un archivo o carpeta a ignorar
* se utiliza "*" para ignorar a todos los similares 
* se usa "#" para comentar
3. c) los archivos que estan subidos al repositorio son:
* .gitignore
* README.md
* tp1_1.cpp
* tp1_1.exe
A mi parecer el archivo tp1_1.exe no deberia estar en el repositorio
g) Luego de incluir el nuevo archivo .gitignore y realizarle cambios al archivo tp1_1.cpp, y hacerle el segundo commit, en el repositorio se sige subiendo el ejecutable de tp1_1 a pesar de ya tener ignorados todos los archivos .exe. Esto se debe a que inclui el ejecutable al repositorio antes de excluir los archivos .exe, .gitignore no ignora los archivos ya subidos, por lo que estos se siguen subiendo en cada commit a pesar de tenerlos en el .gitignore, es necesario dejar de restrear los archivos ya ingresados que deseamos ignorar antes de agregar una regla que los ignore