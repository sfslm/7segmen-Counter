#define a 0
#define b 1
#define c 2
#define d 3
#define e 4
#define f 5
#define g 6

void setup() {
  for(int i=0;i<7;i++){
    pinMode(i,OUTPUT);
    
  }

}

void loop() {
 // 0 için 
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    animasyon();
//**********************

  // 1 için
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
animasyon();
// 2 için
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(d,HIGH); 
    digitalWrite(e,HIGH);  
    digitalWrite(g,HIGH);
animasyon();
//3 için

    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(g,HIGH);
animasyon();
// 4 için
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
animasyon();
// 5 için
    digitalWrite(a,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
animasyon();
// 6 için
    digitalWrite(a,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    animasyon();

 //7 için
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    animasyon();
// 8 için
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    animasyon();
//9 için
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    animasyon();
}

  void animasyon(){
  delay(1000);
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    delay(1000);
    digitalWrite(a,HIGH);
    delay(50);
    digitalWrite(b,HIGH);
    digitalWrite(a,LOW);
    delay(50);
    digitalWrite(c,HIGH);
    digitalWrite(b,LOW);
    delay(50);
    digitalWrite(d,HIGH);
    digitalWrite(c,LOW);
    delay(50);
    digitalWrite(e,HIGH);
    digitalWrite(d,LOW);
    delay(50);
    digitalWrite(f,HIGH);
    digitalWrite(e,LOW);
    delay(50);
    digitalWrite(f,LOW);
    delay(50);
  }
