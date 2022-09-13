int ButtonValue1 = 0;
int ButtonValue2 = 0;
int ButtonValue3 = 0;
int ButtonValue4 = 0;

int Button = 2;
int Button1 = 3;
int Button2 = 4;
int Button3 = 5;
void setup() {
  // put your setup code here, to run once:
  pinMode(Button, INPUT);
  pinMode(Button1, INPUT);
  pinMode(Button2, INPUT);
  pinMode(Button3, INPUT);


  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  ButtonValue1 = digitalRead(Button);
  ButtonValue2 = digitalRead(Button1);
  ButtonValue3 = digitalRead(Button2);
  ButtonValue4 = digitalRead(Button3);

  String output = "";

    delay(500);
    
    //Button 0
  if(ButtonValue1 != 0){
  //if button is pressed then turn the led on
    output += 1;
    
  }
  else{
    //else the button is not pressed, turn it of
    output += 0;
  }
  
  //Button 1
  if(ButtonValue2 != 0){
  //if button is pressed then turn the led on
    output += 2;
    
  }
  else{
    
    //else the button is not pressed, turn it of
    output += 0;

  }
    //Button 2
  if(ButtonValue3 != 0){
  //if button is pressed then turn the led on
    output += 3;
    
  }
  else{
    
    //else the button is not pressed, turn it of
    output += 0;
  }


  //Button 3
  if(ButtonValue4 != 0){
  //if button is pressed then turn the led on
    output += 4;
    
  }
  else{
    //else the button is not pressed, turn it of
    output += 0;
  }

  Serial.print(output + "\r\n");
}
