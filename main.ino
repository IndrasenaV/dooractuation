const int m1_forwards = 10;
const int m1_backwards = 11;//assign relay INx pin to arduino pin
const int m2_forwards = 8;
const int m2_backwards = 9;//assign relay INx pin to arduino pin
void setup() {
pinMode(m1_forwards, OUTPUT);//set relay as an output
pinMode(m1_backwards, OUTPUT);//set relay as an output
pinMode(m2_forwards, OUTPUT);//set relay as an output
pinMode(m2_backwards, OUTPUT);//set relay as an output
}
void loop() {
 //Activate the relay one direction, they must be different to move the motor
 moveforward();
 delay(2000); // wait 2 seconds
 stopmotor();//Deactivate both relays to brake the motor
 delay(2000);// wait 2 seconds
// movebackward();//Activate the relay the other direction, they must be different to move the motor
// delay(2000);// wait 2 seconds
// stopmotor();
}

void moveforward(){
  
  digitalWrite(m1_forwards, HIGH);
    digitalWrite(m2_forwards, HIGH);
 digitalWrite(m1_backwards, HIGH);
 digitalWrite(m2_backwards, HIGH);

}

void stopmotor(){
   digitalWrite(m1_forwards, LOW);
    digitalWrite(m2_forwards, LOW);
 digitalWrite(m1_backwards, LOW);
 digitalWrite(m2_backwards, LOW);
}
void movebackward(){
   digitalWrite(m1_forwards, HIGH);
    digitalWrite(m2_forwards, HIGH);
 digitalWrite(m1_backwards, LOW);
 digitalWrite(m2_backwards, LOW);
  
}
