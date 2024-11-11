#define VELOCIDADE 100 // Controle de velocidade

// DEFINIÇÃO DE PINOS MOTORES 
#define PINO_MOTOR1 2
#define PINO_MOTOR2 3
#define PINO_MOTOR3 4
#define PINO_MOTOR4 5

void setup() {
  pinMode(PINO_MOTOR1, OUTPUT);
  pinMode(PINO_MOTOR2, OUTPUT); 
  pinMode(PINO_MOTOR3, OUTPUT);
  pinMode(PINO_MOTOR4, OUTPUT);
}

void loop() {
  //Codigo de acordo com o desafio dado em aula
}


void Frente() {
  analogWrite(PINO_MOTOR1, VELOCIDADE);
  analogWrite(PINO_MOTOR2, VELOCIDADE);
  analogWrite(PINO_MOTOR3, VELOCIDADE);
  analogWrite(PINO_MOTOR4, VELOCIDADE);
}

void Parado() {
  analogWrite(PINO_MOTOR1, LOW);
  analogWrite(PINO_MOTOR2, LOW);
  analogWrite(PINO_MOTOR3, LOW);
  analogWrite(PINO_MOTOR4, LOW); 
}

void VireDir() {    
  analogWrite(PINO_MOTOR1, VELOCIDADE);
  analogWrite(PINO_MOTOR2, VELOCIDADE);
}

void VireEsq() {
  analogWrite(PINO_MOTOR3, VELOCIDADE);
  analogWrite(PINO_MOTOR4, VELOCIDADE);
}

