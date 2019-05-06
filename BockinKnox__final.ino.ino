//LED CONSTANTS
const int row[6] = {8, 9, 10, 11, 12, 13};
const int col[6] = {7, 6, 5, 4, 3, 2};

const int empty[6][6] = {
  {0,0,0,0,0,0},
  {0,0,0,0,0,0},
  {0,0,0,0,0,0},
  {0,0,0,0,0,0},
  {0,0,0,0,0,0},
  {0,0,0,0,0,0},    
};


const int full[6][6] = {
  {1,1,1,1,1,1},
  {1,1,1,1,1,1},
  {1,1,1,1,1,1},
  {1,1,1,1,1,1},
  {1,1,1,1,1,1},
  {1,1,1,1,1,1},
};

const int arrow1[6][6] = {
  {0,0,1,1,0,0},
  {0,0,0,0,0,0},
  {0,0,0,0,0,0},
  {0,0,0,0,0,0},
  {0,0,0,0,0,0},
  {0,0,0,0,0,0},    
};

const int arrow2[6][6] = {
  {0,0,1,1,0,0},
  {0,0,1,1,0,0},
  {0,0,0,0,0,0},
  {0,0,0,0,0,0},
  {0,0,0,0,0,0},
  {0,0,0,0,0,0},    
};

const int arrow3[6][6] = {
  {0,0,1,1,0,0},
  {0,0,1,1,0,0},
  {0,0,1,1,0,0},
  {0,0,0,0,0,0},
  {0,0,0,0,0,0},
  {0,0,0,0,0,0},    
};

const int arrow4[6][6] = {
  {0,0,1,1,0,0},
  {0,0,1,1,0,0},
  {0,0,1,1,0,0},
  {1,1,1,1,1,1},
  {0,0,0,0,0,0},
  {0,0,0,0,0,0},    
};

const int arrow5[6][6] = {
  {0,0,1,1,0,0},
  {0,0,1,1,0,0},
  {0,0,1,1,0,0},
  {1,1,1,1,1,1},
  {0,1,1,1,1,0},
  {0,0,0,0,0,0},    
};

const int arrow6[6][6] = {
  {0,0,1,1,0,0},
  {0,0,1,1,0,0},
  {0,0,1,1,0,0},
  {1,1,1,1,1,1},
  {0,1,1,1,1,0},
  {0,0,1,1,0,0},    
};



const int blue[6][6] = {
  {0,0,0,1,1,1},
  {0,0,0,1,1,1},
  {0,0,0,1,1,1},
  {0,0,0,1,1,1},
  {0,0,0,1,1,1},
  {0,0,0,1,1,1},    
};
const int circle1[6][6] = {
  {0,0,0,0,0,0},
  {0,0,0,0,0,0},
  {0,0,1,1,0,0},
  {0,0,1,1,0,0},
  {0,0,0,0,0,0},
  {0,0,0,0,0,0},    
};

const int circle2[6][6] = {
  {0,0,0,0,0,0},
  {0,1,1,1,1,0},
  {0,1,0,0,1,0},
  {0,1,0,0,1,0},
  {0,1,1,1,1,0},
  {0,0,0,0,0,0},    
};

const int circle3[6][6] = {
  {1,1,1,1,1,1},
  {1,0,0,0,0,1},
  {1,0,0,0,0,1},
  {1,0,0,0,0,1},
  {1,0,0,0,0,1},
  {1,1,1,1,1,1},    
};

// incorrect input
const int red[6][6]  = {
  {1,1,1,0,0,0},
  {1,1,1,0,0,0},
  {1,1,1,0,0,0},
  {1,1,1,0,0,0},
  {1,1,1,0,0,0},
  {1,1,1,0,0,0}
};

const int redLine1[6][6]  = {
  {1,0,0,0,0,0},
  {1,0,0,0,0,0},
  {1,0,0,0,0,0},
  {1,0,0,0,0,0},
  {1,0,0,0,0,0},
  {1,0,0,0,0,0}
};

const int redLine2[6][6]  = {
  {1,1,0,0,0,0},
  {1,1,0,0,0,0},
  {1,1,0,0,0,0},
  {1,1,0,0,0,0},
  {1,1,0,0,0,0},
  {1,1,0,0,0,0}
};

const int one[6][6]  = {
  {0,0,1,1,0,0},
  {0,0,1,1,0,0},
  {0,0,1,1,0,0},
  {0,0,1,1,0,0},
  {0,0,1,1,0,0},
  {0,0,1,1,0,0}
};

const int two[6][6] = {
  {1,1,1,1,1,1},
  {0,0,0,0,0,1},
  {0,0,0,0,0,1},
  {1,1,1,1,1,1},
  {1,0,0,0,0,0},
  {1,1,1,1,1,1},    
};

const int three[6][6] = {
  {1,1,1,1,1,1},
  {0,0,0,0,0,1},
  {0,0,1,1,1,1},
  {0,0,1,1,1,1},
  {0,0,0,0,0,1},
  {1,1,1,1,1,1},    
};

