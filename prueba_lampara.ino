bool activarleds = false;


void setup() {
  //bucle for para inicializar todos los leds
    for (int x = 2; x < 9; x++) {
    pinMode(x, OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  // si tenemos corro o bytes por leer
  if(Serial.available()){
    if(Serial.read()== 'f'){
      activarleds = !activarleds;
    }
  }
  if (activarleds){
              //utilizo también un bucle for para encender los leds
  for (int x = 2; x < 9; x++) {
    digitalWrite(x, HIGH);
  }
  delay(1000); //delay del rato que están encendidos los leds
  //y, como no, utilizo un bucle for para apagar los leds
   for (int x = 2; x < 9; x++) {
    digitalWrite(x, LOW);
  }
  for (int x = 2; x < 9; x++) {
    digitalWrite(x, HIGH);
  }
  for (int x = 2; x < 9; x++) {
    digitalWrite(x, LOW);
  }
  delay(1000);  //delay del rato que están apagados los leds
  }
 
}
