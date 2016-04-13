int sensor[6] = {A5 ,A4 ,A3 ,A2 ,A1 ,A0 }; //create an array called sensor comprising of analog values from A* pins
int sensorReading[6] = {0}; //set all values to "0" by default

void setup() {
  Serial.begin(9600); //baud rate of 9600 for the Serial Monitor
}

void loop() {
  readSensor();  //run the readSensor function
  delay(80);
}

void readSensor() {
  for(int i=0; i<6; i++) //for each of the 6 sensors in the sensor array
    {
       if(analogRead(sensor[i])>250){sensorReading[i]=1;} //if the analog value is over 250 set to 1
    }
      Serial.print("sensor: "); //print sensor:
        {
        for(int i=0; i<6; i++) { //for each sensorReading
      Serial.print(sensorReading[i]); //print the sensor reading
      Serial.print(" "); //print a space between sensor readings
    }
      Serial.println(" "); //leave a space and return carriage
    }

    for(int i=0; i<6; i++) //for each sensor in the sensor array
    {
      if(sensorReading[i]==1) {}  //if the sensor is set to high "1"
    for(int i=0; i<6; i++) {sensorReading[i]=0;} //set the sensor back to "0"
  }
}
