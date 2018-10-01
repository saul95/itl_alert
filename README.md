# itl_alert
Sistema Notificador de Llegada de Individuos

02/oct/2018
 

Instituto: Instituto Tecnológico de león

Carrera: Ingeniería en sistemas computacionales. 

Materia: sistemas programables. 

Alumno: Saúl Gutiérrez González

Maestro (A): Ing. Levi rojas carlos rafael



Introducción 
Dentro de este proyecto de investigación se desarrora El sistema de seguridad con sensores magneticos tiene como objetivo
monitorear una puerta y/o ventana y disparar una alarma en caso de que una de ellas sea abierta. 
incluye un boton para interactuar con el usuario (desactivar la alarma).

Nombre del proyecto:
Sistema Notificador de Llegada de Individuos

1.1 Descripción del problema

En el contexto de seguridad se necesita hoy en dia del uso de la tecnologia para estar comunicados siempre con nuestros 
aparatos electronicos, en cuestion de seguridad muchos de estos circuitos y sensores son de mucha ayuda a la hora
de implementar en alarmas de coches y hogares. en este sentido mucha de esta tecnologia es de un alto valor monetario.
asi que se requiere realizar una alarma para deteccion de llegada de invidivuos a bajo costo.

1.2 Objetivo General de la aplicación

El objetivo de la aplicación principalmente es generar y diseñar un circuito con la ayuda de arduino 
que sea capaz de detectar por medio de un sensor magnetico la llegada de cualquier individuo y al accionar 
el sensor se active una alarma para señalar que alguien a entrado a la propiedad asi como tambien se active el led 
que de la señal de que se ha abierto la puesta.

1.3 Hipótesis

⦁	Como posible hipótesis se prevé que el circuito no tendrá problemas de instalación y cableado.
⦁	El alumno no tendra problemas en la codificacion.
⦁	posiblemente se tenga problemas al momento de mandar el tono del buzzer
⦁	Posibles fallas en el sistema, al momento de detectar el sensor magnetico.

1.4 Materiales

⦁	1 Placa Arduino UNO
⦁	Cables macho-hembra
⦁	1 buzzer
⦁	2 leds
⦁	3 resistencias
⦁	1 button
⦁	1 reed switch

1.5 Diagrama

EN EL REPOSITORIO

 
1.6 Codigo

/*******************/
/*    Saul Gtz    */
/*******************/

/*******************/
/*    Declaracion de variales   */
/*******************/
int abierto=8;
int cerrado=9;
int switchReed=4;
int buzzer = 10;
/*******************/
/*    declaración de Notas    */
/*******************/
int c[5]={131,262,523,1046,2093};       // frecuencias 4 octavas de Do
int cs[5]={139,277,554,1108,2217};      // Do#
int d[5]={147,294,587,1175,2349};       // Re
int ds[5]={156,311,622,1244,2489};    // Re#
int e[5]={165,330,659,1319,2637};      // Mi
int f[5]={175,349,698,1397,2794};       // Fa
int fs[5]={185,370,740,1480,2960};     // Fa#
int g[5]={196,392,784,1568,3136};     // Sol
int gs[5]={208,415,831,1661,3322};   // Sol#
int a[5]={220,440,880,1760,3520};      // La
int as[5]={233,466,932,1866,3729};    // La#
int b[5]={247,494,988,1976,3951};      // Si

void nota(int a, int b);            // declaración de la función nota 


/*******************/
/*    configuracion inicial del dispositivo     */
/*******************/

void setup(){
 
    /*******************/
/*  inicializamos los puertos o pines    */
/*******************/
  pinMode(abierto, OUTPUT);
  pinMode(cerrado, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(switchReed, INPUT);
  Serial.begin(9600);
}

/*******************/
/*    ciclo repetitivo del codigo     */
/*******************/

void loop(){

  /*******************/
/*   si el reed switch es precionado entramos en la primera opcion     */
/*******************/
  if (digitalRead(switchReed)==HIGH){
    digitalWrite(abierto, LOW);
    digitalWrite(cerrado, HIGH);
    noTone(buzzer);
    Serial.println("Puerta Cerrada");
  }
    
   /*******************/
/*   si el reed switch no esta precionado se apaga todo     */
/*******************/
  else {
    digitalWrite(abierto, HIGH);
    digitalWrite(cerrado, LOW);
    tonos();
    Serial.println("Puerta Abierta");
  }
  
  delay(1);//ponemos un tiempo de espera de .001sg
}


/*******************/
/*     declaracion notas tema star wars     */
/*******************/
void tonos(){
  nota(g[2],500);noTone(spk);delay(100);
nota(g[2],500);noTone(spk);delay(100);
nota(g[2],500);noTone(spk);delay(100);
nota(ds[2],500);noTone(spk);delay(1);
nota(as[2],125);noTone(spk);delay(25);
nota(g[2],500);noTone(spk);delay(100);
nota(ds[2],500);noTone(spk);delay(1);
nota(as[2],125);noTone(spk);delay(25);
nota(g[2],500);
noTone(spk);delay(2000);
  
  }


/*******************/
/*     declaracion funcion nota     */
/*******************/
void nota(int frec, int t)
{
    tone(spk,frec);          // suena la nota frec recibida
    delay(t);                // para despues de un tiempo t
}

1.7 pruebas / Evidencias

EN EL REPOSITORIO

1.8 Conclusiones

A la conclusión que se llego es la importancia que tiene una ing. En Sistemas computacionales dentro de los circuitos electronicos. 
ya que  con la programa cion de circuitos realizan procesos computarizados para generar más seguridad  en menos tiempo
y con menos recursos económicos y materiales 



















 

