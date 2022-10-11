int outputValue1 = 0;
int outputValue2 = 0;
int outputValue3 = 0;
int outputValue4 = 0;

int inputValue1 = 0;
int inputValue2 = 0;
int inputValue3 = 0;
int inputValue4 = 0;

int output1 = 8;
int output2 = 9;
int output3 = 10;
int output4 = 11;

int input1 = 2;
int input2 = 3;
int input3 = 4;
int input4 = 5;

void setup() {
  pinMode(input1, INPUT);
  pinMode(input2, INPUT);
  pinMode(input3, INPUT);
  pinMode(input4, INPUT);

  pinMode(output1, INPUT);
  pinMode(output2, INPUT);
  pinMode(output3, INPUT);
  pinMode(output4, INPUT);

  Serial.begin(9600);
}

// put your setup code here, to run once:
  

  void test() {
    
  }

 int inputs[]= {input1, input2, input3, input4};
 int outputs[]= {output1, output2, output3, output4};

 String getStatus(){
   String status = "";
   for(int i = 0; i < sizeof(outputs); i++){
     String columnStatus = checkColumn(outputs[i]);
     status += columnStatus;
   }
   return status;
 }
 String checkColumn(int column){
   String status = "";
   digitalWrite(column, 1);
   for(int i = 0; i < sizeof(inputs); i++){
     int rowStatus = digitalRead(inputs[i]);
     if(rowStatus != 0){
       status += 1;
     }
     else{
       status += 0;
     }
     return status;
   }
 }
  String checkRow(int row){
 }

 void loop() {
  // put your main code here, to run repeatedly:
  delay(500);
  //String status = getStatus();
  String output = "";
  Serial.print(output + "\r\n");
}
