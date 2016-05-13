/*
Karaşimşek Uygulaması
For Döngüsünbü Öğrenelim

Furkan Esmeyar

Eğer bir şey anlamadıysanız videomuzu izleyin :)
*/

void setup() {
//pinler tanımlanıyor.
pinMode (2, OUTPUT);
pinMode (3, OUTPUT);
pinMode (4, OUTPUT);
pinMode (5, OUTPUT);
pinMode (6, OUTPUT);
pinMode (7, OUTPUT);

}

void loop() {
for (int led = 2 ; led<8 ; led++;)
//kısaca antlatmak gerekirse led değişkeni oluşturuyoruz. 
//Led değişkeni 8 den küçük olana kadar döndürme şartını koyuyoruz. 
//Ve Döngü bir kez döndüğünde led değişkeni bir artırılıyor.

{
  digitalWrite (led, HIGH);
  delay (500);
  digitalWrite (led, LOW);
  }

}
