#include <SoftwareSerial.h>

SoftwareSerial gsmSerial(9, 5); //RX, TX

void setup()
{
   gsmSerial.begin(9600); // Setting the baud rate of GSM Module
   Serial.begin(9600);    // Setting the baud rate of Serial Monitor (Arduino)
   delay(1000);
   Serial.println("Preparing to send SMS");
   SendMessage();
}

void loop()
{

}
void SendMessage()
{
   Serial.println("Setting the GSM in text mode");
   gsmSerial.println("AT+CMGF=1\r");
   delay(2000);
   Serial.println("Sending SMS to the desired phone number!");
   gsmSerial.println("AT+CMGS=\"+xxxxxxxxxxx\"\r");
   // Replace x with mobile number
   delay(2000);

   gsmSerial.println("Hello from SIM900");    // SMS Text
   delay(200);
   gsmSerial.println((char)26);               // ASCII code of CTRL+Z
   delay(2000);
}

#include <iostream>
using namespace std;
int main()
{
  int arr[]={11, 22, 33, 44, 55};
  int n=0;
  while(n<=4)
  {
    cout<<arr[n]<<endl;
    n++;
  }
  return 0;
}

let contacts = {
  contact1: "+639010101019",
  contact2: "+639010101019",
  contact3: "+639010101019",
};
for (let i in contacts) {
  console.log(contacts[i] + " ");
}