/* FUNDACION KINAL
   DENIS ESTUARDO DE JESÚS RAMÍREZ PADILLA
   TALLER DE ELECTRONICA EN DISPOSITIVOS DIGITALES
   2020288
   EB5AM
   ALEJANDRO NAVAS 
   TALLER 6 PARTE 1  
*/

//Librerias
#include <LiquidCrystal.h>


//Definiciones de preprocesador
#define RS  6
#define Enable 7
#define D4 2
#define D5 3
#define D6 4
#define D7 5



//Constructor
LiquidCrystal LCD_t6(RS, Enable, D4, D5, D6, D7); //Constructor que me permite usar la LCD

void setup()
{
 
  LCD_t6.begin(16,2);

  delay(1000);

  LCD_t6.setCursor(5,0);
  LCD_t6.print("DENIS");

  LCD_t6.setCursor(4,1);
  LCD_t6.print("2020288");

  

 
}
void loop()
{
 
}