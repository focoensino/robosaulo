

#include <RoboCore_Vespa.h>

VespaMotors motores;




const int PINO_TRIGGER = 25;
const int PINO_ECHO = 26;


const int DISTANCIA_OBSTACULO = 25;

const int VELOCIDADE = 80;

const int  ESPERA = 60;

const int ESPERA_MOVIMENTO = 250 ;


int distancia;


void setup();{

   pinMode(PINO_TRIGGER,OUTPUT);
   pinMode(PINO_ECHO,INPUT);


  digitalWrite(PINO_TRIGGER, LOW);
}

void loop () {
  
  delay(ESPERA);
  
  
  distancia = sensor_ultrassonico(PINO_TRIGGER,PINO_ECHO);
  
  if (distancia  <= DISTANCIA_OBSTACULO) {
  
  delay(ESPERA);
  distancia =  sensor_ultrassonico(PINO_TRIGGER,PINO_ECHO);





  
  
  
  }

}

  int sensor_ultrassonico(int pino_trigger,int pino_echo){
  digitalWrite(pinotrigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(pinotrigger,LOW);

  
  return pulseIn(pinoecho,HIGH)/58;
  }
