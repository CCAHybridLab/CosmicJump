const int leftstart = 1;
const int increase = 4;
const int decrease = 3;
const int incline = 6;
const int decline = 7;
const int startButton = 2;
const int control = 12;
const int inPin = 13;
int val=0;

int testBegin = 0;
int testSpeed = 0;

void setup()
{
 // no setup needed
 pinMode(leftstart, OUTPUT);
 pinMode(increase, OUTPUT);
 pinMode(decrease, OUTPUT);
 pinMode(incline, OUTPUT);
 // pinMode(increase, OUTPUT);
 pinMode(decline, OUTPUT);
 pinMode(startButton, OUTPUT);
// button
 pinMode(control, INPUT_PULLUP);
 pinMode(inPin, OUTPUT);
 
 digitalWrite(leftstart, HIGH);
 digitalWrite(increase, HIGH);
 digitalWrite(decrease, HIGH);
 digitalWrite(incline, HIGH);
 // digitalWrite(increase, HIGH);
 digitalWrite(decline, HIGH);
 digitalWrite(startButton, HIGH);
 // pinMode(increase, OUTPUT);  
}

void loop()
{
  val = digitalRead(control); 
  if(val == HIGH){
 // left start begin 
 if(testBegin == 0){
   for (int i = 0; i < 3; i++){
   digitalWrite(leftstart, LOW);
   delay(1000);
   digitalWrite(leftstart, HIGH);
   delay(1000);
     }
   testBegin =1;
   }
   // left start  end
   // right part start begin 


   // right part start end
 if (testSpeed == 0)
 {
   /* code */
   // start 
   digitalWrite(startButton, LOW);
   delay(1000);
   digitalWrite(startButton, HIGH);
   // start 
   // increase spped  from 0 to 30 M/h begin 

     for (int i = 0; i < 30; i++){
        digitalWrite(increase, LOW);
        delay(500);
        digitalWrite(increase, HIGH);
        delay(400);
       }
     // increase speed from 0 to 30 M/h end
     testSpeed =1;
       delay(30000);
 }

     // wait 30 seconds 

       // decrease speed to 15 M/h begin 
      for (int i = 0; i < 15; i++){
        digitalWrite(decrease, LOW);
        delay(500);
        digitalWrite(decrease, HIGH);
        delay(400);
       }
       // decrease speed to 15 M/h end
     // wait 20 seconds 
       delay(20000);
        // Incline angle to MAX(5 times ) begin 
   for (int i = 0; i < 5; i++){
        digitalWrite(incline, LOW);
        delay(1000);
        digitalWrite(incline, HIGH);
        delay(500);
       }
      // Incline angle to MAX(5 times ) end
     // wait 20 seconds 
       delay(20000);
      // Decline angle to middle(2 times ) begin 
       for (int i = 0; i < 2; i++){
        digitalWrite(decline, LOW);
        delay(1000);
        digitalWrite(decline, HIGH);
        delay(500);
       }
   // Decline angle to middle(2 times ) end
   // increase speed to 18 M/h start
       for (int i = 0; i < 3; i++){
        digitalWrite(increase, LOW);
        delay(1000);
        digitalWrite(increase, HIGH);
        delay(500);
       } 
    //Increase speed to 18 M/h end   
   // wait 15 seconds
       delay(15000);
       // flat again begin 
       for (int i = 0; i < 3; i++){
        digitalWrite(decline, LOW);
        delay(1000);
        digitalWrite(decline, HIGH);
        delay(500);
       }
       // flat again end 
       delay(30000);
       // increase spped to 20 M/h start
       for (int i = 0; i < 2; i++){
        digitalWrite(increase, LOW);
        delay(1000);
        digitalWrite(increase, HIGH);
        delay(500);
       }
       // increase spped to 20 M/h end
   // wait 30 second;
       delay(30000);

       // increse to speed 30 begin 
       for (int i = 0; i < 10; i++){
        digitalWrite(increase, LOW);
        delay(1000);
        digitalWrite(increase, HIGH);
        delay(500);
       }
       delay(60000);
       // increase to speed 30 end
