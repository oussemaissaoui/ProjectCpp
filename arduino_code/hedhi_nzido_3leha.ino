/***************************************************
  This is an example sketch for our optical Fingerprint sensor

  Designed specifically to work with the Adafruit BMP085 Breakout
  ----> http://www.adafruit.com/products/751

  These displays use TTL Serial to communicate, 2 pins are required to
  interface
  Adafruit invests time and resources providing this open source code,
  please support Adafruit and open-source hardware by purchasing
  products from Adafruit!

  Written by Limor Fried/Ladyada for Adafruit Industries.
  BSD license, all text above must be included in any redistribution
 ****************************************************/

#include <Adafruit_Fingerprint.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

int ledverte=11;
int ledrouge=13;
int tone_pin =10;
String last_command;

#if (defined(__AVR__) || defined(ESP8266)) && !defined(__AVR_ATmega2560__)
// For UNO and others without hardware serial, we must use software serial...
// pin #2 is IN from sensor (GREEN wire)
// pin #3 is OUT from arduino  (WHITE wire)
// Set up the serial port to use softwareserial..
SoftwareSerial mySerial(2, 3);

#else
// On Leonardo/M0/etc, others with hardware serial, use hardware serial!
// #0 is green wire, #1 is white
#define mySerial Serial1

#endif


Adafruit_Fingerprint finger = Adafruit_Fingerprint(&mySerial);

uint8_t id;

void setup()
{
  Serial.begin(9600);
  while (!Serial);  // For Yun/Leo/Micro/Zero/...
  delay(100);
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print(":");lcd.clear();
  delay(500);
  lcd.print(":)");delay(100);lcd.clear();
  lcd.print(":) A");delay(100);lcd.clear();
  lcd.print(":) Al");delay(100);lcd.clear();
  lcd.print(":) All");delay(100);lcd.clear();
  lcd.print(":) AllE");delay(100);lcd.clear();
  lcd.print(":) AllEc");delay(100);lcd.clear();
  lcd.print(":) AllEco");delay(100);lcd.clear();
  lcd.print(":) AllEco -");delay(100);lcd.clear();
  lcd.print(":) AllEco -_");delay(100);lcd.clear();
  lcd.print(":) AllEco -_-");
  delay(500);
  pinMode(ledverte, OUTPUT); // declare pin 13 as output
  pinMode(ledrouge, OUTPUT);
  Serial.println("\n\nAdafruit Fingerprint sensor enrollment");

  // set the data rate for the sensor serial port
  finger.begin(57600);

  if (finger.verifyPassword()) {
    Serial.println("Found fingerprint sensor!");
  } else {
    Serial.println("Did not find fingerprint sensor :(");
    while (1) { delay(1); }
  }

  Serial.println(F("Reading sensor parameters"));
  finger.getParameters();
  Serial.print(F("Status: 0x")); Serial.println(finger.status_reg, HEX);
  Serial.print(F("Sys ID: 0x")); Serial.println(finger.system_id, HEX);
  Serial.print(F("Capacity: ")); Serial.println(finger.capacity);
  Serial.print(F("Security level: ")); Serial.println(finger.security_level);
  Serial.print(F("Device address: ")); Serial.println(finger.device_addr, HEX);
  Serial.print(F("Packet len: ")); Serial.println(finger.packet_len);
  Serial.print(F("Baud rate: ")); Serial.println(finger.baud_rate);
}

uint8_t readnumber(void) {
  uint8_t num = 0;

  while (num == 0) {
    while (! Serial.available());
    num = Serial.parseInt();
  }
  return num;
}

void processSerialCommand() {
  String command = Serial.readStringUntil('\n');

  if (command.startsWith("ENROLL:")) {
    
    int fingerprintID = command.substring(7).toInt();
    if(getFingerprintEnroll(fingerprintID)==true)
    {
    for(int i=0;i<15;i++)
      {
         String message = "Stored ID:" + String(fingerprintID);
         Serial.print(message.c_str());
         Serial.print(" ");
        
      }
      
     
    }
    last_command="ENROLL:";
  } 
  else if(command.startsWith("EMPTY_ALL")){
    finger.emptyDatabase();
    Serial.println("Now database is empty :)");
    last_command="EMPTY_ALL";
  }
  else if(command.startsWith("SEARCH")){
    getFingerprintID();
    last_command="SEARCH";
  }
  else if(command.startsWith("READY")){
    lcd.clear();
    printWithDelayAndClear("Are You Ready ?");
    last_command="READY";
  }
  else if(command.startsWith("HOLD")){
    lcd.clear();
    printWithDelayAndClear("touch Me UwU");
    last_command="HOLD";
  }
  else if (command.startsWith("SUCCESS:")) {
      String name = command.substring(8);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print(name);
      last_command="SUCCESS:";
    }
  else if (command.startsWith("BYE")) {
      lcd.clear();
      printWithDelayAndClear("Bye Bye");
      last_command="BYE";
    }
  
  
}


