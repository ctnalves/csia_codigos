//Exemplo de configuração de entradas e saídas
//Criado por CSIA AUTOMACAO EM 02/02/2021

//Entradas Digitais
//   ESP32|PLC
#define DI0 14 
#define DI1 27 
#define DI2 26 
#define DI3 25 
#define DI4 33 
#define DI5 32 
#define DI6 35 
#define DI7 34 
#define DI8 38 
#define DI9 36 

//Entradas analogicas
#define AI0 18 
#define AI1 19 

//Saidas rele
#define O0 15 
#define O1 2 
#define O2 4 
#define O3 16 
#define O4 17 
#define O5 23 

//Saidas digitais PWM
#define DO0 13 
#define DO1 12 

//Led CONEXAO
#define 5 LED

void setup() {
  pinMode(DI0, INPUT);
  pinMode(DI1, INPUT);
  pinMode(DI2, INPUT);
  pinMode(DI3, INPUT);
  pinMode(DI4, INPUT);
  pinMode(DI5, INPUT);
  pinMode(DI6, INPUT);
  pinMode(DI7, INPUT);
  pinMode(DI8, INPUT);
  pinMode(DI9, INPUT);
  pinMode(AI0, INPUT);
  pinMode(AI1, INPUT);

  pinMode(O0, OUTPUT);
  pinMode(O1, OUTPUT);
  pinMode(O2, OUTPUT);
  pinMode(O3, OUTPUT);
  pinMode(O4, OUTPUT);
  pinMode(O5, OUTPUT);
  pinMode(DO0, OUTPUT);
  pinMode(DO1, OUTPUT);
  pinMode(LED, OUTPUT);
  
  //Inicializa a porta serial na velocidade 9600
  Serial.begin(9600);
}

void loop() {
  

}
