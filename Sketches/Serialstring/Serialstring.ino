String val;   //Declare a String variable to hold your name
int age;         //Declare an Int variable to hold your age
float height;    //Declare a float variable to hold your height

void setup() {
  Serial.begin(9600);  // turn on Serial Port
  pinMode(13,INPUT);
}

void loop() {
  
  while (Serial.available()==0) {             //Wait for user input
  
  }
  val=Serial.readString();  //Read user input into myName
  val.toLowerCase();
  if(val=="on")
  {
      digitalWrite(13,HIGH);
  }
  if(val=="off")
  {
      digitalWrite(13,LOW);
  }
 
}
