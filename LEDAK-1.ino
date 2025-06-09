#define l1 13   
//#define l2 3
//#define l3 4

void setup() 
{
  pinMode(l1, OUTPUT);   
 // pinMode(l2, OUTPUT);   
  //pinMode(l3, OUTPUT);    

}

void loop() {
  myfunction();   
}

void myfunction() {
  digitalWrite(l1, HIGH);    
  delay(100); 
 // digitalWrite(l2, HIGH);    
  //delay(100); 
  //digitalWrite(l3, HIGH);    
  //delay(100);               
  
  digitalWrite(l1, LOW);   
  delay(200);   
  //digitalWrite(l2, LOW);   
  //delay(200);   
  //digitalWrite(l3, LOW);   
  //delay(200);              
}
