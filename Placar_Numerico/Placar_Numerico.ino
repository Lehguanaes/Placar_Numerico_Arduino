/* Placar Númerico de 0 a 9.

   Organização referente entre Leds e sua respectivas Portas

   Led 01 -> Porta 10
   Led 02 -> Porta 5
   Led 03 -> Porta Sempre Ligada - 3V
   Led 04 -> Porta 16
   Led 05 -> Porta 3
   Led 06 -> Porta 4
   Led 07 -> Porta 13
   Led 08 -> Porta 0
   Led 09 -> Porta 15
   Led 10 -> Porta 2
   Led 11 -> Porta 1
   Led 12 -> Porta 12
   Led 13 -> Porta 14 

   Demonstração Visual e Enumeração

   01 02 03
   04    05
   06 07 08
   09    10
   11 12 13
  
*/
  // Declarando variaveis dos leds
  #define led01 10
  #define led02 5
  #define led04 16
  #define led05 3 
  #define led06 4 
  #define led07 13 
  #define led08 0
  #define led09 15
  #define led10 2
  #define led11 1
  #define led12 12
  #define led13 14

  void setup() {
    pinMode(led01, OUTPUT);
    pinMode(led02, OUTPUT);
    pinMode(led04, OUTPUT);
    pinMode(led05, OUTPUT);
    pinMode(led06, OUTPUT);
    pinMode(led07, OUTPUT);
    pinMode(led08, OUTPUT);
    pinMode(led09, OUTPUT);
    pinMode(led10, OUTPUT);
    pinMode(led11, OUTPUT);
    pinMode(led12, OUTPUT);
    pinMode(led13, OUTPUT);
  }

  void loop() {

    // Representando o Número 0
    digitalWrite(led01, HIGH);
    digitalWrite(led02, HIGH);
    digitalWrite(led04, HIGH);
    digitalWrite(led05, HIGH);
    digitalWrite(led06, HIGH);
    digitalWrite(led08, HIGH);
    digitalWrite(led09, HIGH);
    digitalWrite(led10, HIGH);
    digitalWrite(led11, HIGH);
    digitalWrite(led12, HIGH);
    digitalWrite(led13, HIGH);

    //Delay de 2000 ms = 2 s
    delay(2000); 

    // Representando o Número 1
    digitalWrite(led01, LOW);
    digitalWrite(led02, LOW);
    digitalWrite(led04, LOW);
    digitalWrite(led06, LOW);
    digitalWrite(led09, LOW);
    digitalWrite(led11, LOW);
    digitalWrite(led12, LOW);

    //Delay de 2000 ms = 2 s
    delay(2000); 

    // Representando o Número 2
    digitalWrite(led01, HIGH);
    digitalWrite(led02, HIGH);
    digitalWrite(led06, HIGH);
    digitalWrite(led07, HIGH);
    digitalWrite(led09, HIGH);
    digitalWrite(led10, LOW);
    digitalWrite(led11, HIGH);
    digitalWrite(led12, HIGH);

    //Delay de 2000 ms = 2 s
    delay(2000); 

    // Representando o Número 3
    digitalWrite(led09, LOW);
    digitalWrite(led10, HIGH);

    //Delay de 2000 ms = 2 s
    delay(2000); 

    // Representando o Número 4
    digitalWrite(led02, LOW);
    digitalWrite(led04, HIGH);
    digitalWrite(led11, LOW);
    digitalWrite(led12, LOW);

    //Delay de 2000 ms = 2 s
    delay(2000); 

    // Representando o Número 5
    digitalWrite(led02, HIGH);
    digitalWrite(led05, LOW);
    digitalWrite(led11, HIGH);
    digitalWrite(led12, HIGH);

    //Delay de 2000 ms = 2 s
    delay(2000); 

    // Representando o Número 6
    digitalWrite(led09, HIGH);
    
    //Delay de 2000 ms = 2 s
    delay(2000); 

    // Representando o Número 7
    digitalWrite(led04, LOW);
    digitalWrite(led05, HIGH);
    digitalWrite(led06, LOW);
    digitalWrite(led07, LOW);
    digitalWrite(led09, LOW);
    digitalWrite(led11, LOW);
    digitalWrite(led12, LOW);

    //Delay de 2000 ms = 2 s
    delay(2000); 

    // Representando o Número 8
    digitalWrite(led04, HIGH);
    digitalWrite(led06, HIGH);
    digitalWrite(led07, HIGH);
    digitalWrite(led09, HIGH);
    digitalWrite(led11, HIGH);
    digitalWrite(led12, HIGH);

    //Delay de 2000 ms = 2 s
    delay(2000); 

    // Representando o Número 9
    digitalWrite(led09, LOW);

    //Delay de 2000 ms = 2 s
    delay(2000); 

    // Representando o Número 0 - pós looping
    digitalWrite(led09,  HIGH);
    digitalWrite(led07, LOW);
  }