byte ir_sensor = 2;
byte buzzer = 11;
void setup()
{
pinMode(ir_sensor, INPUT);
pinMode(buzzer, OUTPUT);
}
void loop()
{
int sensor_state = digitalRead(ir_sensor);
if(sensor_state == HIGH)
{
analogWrite(buzzer, 200);
delay(110);