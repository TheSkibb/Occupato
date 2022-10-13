int outputValue1 = 0;

int inputValue1 = 0;

int output1 = 2;




void setup() {
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(output1, OUTPUT);
  
  Serial.begin(9600);
}

 void loop() {
  // put your main code here, to run repeatedly:
  delay(500);
  String output = "";
  digitalWrite(2, HIGH);
  int input1 = digitalRead(8);
  int input2 = digitalRead(9);
  int input3 = digitalRead(10);
  int input4 = digitalRead(11);
  if(input1 == 0){
    output += "0";
  }
  else{
    output += "1";
  }
  if(input2 == 0){
    output += "0";
  }
  else{
    output += "1";
  }
  if(input3 == 0){
    output += "0";
  }
  else{
    output += "1";
  }
  if(input4 == 0){
    output += "0";
  }
  else{
    output += "1";
  }
  
  
  Serial.print(output + "val\r\n");
}
