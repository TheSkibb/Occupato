int outputValue1 = 0;
int outputValue2 = 0;
int outputValue3 = 0;
int outputValue4 = 0;

int inputValue1 = 0;
int inputValue2 = 0;
int inputValue3 = 0;
int inputValue4 = 0;

int output1 = 2;
int output2 = 3;
int output3 = 4;
int output4 = 5;

int input1 = 8;
int input2 = 9;
int input3 = 10;
int input4 = 11;

void setup() {
  pinMode(input1, INPUT);
  pinMode(input2, INPUT);
  pinMode(input3, INPUT);
  pinMode(input4, INPUT);

  pinMode(output1, OUTPUT);
  pinMode(output2, OUTPUT);
  pinMode(output3, OUTPUT);
  pinMode(output4, OUTPUT);

  Serial.begin(9600);
}

String getStatus(){

  String output = "";

  delay(10);
  output += checkColumn(output1);
  delay(10);
  output += checkColumn(output2);
  delay(10);
  output += checkColumn(output3);
  delay(10);
  output += checkColumn(output4);
  
  return output;
}

String checkColumn(int column){
  digitalWrite(column, HIGH);
  int inp1 = digitalRead(input1);
  int inp2 = digitalRead(input2);
  int inp3 = digitalRead(input3);
  int inp4 = digitalRead(input4);
  String output = "";
  
  if(inp1 != 0){
    output += 1;
  }
  else{
    output += 0;
  }
  if(inp2 != 0){
    output += 1;
  }
  else{
    output += 0;
  }
  if(inp3 != 0){
    output += 1;
  }
  else{
    output += 0;
  }
  if(inp4 != 0){
    output += 1;
  }
  else{
    output += 0;
  }
  digitalWrite(column, LOW);
  return output;
}

 void loop() {
  // put your main code here, to run repeatedly:
  delay(500);
  String seatStatus = getStatus();
  String output = "";
  output+=seatStatus;
  Serial.print(output + "\r\n");
}
