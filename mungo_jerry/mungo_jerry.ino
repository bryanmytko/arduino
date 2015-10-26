int buttons[6];
// Hardware can only fit 6 notes ¯\_(ツ)_/¯
// These values are integer approximations
// E(4) B(4) C#(5) G(5) G#(5) E(6)
int notes[] = {330, 494, 554, 784, 831, 1319};

void setup(){
  buttons[0] = 2;
  Serial.begin(9600); // Log notes for debugging
}

void loop(){
  int keyVal = analogRead(A0);
  Serial.println(keyVal);

  if(keyVal == 1023){
    tone(8, notes[0]);
  }
  else if(keyVal > 970 && keyVal <= 1002){
    tone(8, notes[1]);
  }
  else if(keyVal > 933 && keyVal <= 970){
    tone(8, notes[2]);
  }
  else if(keyVal > 697 && keyVal <= 933){
    tone(8, notes[3]);
  }
  else if(keyVal > 513 && keyVal <= 697){
    tone(8, notes[4]);
  }
  else if(keyVal > 0 && keyVal <= 513){
    tone(8, notes[5]);
  }
  else {
    noTone(8);
  }
}