const int four[6][6] = {
  {1,0,0,0,0,1},
  {1,0,0,0,0,1},
  {1,0,0,0,0,1},
  {1,1,1,1,1,1},
  {0,0,0,0,1,1},
  {0,0,0,0,1,1},    
};

const int five[6][6] = {
  {1,1,1,1,1,1},
  {1,0,0,0,0,0},
  {1,0,0,0,0,0},
  {1,1,1,1,1,1},
  {0,0,0,0,0,1},
  {1,1,1,1,1,1},    
};

const int NUMOFCOLS = 6;
const int NUMOFROWS = 6;
//--------------------------------------------------------------------



int current_count = 0; // For custom Millis
unsigned long volatile overflow_count = 0; // For cusotm Millis

const int buttonPort = A1;
const int trigPin = A2;
const int echoPin = A3;
const int servoPort = A5;
const int backupPort = A4;

// Knock sensing variables
const int postKnockWait = 250; // Delay to wait after a knock
const int maxKnocks = 5; // Max number of knocks for the secret code
const int maxWait = 7; // Max time to wait while listening for knocks
const double secretKnockKey[5] = {0.00,0.76,0.79,0.37,0.41}; // the seconds in between each knock for the secret knock
const double rejectKnockThreshold = 0.20; // The tolerance allowed for the guess knock
const int knockSensor = A0;
const int knockSoundThreshold = 105; // The minimum sound the piezo sensor needs to hear to register a knock
double knockReadings[5] = {0.0,0.0,0.0,0.0,0.0}; // Storage of the knocks recorded 
int knockNumber = 0; //current number of knocks
int knockSensorReading = 0;

//ultrasonic sensing variables 
long duration;
int currDistance;
bool detected = false;
int detectCheck[25];
int currDetect = 0;
int detectAvg= 0;

//Door status
bool doorLocked = false;


ISR(TIMER0_COMPA_vect) {        //Timer interrupt ISR (Interrupts when overflow)
    overflow_count++;
}

double customMillis(){ // returns time since boot up in seconds
  current_count = TCNT0; // Ticks every 8 clock cycles
  return (current_count + (double)(overflow_count*255))/250000.000000;
}

