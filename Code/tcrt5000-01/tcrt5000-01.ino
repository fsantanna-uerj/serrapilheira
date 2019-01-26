void setup() {  
  pinMode(3, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  int v = digitalRead(3);
  digitalWrite(13, !v);
}
