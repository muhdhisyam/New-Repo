#include <Wire.h>
#include <Adafruit_ADS1015.h>
 
Adafruit_ADS1115 ads1115(0x48); // construct an ads1115 at address 0x48

void setup(void)
{
  Serial.begin(9600);
  ads1115.setGain(GAIN_TWO);
  ads1115.begin();  // Initialize ads1115
}

void loop(void) 
{
  int16_t v1;
  int16_t v2;
 
  v1 = ads1115.readADC_Differential_0_1();
  v2 = ads1115.readADC_Differential_2_3();
  //Serial.print("Differential: "); 
  //Serial.print(results); Serial.print("("); Serial.print(results * 1); Serial.println("mV)");

  Serial.println(v1);
  //Serial.print(",");
  //Serial.println(v2);
  
  delay(100);

}
