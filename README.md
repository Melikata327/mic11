# mic11
## ازمایش 11
### گزارش کار و مراحل 
در این آزمایش هدف ما تنظیم شدت روشنایی لامپ LED به صورت داینامیک و در لحظه می باشد. برای این کار از یک پتانسیومتر ( Potentiometer ) که نوعی مقاومت متغیر است استفاده می کنیم. در واقع پتانسیومتر با چرخش ولوم آن بین ولتاژ 0 تا 5 ولت جا به جا می شویم. بنابراین واضح است که می توان این ولتاژ متغیر را به یک ورودی آنالوگ از آردوینو داد و بر این اساس آن را به خروجی برای LED تنظیم کرد.
 

  

```cpp
 int potPin = A0;
 float voltage=0.0;

  
 void setup() {
  Serial.begin(9600);
 }
  void loop () {
   int sensor =analogRead(potpin);
  voltage = sensor* (5.0/1023.0);
   
  Serial.print("voltage:");
  Serial.print(voltage);
  Serial.print("V");
     delay(10);
}
```
