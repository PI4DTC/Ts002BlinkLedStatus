/*
  Blink met Led_status Bool variabele.
*/
#define FALSE  0
#define TRUE   1


// Declareer geheugen voor een variabele
// De bool is een echte digitale variabele en kan alleen TRUE (1) of FALSE (0) aannemen.
bool Led_Status = FALSE; // Declareer Led_Status en initialiseer die gelijk op FALSE
// Een opdracht in 'C' wordt afgesloten met een puntcomma ';'


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() 
{
  digitalWrite(LED_BUILTIN, !Led_Status);   // turn the LED on (HIGH is the voltage level)
  delay(200);                       // wait for a second
  Led_Status = !Led_Status; 
}
