const int BOTON1 = 2;  // Botón asignado en el pin 2
const int BOTON2 = 3;  // Botón asignado en el pin 3
const int BOTON3 = 4;  // Botón asignado en el pin 4
const int BOTON4 = 5;  // Botón asignado en el pin 5
const int BOTON5 = 6;  // Botón asignado en el pin 6
const int BOTON6 = 7;  //Boton asignado en el pin 7

const int BOTON7 = 8;  //Boton asignado en el pin 8
const int BOTON8 = 9;  //Boton asignado en el pin 8

//Leds
const int ledPerfil1 = 10;  // Led asignado al pin 10
const int ledPerfil2 = 11;  // Led asignado al pin 11
const int ledPerfil3 = 12;  // Led asignado al pin 12
const int ledPerfil4 = 13;  // Led asignado al pin 13

int perfil; //Numero de perfil seleccionado

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(BOTON1, INPUT_PULLUP);
  pinMode(BOTON2, INPUT_PULLUP);
  pinMode(BOTON3, INPUT_PULLUP);
  pinMode(BOTON4, INPUT_PULLUP);
  pinMode(BOTON5, INPUT_PULLUP);
  pinMode(BOTON6, INPUT_PULLUP);
  pinMode(BOTON7, INPUT_PULLUP);
  pinMode(BOTON8, INPUT_PULLUP);

  pinMode(ledPerfil1, OUTPUT);
  pinMode(ledPerfil2, OUTPUT);
  pinMode(ledPerfil3, OUTPUT);
  pinMode(ledPerfil4, OUTPUT);

  digitalWrite(ledPerfil1, HIGH);
}

void loop() {

  //Si hay informacion en el serial port
  if (Serial.available() > 0) {
    char input = Serial.read();

    if (input == '0') {
      perfil = 0;
      digitalWrite(ledPerfil1, HIGH);
      digitalWrite(ledPerfil2, LOW);
      digitalWrite(ledPerfil3, LOW);
      digitalWrite(ledPerfil4, LOW);
    } else if (input == '1') {
      perfil = 1;
      digitalWrite(ledPerfil1, LOW);
      digitalWrite(ledPerfil2, HIGH);
      digitalWrite(ledPerfil3, LOW);
      digitalWrite(ledPerfil4, LOW);
    } else if (input == '2') {
      perfil = 2;
      digitalWrite(ledPerfil1, LOW);
      digitalWrite(ledPerfil2, LOW);
      digitalWrite(ledPerfil3, HIGH);
      digitalWrite(ledPerfil4, LOW);
    } else if (input == '3') {
      perfil = 3;
      digitalWrite(ledPerfil1, LOW);
      digitalWrite(ledPerfil2, LOW);
      digitalWrite(ledPerfil3, LOW);
      digitalWrite(ledPerfil4, HIGH);
    }
  }


  // put your main code here, to run repeatedly:
  if (digitalRead(BOTON1) == LOW) {
    Serial.println("1");
    delay(1000);
  } else if (digitalRead(BOTON2) == LOW) {
    Serial.println("2");
    delay(1000);
  } else if (digitalRead(BOTON3) == LOW) {
    Serial.println("3");
    delay(1000);
  } else if (digitalRead(BOTON4) == LOW) {
    Serial.println("4");
    delay(1000);
  } else if (digitalRead(BOTON5) == LOW) {
    Serial.println("5");
    delay(1000);
  } else if (digitalRead(BOTON6) == LOW) {
    Serial.println("6");
    delay(1000);
  } else if (digitalRead(BOTON7) == LOW) {
    if (!(perfil == 0)) {


      perfil -= 1;
      if (perfil == 0) {
        digitalWrite(ledPerfil1, HIGH);
        digitalWrite(ledPerfil2, LOW);
        digitalWrite(ledPerfil3, LOW);
        digitalWrite(ledPerfil4, LOW);
      } else if (perfil == 1) {
        digitalWrite(ledPerfil1, LOW);
        digitalWrite(ledPerfil2, HIGH);
        digitalWrite(ledPerfil3, LOW);
        digitalWrite(ledPerfil4, LOW);
      } else if (perfil == 2) {
        digitalWrite(ledPerfil1, LOW);
        digitalWrite(ledPerfil2, LOW);
        digitalWrite(ledPerfil3, HIGH);
        digitalWrite(ledPerfil4, LOW);
      } else if (perfil == 3) {
        digitalWrite(ledPerfil1, LOW);
        digitalWrite(ledPerfil2, LOW);
        digitalWrite(ledPerfil3, LOW);
        digitalWrite(ledPerfil4, HIGH);
      }
    }

    Serial.println("7");
    delay(1000);
  } else if (digitalRead(BOTON8) == LOW) {
    if (!(perfil == 3)) {
      perfil += 1;
      if (perfil == 0) {
        digitalWrite(ledPerfil1, HIGH);
        digitalWrite(ledPerfil2, LOW);
        digitalWrite(ledPerfil3, LOW);
        digitalWrite(ledPerfil4, LOW);
      } else if (perfil == 1) {
        digitalWrite(ledPerfil1, LOW);
        digitalWrite(ledPerfil2, HIGH);
        digitalWrite(ledPerfil3, LOW);
        digitalWrite(ledPerfil4, LOW);
      } else if (perfil == 2) {
        digitalWrite(ledPerfil1, LOW);
        digitalWrite(ledPerfil2, LOW);
        digitalWrite(ledPerfil3, HIGH);
        digitalWrite(ledPerfil4, LOW);
      } else if (perfil == 3) {
        digitalWrite(ledPerfil1, LOW);
        digitalWrite(ledPerfil2, LOW);
        digitalWrite(ledPerfil3, LOW);
        digitalWrite(ledPerfil4, HIGH);
      }
    }


    Serial.println("8");
    delay(1000);
  }
}