void printWithDelayAndClear(String text) {
  //lcd.begin(16, 2);  // Set the LCD dimensions (change as needed)
  for (int i = 0; i < text.length(); ++i) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(text.substring(0, i + 1));
    delay(100);  
  }
}

int eye_state=1;

void loop()                     // run over and over again
{

  processSerialCommand();
  delay(100);

  if(last_command=="HOLD")
  {
    
    if(eye_state==1)
    {
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("touch Me UwU");
      delay(150);
      eye_state=0;
      
    }
    else
    {
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("touch Me owo");
      delay(150);
       eye_state=1;

    }

  }

}

uint8_t getFingerprintEnroll(int fingerprintID) {

  int p = -1;
  //Serial.print("Waiting for valid finger to enroll as #"); Serial.println(fingerprintID);
  while (p != FINGERPRINT_OK) {
    p = finger.getImage();
    switch (p) {
    case FINGERPRINT_OK:
      //Serial.println("Image taken");
      lcd.clear();
      lcd.print("Image taken");
      delay(500);
      break;
    case FINGERPRINT_NOFINGER:
      Serial.println("error");
      break;
    case FINGERPRINT_PACKETRECIEVEERR:
      Serial.println("error");
      break;
    case FINGERPRINT_IMAGEFAIL:
      Serial.println("error");
      break;
    default:
      Serial.println("error");
      break;
    }
  }

  // OK success!

  p = finger.image2Tz(1);
  switch (p) {
    case FINGERPRINT_OK:
      //Serial.println("Image converted");
      lcd.clear();
      lcd.print("Image converted");
      delay(500);
      break;
    case FINGERPRINT_IMAGEMESS:
      Serial.println("error");
      return p;
    case FINGERPRINT_PACKETRECIEVEERR:
      Serial.println("error");
      return p;
    case FINGERPRINT_FEATUREFAIL:
      Serial.println("error");
      return p;
    case FINGERPRINT_INVALIDIMAGE:
      Serial.println("error");
      return p;
    default:
      Serial.println("error");
      return p;
  }

  //Serial.println("Hold your  finger");
  delay(500);
    
  
  //Serial.print("ID "); Serial.println(fingerprintID);
  p = -1;
  //Serial.println("Place same finger again");
  while (p != FINGERPRINT_OK) {
    p = finger.getImage();
    switch (p) {
    case FINGERPRINT_OK:
      //Serial.println("Image taken");
      lcd.clear();
      lcd.print("Image Taken V2");
      delay(500);
      
      break;
    case FINGERPRINT_NOFINGER:
      Serial.println("error");
      break;
    case FINGERPRINT_PACKETRECIEVEERR:
      Serial.println("error");
      break;
    case FINGERPRINT_IMAGEFAIL:
      Serial.println("error");
      break;
    default:
      Serial.println("error");
      break;
    }
  }

  // OK success!

  p = finger.image2Tz(2);
  switch (p) {
    case FINGERPRINT_OK:
      //Serial.println("Image converted");
      lcd.clear();
      lcd.print("Image Converted V2");
      delay(500);
      break;
    case FINGERPRINT_IMAGEMESS:
      Serial.println("error");
      return p;
    case FINGERPRINT_PACKETRECIEVEERR:
      Serial.println("error");
      return p;
    case FINGERPRINT_FEATUREFAIL:
      Serial.println("error");
      return p;
    case FINGERPRINT_INVALIDIMAGE:
      Serial.println("error");
      return p;
    default:
      Serial.println("error");
      return p;
  }

  // OK converted!
  //Serial.print("Creating model for #");  Serial.println(fingerprintID);

  p = finger.createModel();
  if (p == FINGERPRINT_OK) {
    //Serial.println("Prints matched!");
    lcd.clear();
    lcd.print("ImgV1 V2 Matched");
    delay(500);
  } else if (p == FINGERPRINT_PACKETRECIEVEERR) {
    Serial.println("error");
    return p;
  } else if (p == FINGERPRINT_ENROLLMISMATCH) {
    Serial.println("error");
    return p;
  } else {
    Serial.println("error");
    return p;
  }

  
  p = finger.storeModel(fingerprintID);
  if (p == FINGERPRINT_OK) {
    //Serial.print("Stored ");Serial.print("ID:"); Serial.println(fingerprintID);
    digitalWrite(ledverte, HIGH); // turn on green LED
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("New ID Stored");
    lcd.setCursor(4,1);
    lcd.print(fingerprintID);
    delay(500);
    tone(tone_pin, 3500, 100);
    delay(500);
    tone(tone_pin, 3500, 100);
    delay(100);
    /*String message = "Stored ID:" + String(fingerprintID);
    Serial.write(message.c_str(), message.length());
    Serial.println();
    delay(500);*/
    digitalWrite(ledverte, LOW); // turn on green LED
    
  } else if (p == FINGERPRINT_PACKETRECIEVEERR) {
    Serial.println("error");
    digitalWrite(ledrouge, HIGH); // turn on green LED
    delay(1500);
    digitalWrite(ledrouge, LOW); // turn on green LED
    return p;
  } else if (p == FINGERPRINT_BADLOCATION) {
    Serial.println("Could not store in that location");
    digitalWrite(ledrouge, HIGH); // turn on green LED
    delay(1500);
    digitalWrite(ledrouge, LOW); // turn on green LED
    return p;
  } else if (p == FINGERPRINT_FLASHERR) {
    Serial.println("error");
    digitalWrite(ledrouge, HIGH); // turn on green LED
    delay(1500);
    digitalWrite(ledrouge, LOW); // turn on green LED
    return p;
  } else {
    Serial.println("error");
    digitalWrite(ledrouge, HIGH); // turn on green LED
    delay(1500);
    digitalWrite(ledrouge, LOW); // turn on green LED
    return p;
  }

  return true;
}


