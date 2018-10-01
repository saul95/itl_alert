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

    digitalWrite(abierto, HIGH);
    digitalWrite(cerrado, LOW);
     tonos();
    Serial.println("Puerta Abierta");
  }
    
   /*******************/
/*   si el reed switch no esta precionado se apaga todo     */
/*******************/
  else {
    digitalWrite(abierto, LOW);
    digitalWrite(cerrado, HIGH);
   
    noTone(buzzer);
    Serial.println("Puerta Cerrada");
  }
  
  delay(1);//ponemos un tiempo de espera de .001sg
}


/*******************/
/*     declaracion notas tema star wars     */
/*******************/
void tonos(){
  nota(g[2],500);noTone(buzzer);delay(100);
nota(g[2],500);noTone(buzzer);delay(100);
nota(g[2],500);noTone(buzzer);delay(100);
nota(ds[2],500);noTone(buzzer);delay(1);
nota(as[2],125);noTone(buzzer);delay(25);
nota(g[2],500);noTone(buzzer);delay(100);
nota(ds[2],500);noTone(buzzer);delay(1);
nota(as[2],125);noTone(buzzer);delay(25);
nota(g[2],500);
noTone(buzzer);delay(2000);
  
  }


/*******************/
/*     declaracion funcion nota     */
/*******************/
void nota(int frec, int t)
{
    tone(buzzer,frec);          // suena la nota frec recibida
    delay(t);                // para despues de un tiempo t
}
