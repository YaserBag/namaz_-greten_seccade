#include <SimpleSDAudio.h>
const int Sabahbtn = 2;
const int OgleBtn = 3;
const int AksamBtn = 5;
const int IkindiBtn = 6;
const int YatsiBtn = 7;
const int DurdurmaBtn = 8;
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int buttonState5 = 0;
int buttonState6 = 0;
int deger = 0;
void setup() {

  pinMode(Sabahbtn, INPUT);
  pinMode(OgleBtn, INPUT);
  pinMode(AksamBtn, INPUT);
  pinMode(IkindiBtn, INPUT);
  pinMode(YatsiBtn, INPUT);
  pinMode(DurdurmaBtn, INPUT);
  SdPlay.setSDCSPin(4);

  if (!SdPlay.init(SSDA_MODE_FULLRATE | SSDA_MODE_MONO | SSDA_MODE_AUTOWORKER))
  {
    while (1);
  }

}

void loop() {

  buttonState1 = digitalRead(Sabahbtn);
  buttonState2 = digitalRead(OgleBtn);
  buttonState3 = digitalRead(AksamBtn);
  buttonState4 = digitalRead(IkindiBtn);
  buttonState5 = digitalRead(YatsiBtn);
  buttonState6 = digitalRead(DurdurmaBtn);



  if (buttonState1 == HIGH )  {
    SdPlay.setFile("sabah.wav");
    SdPlay.play();    
  }
    if (buttonState2 == HIGH )  {
    SdPlay.setFile("ogle.wav");
    SdPlay.play();    
  }
    if (buttonState3 == HIGH )  {
    SdPlay.setFile("ikindi.wav");
    SdPlay.play();    
  }
    if (buttonState4 == HIGH )  {
    SdPlay.setFile("aksam.wav");
    SdPlay.play();    
  }
    if (buttonState5 == HIGH )  {
    SdPlay.setFile("yatsi.wav");
    SdPlay.play();    
  }
  if (buttonState6 == HIGH   )  {
    SdPlay.pause();
  }



}














