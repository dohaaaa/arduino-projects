int  duration;
int  distance;
void setup()
{
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(7,OUTPUT);//trigger
pinMode(8,INPUT);//echo
Serial.begin(9600);
}

void loop()
{
digitalWrite(7,LOW);
delayMicroseconds(2);
digitalWrite(7,HIGH);
delayMicroseconds(10);
digitalWrite(7,LOW);
duration=pulseIn(8,HIGH);
distance=( (duration/2)*0.034);

Serial.println(distance);

if(distance<30){
digitalWrite(12,HIGH);
digitalWrite(13,HIGH);

}
else if(distance>=30){
digitalWrite(12,0);
digitalWrite(13,0);

}}
