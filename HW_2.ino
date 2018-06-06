//Homework Assignment 2
//CSUN 06.03.18 - Holland Mills <Holland.Mills.632@my.csun.edu>

//Initial String Array
char* Commandments[] = {"Be Passionate","Be Coachable","Be On Time","Be Prepared","Have Great Work Ethics", "Have Tons of Energy", "Mind your Body Language", "Have pleasant Attitude", "Do you best Effort", "Do Extra", "‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐"};

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
Serial.println("ME435L Lab Commandments");
Serial.println("‐‐‐‐‐‐‐‐‐‐‐‐‐‐ ");

//First 5 Commandments
for(int i = 0; i <5; i++){
  Serial.print(i+1);
  Serial.print(".");
  Serial.println(Commandments[i]);
}
Serial.println(Commandments[10]);

//Second 5 Commandments
for(int i = 5; i <10; i++){
  Serial.print(i+1);
  Serial.print(".");
  Serial.println(Commandments[i]);
}
Serial.println(Commandments[10]);
Serial.println(Commandments[10]);

delay(1000);
}