uint8_t getFingerprintID() {
  uint8_t p = finger.getImage();
  
  switch (p) {
    case FINGERPRINT_OK:
      Serial.println("Image taken");
      break;
    case FINGERPRINT_NOFINGER:
      // Serial.println("No finger detected");
      Serial.print("*");
      return p;
    case FINGERPRINT_PACKETRECIEVEERR:
      Serial.println("Communication error");
      lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("USER NOT FOUND");
    delay(500);
      return p;
    case FINGERPRINT_IMAGEFAIL:
      Serial.println("Imaging error");
      lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("USER NOT FOUND");
    delay(100);
      return p;
    default:
      Serial.println("Unknown error");
      lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("USER NOT FOUND");
    delay(100);
      return p;
  }
  
  // Image conversion
  p = finger.image2Tz();
  switch (p) {
    case FINGERPRINT_OK:
      Serial.println("Image converted");
      break;
    case FINGERPRINT_IMAGEMESS:
      Serial.println("Image too messy");
      lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("USER NOT FOUND");
    delay(500);
      return p;
    case FINGERPRINT_PACKETRECIEVEERR:
      Serial.println("Communication error");
      lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("USER NOT FOUND");
    delay(500);
      return p;
    case FINGERPRINT_FEATUREFAIL:
      Serial.println("Could not find fingerprint features");
        lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("USER NOT FOUND");
    delay(500);
      return p;
    case FINGERPRINT_INVALIDIMAGE:
      Serial.println("Could not find fingerprint features");
      lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("USER NOT FOUND");
    delay(500);
      return p;
    default:
      Serial.println("Unknown error");
      return p;
  }

  // Fingerprint search
  p = finger.fingerSearch();
  if (p == FINGERPRINT_OK) {
    Serial.println("Found a print match!");
    digitalWrite(ledverte, HIGH); // turn on green LED
    tone(tone_pin, 3000, 250);
    delay(500);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("FOUND ID#");
    delay(500);
    digitalWrite(ledverte, LOW); // turn off green LED
  } else if (p == FINGERPRINT_PACKETRECIEVEERR) {
    Serial.println("Communication error");
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("USER NOT FOUND");
    delay(500);
    return p;
  } else if (p == FINGERPRINT_NOTFOUND) {
    Serial.println("Did not find a match");
    digitalWrite(ledrouge, HIGH); // turn on red LED
    tone(tone_pin, 100, 1500); // activate buzzer
    delay(500);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("USER NOT FOUND");
    delay(500);
    digitalWrite(ledrouge, LOW); // turn off red LED
    return p;
  } else {
    Serial.println("Unknown error");
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("USER NOT FOUND");
    delay(500);
    return p;
  }

  // Found a match!
  Serial.print("Found ID #"); Serial.print(finger.fingerID);
  Serial.print(" with confidence of "); Serial.println(finger.confidence);
  return finger.fingerID;
}
