#include <Pixy2.h>
#include <Wire.h>
// This is the main Pixy object 
Pixy2 pixy;

void setup()
{
  
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  
  digitalWrite( 6 , LOW );
  digitalWrite( 7 , HIGH );
  digitalWrite( 8 , HIGH );
  digitalWrite( 9 , LOW );
  Serial.begin(115200);
  Serial.print("Starting...\n");
  
  pixy.init();

pinMode(2,OUTPUT); //green led
pinMode(3,OUTPUT); //green led
  
}

void loop()
{ 
  
  int i; 
  // grab blocks!
  pixy.ccc.getBlocks();
  
  // If there are detect blocks, print them!
  if (pixy.ccc.numBlocks)
  {
    
    Serial.print("Detected ");
    Serial.println(pixy.ccc.numBlocks);
    for (i=0; i<pixy.ccc.numBlocks; i++)
    {
      Serial.print("  block ");
      Serial.print(i);
      Serial.print(": ");
     // pixy.ccc.blocks[i].print();

     Serial.println(pixy.ccc.blocks[i].m_height) ;
     if(pixy.ccc.blocks[i].m_height>= 100)
     {
      Serial.println("RED");
      
  digitalWrite( 6 , HIGH );
  digitalWrite( 7 , HIGH );
  digitalWrite( 8 , HIGH );
  digitalWrite( 9 , HIGH );
        
  }  
}
  }
}
