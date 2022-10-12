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

 int inputs[]= {input1, input2, input3, input4};
 int outputs[]= {output1, output2, output3, output4};

 String getStatus(){
   String seatStatus = "";
   for(int i = 0; i < sizeof(outputs)/2; i++){
     String columnStatus = checkRows(outputs[i]);
     seatStatus += columnStatus;
   }
   return seatStatus;
 }

  String checkRows(int column){
    String seatStatus = "";
    for(int i = 0; i < sizeof(inputs)/2; i++){
      int buttonStatus = digitalRead(inputs[i]);
        if(buttonStatus != 0){
        seatStatus += 1;
      }
      else{
        seatStatus += 0;
      }
    }
    return seatStatus;
 }

 void loop() {
  // put your main code here, to run repeatedly:
  delay(500);
  String seatStatus = getStatus();
  String output = "";
  output+=seatStatus;
  Serial.print(output + "\r\n");
}
