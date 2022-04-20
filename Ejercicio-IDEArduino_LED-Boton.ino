/*
 * Ejercicio básico de programación en C
 * Por: Tadeo Portela
 * Fecha: 18 de abril de 2022
 * 
 * Este es un ejercicio básico de programación 
 */

// Bibliotecas

// Constantes
const int LEDPIN = 4;
const int PushButton = 2;
// Variables
int Push_button_state;
// Definición de objetos

// Condiciones iniciales - Se ejecuta sólo una vez al energizar
void setup() {// Inicio de void setup ()
  // Aquí va tu código
  pinMode(LEDPIN, OUTPUT);
  pinMode(PushButton, INPUT_PULLUP);

}// Fin de void setup

// Cuerpo del programa - Se ejecuta constamente
void loop() {// Inicio de void loop
// digitalRead function stores the Push button state 
// in variable push_button_state
  
  Push_button_state = digitalRead(PushButton);
  digitalWrite (LEDPIN, Push_button_state);

// if pressed LED will turn off otherwise remain on
}
// Fin de void loop

// Funcioes del usuario
