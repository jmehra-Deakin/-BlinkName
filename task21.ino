



int led1 = D7;// Instead of writing D7 over and over again, we'll write led2

int dash = 2700;
int dot = 500;
int lowtime = 700;

void setup() {


  pinMode(led1, OUTPUT);
  

}


void loop() {
  // To blink the LED, first we'll turn it on...
  Dash();
  Dash(); //M uptill here
  
  Dot(); // E
  
  Dot();
  Dot();
  Dot();
  Dot(); //H 
  
  Dot();
  Dash();
  Dot(); // R
  
  Dot();
  Dash(); // A      MEHRA
  
    
}

void Dash()
{
    digitalWrite(led1, HIGH);
    delay(dash);
    
    digitalWrite(led1,LOW);
    delay(lowtime);
}

void Dot()
{
     digitalWrite(led1, HIGH);
    delay(dot);
  
    digitalWrite(led1, LOW);
    delay(lowtime);
    
}

