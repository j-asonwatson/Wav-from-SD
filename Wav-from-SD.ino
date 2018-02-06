#include <SD.h>                      // need to include the SD library
//#define SD_ChipSelectPin 53  //example uses hardware SS pin 53 on Mega2560
//#define SD_ChipSelectPin 4  //example uses hardware SS pin 4 on Nano
#define SD_ChipSelectPin 8  //using digital pin 4 on arduino uno
#include <TMRpcm.h>
#include <SPI.h>

TMRpcm tmrpcm;   // create an object for use in this sketch


void setup(){

  tmrpcm.speakerPin = 9; //5,6,11 or 46 on Mega, 9 on Uno, Nano, etc
  //tmrpcm.setVolume(10);

  Serial.begin(9600);
  if (!SD.begin(SD_ChipSelectPin)) {  // see if the card is present and can be initialized:
    Serial.println("SD fail");  
    return;   // don't do anything more if not
  }
  //tmrpcm.play("James.wav"); //the sound file "James.wav" will play each time the arduino powers up, or is reset
}



void loop(){  

long randomplay = random(1000,60000);
delay(randomplay);
tmrpcm.play("James.wav");
 
  
  } //end of void loop()
