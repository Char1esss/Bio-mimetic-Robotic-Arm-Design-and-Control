#define STEP_PIN 2
#define DIR_PIN 3
#define ENABLE_PIN 4
#define STEP_PIN 6
#define DIR_PIN 7
#define ENABLE_PIN 8


void setup() {
  pinMode(10,INPUT_PULLUP);
  pinMode(13,INPUT_PULLUP);
  pinMode(9,INPUT_PULLUP);
  

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  
  

  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);

}

void loop() {
  // 第二个按钮
  if (digitalRead(10) == LOW ){
    digitalWrite(4, LOW); // 启用驱动器
    digitalWrite(8, LOW); // 启用驱动器
  
    
    digitalWrite(3, HIGH);

    digitalWrite(7, HIGH); 
  
  // LEFT（1.8度/步的电机旋转一圈）
    for (int i = 0; i < 130; i++) {
     digitalWrite(2, HIGH);//1号电机
     delayMicroseconds(3000); 

     digitalWrite(6,HIGH);//2号电机
     delayMicroseconds(3500); // 控制速度（数值越小越快）

     digitalWrite(2, LOW); //一号电机
     delayMicroseconds(3000); 

     digitalWrite(6, LOW); //二号电机
     delayMicroseconds(3500);
  
    }
    for (int i = 0; i < 120; i++) {
     digitalWrite(2, HIGH);//1号电机
     delayMicroseconds(3000); 

     digitalWrite(6,HIGH);//2号电机
     delayMicroseconds(3700); // 控制速度（数值越小越快）

     digitalWrite(2, LOW); //一号电机
     delayMicroseconds(3000); 

     digitalWrite(6, LOW); //二号电机
     delayMicroseconds(3700);
     }
     for (int i = 0; i <500; i++) {
     digitalWrite(2, HIGH);//1号电机
     delayMicroseconds(3000); 
     digitalWrite(6, HIGH);//1号电机
     delayMicroseconds(3000); 
  }
  }






  //跳舞，第三个按钮
  else if (digitalRead(9) == LOW ){
    digitalWrite(4, LOW); // 启用驱动器
    digitalWrite(8, LOW); // 启用驱动器

    digitalWrite(7, HIGH);
for (int i = 0; i < 200; i++) {
     digitalWrite(6, HIGH);//2号电机
     delayMicroseconds(3000); 
     digitalWrite(6, LOW); //2号电机
     delayMicroseconds(3000); 
    }
     digitalWrite(7, LOW);
  for (int i = 0; i < 200; i++) {
     digitalWrite(6, HIGH);//2号电机
     delayMicroseconds(3000); 
     digitalWrite(6, LOW); //2号电机
     delayMicroseconds(3000); 
    }
     digitalWrite(3, LOW);
  for (int i = 0; i < 200; i++) {
     digitalWrite(2, HIGH);//1号电机
     delayMicroseconds(3000); 
     digitalWrite(2, LOW); //1号电机
     delayMicroseconds(3000); 
     }
     digitalWrite(3, HIGH);
  for (int i = 0; i < 200; i++) {
     digitalWrite(2, HIGH);//1号电机
     delayMicroseconds(3000); 
     digitalWrite(2, LOW); //1号电机
     delayMicroseconds(3000); 
    }
     }
    
  


 //第1个按钮
  else if (digitalRead(13) == LOW ){
    digitalWrite(4, LOW); // 启用驱动器
    digitalWrite(8, LOW); // 启用驱动器

    digitalWrite(3, LOW);

    digitalWrite(7, LOW);
  
  // RIGHT（1.8度/步的电机旋转一圈）
    for (int i = 0; i < 130; i++) {
     digitalWrite(6, HIGH);//2号电机
     delayMicroseconds(3000); 

     digitalWrite(2,HIGH);//1号电机
     delayMicroseconds(3500); // 控制速度（数值越小越快）

     digitalWrite(6, LOW); //2号电机
     delayMicroseconds(3000); 

     digitalWrite(2, LOW); //1号电机
     delayMicroseconds(3500);
  
  }
    for (int i = 0; i < 120; i++) {
     digitalWrite(6, HIGH);//2号电机
     delayMicroseconds(3000); 

     digitalWrite(2,HIGH);//1号电机
     delayMicroseconds(3700); // 控制速度（数值越小越快）

     digitalWrite(6, LOW); //2号电机
     delayMicroseconds(3000); 

     digitalWrite(2, LOW); //一号电机
     delayMicroseconds(3700);
  }
     for (int i = 0; i <500; i++) {
     digitalWrite(2, HIGH);//1号电机
     delayMicroseconds(3000); 
     digitalWrite(6, HIGH);//1号电机
     delayMicroseconds(3000); 
  }
  }

  else{
    digitalWrite(4, HIGH);  // 不启用驱动器
    digitalWrite(8, HIGH);  // 不启用驱动器

  }


}