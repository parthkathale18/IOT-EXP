int led1= 3;
int led2= 4;
int led3= 5;
int led4= 6;
int led5= 7;


void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  
  Serial.begin(9600);
  Serial.println("ABCDEF");
}

void loop()
{
  
  if(Serial.available()>0){
  int ch=Serial.read();
    Serial.println(ch);
  switch(ch){
  	case 'A':
    	digitalWrite(led1,HIGH);
    	break;
    case 'a':
    	digitalWrite(led1,LOW);
    	break;
    case 'B':
    	digitalWrite(led2,HIGH);
    	break;
    case 'b':
    	digitalWrite(led2,LOW);
    	break;
    case 'C':
    	digitalWrite(led3,HIGH);
    	break;
    case 'c':
    	digitalWrite(led3,LOW);
    	break;
    case 'D':
    	digitalWrite(led4,HIGH);
    	break;
    case 'd':
    	digitalWrite(led4,LOW);
    	break;
    case 'E':
    	digitalWrite(led5,HIGH);
    	break;
    case 'e':
    	digitalWrite(led5,LOW);
    	break;
    
    
    	
  }
  }
 
}