void setup() {
  cli();
  pinMode(buttonPort,INPUT);
  pinMode(servoPort, INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(backupPort, INPUT);
  // LED array pin setup
  for(int r = 0; r < NUMOFROWS; r++) {
    pinMode(row[r], OUTPUT);
  }
  for(int c = 0; c < NUMOFCOLS; c++) {
    pinMode(col[c], OUTPUT);
    digitalWrite(col[c], HIGH);
  }
  Serial.begin(9600);
  TCCR0B = 0; // Resets timer0
  TCCR0B |= (3 <<0); // sets prescalar to 64 (250000 Hz)
  TIMSK0 |= (3 << 0); // enables overflow and OCR interrupts 
  OCR0A = 255; // overflow interrupt at 255 clock cycles
  //Lock door on bootup

  for(int i = 0; i < 24; i++){
    detectCheck[i] = 0;
  }
  
  sei();
  doorLock();

}

void loop() {
  //ULTRASONIC CALCULATIONS 
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  currDistance= duration*0.034/2;
  //----------------------
  //Serial.println(currDistance);

  if(detected == false)
  {
   if(currDistance <= 40 && currDistance < 400){ // Enter the knock detection once ultrasoncic detects something close
    Serial.print("SENSED: ");
    Serial.println(customMillis(),4);
    detected = true;
    currDetect = 0;

    //welcome
    writeDisplayAnimation(arrow1, .080);
    writeDisplayAnimation(arrow2, .080);
    writeDisplayAnimation(arrow3, .080);
    writeDisplayAnimation(arrow4, .080);
    writeDisplayAnimation(arrow5, 0.080);
    writeDisplayAnimation(arrow6, 1.2);
   }
  
  }

  if(detected == true)
  {
    
    if(doorLocked == true) // Only listen for knocks if the door is actually locked
    {
      writeDisplayStatic(full);
      knockSensorReading = analogRead(knockSensor);
      //Serial.println(knockSensorReading);
      //if(knockSensorReading >= knockSoundThreshold && customMillis() > 0.5){ //First knock (Ignores first 0.5 seconds because the sensor is setting up
      if(digitalRead(backupPort) == HIGH){
        knockListen();
      }
    }
    else
      writeDisplayStatic(blue);
    // Button to lock the door
    if(digitalRead(buttonPort) == HIGH){
      doorLock();
      Serial.print("Door Locked: ");
      Serial.println(customMillis(),4); 
    }
    if(currDistance >400)
      currDistance = 10;
    detectCheck[currDetect] = currDistance;
    
    for(int i = 0; i < 24; i++){
      detectAvg += detectCheck[i];
    }
    if(detectAvg/9 > 500){
      detected = false;
      writeDisplayStatic(empty);
      doorLock();
      Serial.print("User not detected, door Locked: ");
      Serial.println(customMillis(),4); 
    }
    currDetect++;
    
    if(currDetect == 24)
      currDetect = 0;
    detectAvg = 0;
  }
 
    

}

void knockListen(){
  Serial.print("Now Listening: "); 
  Serial.println(customMillis(),4);
  double startTime = customMillis(); 
  double prevKnockTime = customMillis();

  knockNumber = 0;
    do
    {
      if(knockNumber != 0){ // Do not re-check the first knock
        knockSensorReading = analogRead(knockSensor);
      }
      //if(knockSensorReading >= knockSoundThreshold){ // If detect knock
      if(digitalRead(backupPort) == HIGH){  
        Serial.print("Knock ");
        Serial.print(knockNumber+1);
        Serial.print(": ");
        Serial.println(customMillis(),4);
        knockReadings[knockNumber] = customMillis() - prevKnockTime; // Record time between current knock and prev knock
        prevKnockTime = customMillis(); // Set the current knock to the prev knock
        knockNumber += 1;
        writeDisplayAnimation(empty, 0.05);
        writeDisplayStatic(full);
        delay(postKnockWait); 
      } 
         
    }while((customMillis() - startTime) < maxWait  && (knockNumber < maxKnocks)); // Keep looping while within time or less than max number of knocks
    // Check if knock sequence was valid
    if (knockCheck() == true){
      doorUnlock();
       Serial.print("Open: ");
       Serial.println(customMillis(),4);
        //correct
        for(int i = 0; i <3; i++) {
          writeDisplayAnimation(circle1, .10);
          writeDisplayAnimation(circle2, .10);
          writeDisplayAnimation(circle3, .10);
          writeDisplayAnimation(circle2, .10);
        }

    }
    else{
      Serial.print("Incorrect Code: ");
      Serial.println(customMillis(),4); 
      //incorrect
      Serial.print("Lock Start: ");
      Serial.println(customMillis(),4); 
      writeDisplayAnimation(five, 1);
      writeDisplayAnimation(four, 1);
      writeDisplayAnimation(three, 1);
      writeDisplayAnimation(two, 1);
      writeDisplayAnimation(one, 1);//Lock for 5 seconds 
      Serial.print("Lock End: ");
      Serial.println(customMillis(),4);
      
    }
    
    
  }

bool knockCheck(){
  // First check that there are 5 knocks inputted
  if (knockNumber != maxKnocks)
    return false;

  double tolerance = 0.0;
  for (int i = 0; i < maxKnocks; i++){
    // Use a tolerance so that the inputed code does not need to be
    // exactly equal to the secret code
    tolerance = abs(knockReadings[i] - secretKnockKey[i]);
    //Serial.println(tolerance); 
    if(tolerance > rejectKnockThreshold){
      return false;
    }
  }
  
  return true;
}


// 1350 is the pulse length for 90 degress
// 2100 is the pulse length for 180 degrees 
void doorUnlock(){
    if(doorLocked == true){
      for(int pos = 2100; pos > 1350; pos-=20){ //Increment form 180 degrees to 90 degrees
         digitalWrite(servoPort, HIGH);
         delayMicroseconds(pos);
         digitalWrite(servoPort, LOW);
         delay(20);
      }
      doorLocked = false;
    }

  
}

void doorLock(){
  if(doorLocked == false){
    for(int pos = 1350; pos < 2100; pos+=20){ //Increment form 90 degrees to 180 degrees
       digitalWrite(servoPort, HIGH);
       delayMicroseconds(pos);
       digitalWrite(servoPort, LOW);
       delay(20);
    }
    doorLocked = true;
  }
}










//LED Functions



void turnOnLight(int r, int c){
  digitalWrite(r, HIGH);
  digitalWrite(c, LOW);
}

void turnOffLight(int r, int c){
  digitalWrite(r, LOW);
  digitalWrite(c, HIGH);
}

void writeDisplayAnimation(int ledMatrix[NUMOFROWS][NUMOFCOLS], double displayTime){ 

  //Serial.print("LED Pattern start: ");
  //Serial.println(customMillis(),4);
  double startTime = customMillis();
  while (customMillis() - startTime < displayTime){
    for (int r = 0; r < NUMOFROWS; r++){
      for (int c = 0; c < NUMOFCOLS; c++){
        if (ledMatrix[r][c] == 1){
          turnOnLight(row[r],col[c]);
          delay(0.5);
          turnOffLight(row[r],col[c]);
        }
        else{
          turnOffLight(row[r],col[c]);
        } 
      }
    }  
  }
  //Serial.print("LED Pattern end: ");
 // Serial.println(customMillis(),4);
}

void writeDisplayStatic(int ledMatrix[NUMOFROWS][NUMOFCOLS]){ 

  for (int r = 0; r < NUMOFROWS; r++){
    for (int c = 0; c < NUMOFCOLS; c++){
      if (ledMatrix[r][c] == 1){
        turnOnLight(row[r],col[c]);
      }
      else{
        turnOffLight(row[r],col[c]);
      } 
    }
  }  
  

}


