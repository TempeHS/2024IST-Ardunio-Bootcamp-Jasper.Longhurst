void openGate () {
  for (int i=0; i<=255; i++) {
  myServo.write(180);
  delay(40);
  }
}


void closeGate () {
  myServo.write(0);
  delay(500);
}

void readUS () {
  rangeInCM = myUSsensor.MeasureInCentimeters();
  Serial.println(rangeInCM);
}