#include "AIStarter.h"
void setup(){
	AIStarter_SmartBotInit();
	AIStarter_SmartBotSetKeyInit();
	Serial.begin(115200);
	AIStarter_SmartBotSetColorWB(COLORSENOR2);
	AIStarter_SmartBotSetColorWB(COLORSENOR1);
	AIStarter_SmartBotSetColorSenor(COLORSENOR2,1);
	AIStarter_SmartBotSetColorSenor(COLORSENOR1,1);
}

void loop(){
	if(((AIStarter_SmartBotDetColorSenor(COLORSENOR2,RCOLOR)) || (AIStarter_SmartBotDetColorSenor(COLORSENOR1,RCOLOR)))){
		Serial.print("red");
		delay(2*1000);
	}else{
		Serial.print("nope :c");
		delay(2*1000);
  }

}
