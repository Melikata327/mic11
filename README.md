# mic11
## ازمایش 11
ابزار :
پتانسیومتر10k،سیم ،برد بورد، مقاومت ،برد اردینو ، دیود نوری ،سیم 
### گزارش کار و مراحل 
در این آزمایش هدف ما تنظیم شدت روشنایی لامپ LED به صورت داینامیک و در لحظه می باشد. برای این کار از یک پتانسیومتر ( Potentiometer ) که نوعی مقاومت متغیر است استفاده می کنیم. در واقع پتانسیومتر با چرخش ولوم آن بین ولتاژ 0 تا 5 ولت جا به جا می شویم. بنابراین واضح است که می توان این ولتاژ متغیر را به یک ورودی آنالوگ از آردوینو داد و بر این اساس آن را به خروجی برای LED تنظیم کرد.
 

  

```cpp
 int potPin = A0;  //  وصل شدهA0 پین انالوگ 
 float voltage=0.0; // متغیر ولتاژ

  
 void setup() {
  Serial.begin(9600);
 }
  void loop () {
   int sensor =analogRead(potpin); // A0مقدار انالوگ خوانده شده از  
  voltage = sensor* (5.0/1023.0); // مقدار ولتاژ را محاسبه می کند
   
  Serial.print("voltage:"); // چاپ سریال مانیتور
  Serial.print(voltage); 
  Serial.print("V"); // مقدار ولتاژ
     delay(10); // تاخیر یک دهم
}
```
