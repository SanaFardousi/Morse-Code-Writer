#include <Arduino.h>
#include <Stepper.h>
#include <Servo.h>
#include <string.h>

const int stepsPerRevolution = 150; // This is the variable for the stepper motor 
String sentence = "*hello";   //Change this variable to write different words but only write in small letters and start your word with "*" 
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);
Servo myServo;

// This is the method that makes the robot write a dot
void dot() {
  Serial.println("dot start");
  myServo.write(160);
  delay(1000);
  myServo.write(90);
  delay(1000);
  myStepper.step(stepsPerRevolution);
  delay(1000);
  Serial.println("dot done");
}

// This is the method that makes the robot write a dash
void dash() {
  Serial.println("dash start");
  myServo.write(160);
  delay(1000);
  myStepper.step(stepsPerRevolution);
  delay(1000);
  myServo.write(90);
  delay(1000);
  myStepper.step(stepsPerRevolution);
  delay(1000);
  Serial.println("dash done");
}

// This is the method that makes the robot leave a space between each letter
void space() {
  Serial.println("space start");
  myServo.write(90);
  delay(1000);
  myStepper.step(200);
  delay(1000);
  Serial.println("space done");
}

// This is the method that makes the robot leave a bigger space between each word
void bigSpace() {
  myServo.write(90);
  myStepper.step(250);
  delay(1000);
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myStepper.setSpeed(100);
  myServo.attach(5);
  

    int first = sentence.indexOf('*');
    // this for loop goes through each letter of the string and then calls the right methods to write it down
  for (int i = 0; i < sentence.length(); i++) {
        if (sentence.charAt(first + i) == 'a') {
            Serial.print(".- ");
            dot();
            dash();
            space();
        } else if (sentence.charAt(first + i) == 'b') {
            Serial.print("-... ");
            dash();
            dot();
            dot();
            dot();
            space();
        } else if (sentence.charAt(first + i) == 'c') {
            Serial.print("-.-. ");
            dash();
            dot();
            dash();
            dot();
            space();
        } else if (sentence.charAt(first + i) == 'd') {
            Serial.print("-.. ");
            dash();
            dot();
            dot();
            space();
        } else if (sentence.charAt(first + i) == 'e') {
            Serial.print(". ");
            dot();
            space();
        } else if (sentence.charAt(first + i) == 'f') {
            Serial.print("..-. ");
            dot();
            dot();
            dash();
            dot();
            space();
        } else if (sentence.charAt(first + i) == 'g') {
            Serial.print("--. ");
            dash();
            dash();
            dot();
            space();
        } else if (sentence.charAt(first + i) == 'h') {
            Serial.print(".... ");
            dot();
            dot();
            dot();
            dot();
            space();
        } else if (sentence.charAt(first + i) == 'i') {
            Serial.print(".. ");
            dot();
            dot();
            space();
        } else if (sentence.charAt(first + i) == 'j') {
            Serial.print(".--- ");
            dot();
            dash();
            dash();
            dash();
            space();
        } else if (sentence.charAt(first + i) == 'k') {
            Serial.print("-.- ");
            dash();
            dot();
            dash();
            space();
        } else if (sentence.charAt(first + i) == 'l') {
            Serial.print(".-.. ");
            dot();
            dash();
            dot();
            dot();
            space();
        } else if (sentence.charAt(first + i) == 'm') {
            Serial.print("-- ");
            dash();
            dash();
            space();
        } else if (sentence.charAt(first + i) == 'n') {
            Serial.print("-. ");
            dash();
            dot();
            space();
        } else if (sentence.charAt(first + i) == 'o') {
            Serial.print("--- ");
            dash();
            dash();
            dash();
            space();
        } else if (sentence.charAt(first + i) == 'p') {
            Serial.print(".--. ");
            dot();
            dash();
            dash();
            dot();
            space();
        } else if (sentence.charAt(first + i) == 'q') {
            Serial.print("--.- ");
            dash();
            dash();
            dot();
            dash();
            space();
        } else if (sentence.charAt(first + i) == 'r') {
            Serial.print(".-. ");
            dot();
            dash();
            dot();
            space();
        } else if (sentence.charAt(first + i) == 's') {
            Serial.print("... ");
            dot();
            dot();
            dot();
            space();
        } else if (sentence.charAt(first + i) == 't') {
            Serial.print("- ");
            dash();
            space();
        } else if (sentence.charAt(first + i) == 'u') {
            Serial.print("..- ");
            dot();
            dot();
            dash();
            space();
        } else if (sentence.charAt(first + i) == 'v') {
            Serial.print("...- ");
            dot();
            dot();
            dot();
            dash();
            space();
        } else if (sentence.charAt(first + i) == 'w') {
            Serial.print(".-- ");
            dot();
            dash();
            dash();
            space();
        } else if (sentence.charAt(first + i) == 'x') {
            Serial.print("-..- ");
            dash();
            dot();
            dot();
            dash();
            space();
        } else if (sentence.charAt(first + i) == 'y') {
            Serial.print("-.-- ");
            dash();
            dot();
            dash();
            dash();
            space();
        } else if (sentence.charAt(first + i) == 'z') {
            Serial.print("--.. ");
            dash();
            dash();
            dot();
            dot();
            space();
        } else if (sentence.charAt(first + i) == ' ') {
            Serial.print("/ ");
            bigSpace();
        }  
    
  }
}

void loop() {
  //Don't write anything here
}
