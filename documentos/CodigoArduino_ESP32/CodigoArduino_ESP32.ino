#define BLYNK_TEMPLATE_ID "TMPL2zAsoC0pk"  // Substitua com seu Template ID
#define BLYNK_TEMPLATE_NAME "Teste Arduino"  // Substitua com seu Template Name
#define BLYNK_PRINT Serial

#include <Arduino.h>
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// Auth Token do Blynk
char auth[] = "MJ_TDItu1FoD-Hujrh2F7-Z2_4EmpS1R";  // Substitua com seu Auth Token

// Credenciais da rede WiFi
char ssid[] = "iPhone de José";        // Substitua com o nome da sua rede WiFi
char pass[] = "naruto02";  // Substitua com a senha da sua rede WiFi

// Definição de constantes e variáveis globais
const int trigPin = 18;  // Pino trig do sensor ultrassônico
const int echoPin = 2;   // Pino echo do sensor ultrassônico
const float pi = 3.14159; // valor de pi
float radius = 6; // raio da base em cm
float height = 25; // altura total do reservatório em cm
float baseArea = pi * radius * radius; // área da base em cm²

// Ajuste essas variáveis com base em suas medições
float D_empty = 30; // distância quando o reservatório está vazio (cm)
float D_full = 0;   // distância quando o reservatório está cheio (cm)

BlynkTimer timer; // Cria um objeto timer para gerenciar intervalos de tempo no Blynk

void sendSensorData() {
  // Envia um pulso ultrassônico para medir a distância
  digitalWrite(trigPin, LOW);  // Garante que o trig está baixo
  delayMicroseconds(2);        // Aguarda 2 microssegundos
  digitalWrite(trigPin, HIGH); // Seta o trig em alto por 10 microssegundos
  delayMicroseconds(10);       // Aguarda 10 microssegundos
  digitalWrite(trigPin, LOW);  // Seta o trig em baixo

  // Calcula o tempo que o pulso leva para ir e voltar
  long duration = pulseIn(echoPin, HIGH); 
  float distance = duration * 0.034 / 2; // Converte o tempo em distância

  float waterHeight = D_empty - distance; // Calcula a altura da água no reservatório
  float volume = baseArea * waterHeight / 1000; // Calcula o volume de água em litros

  // Imprime os resultados no monitor serial
  Serial.print("Nível de água: ");
  Serial.print(waterHeight);
  Serial.println(" cm");

  Serial.print("Volume de água: ");
  Serial.print(volume);
  Serial.println(" litros");

  // Envia os dados para o Blynk
  Blynk.virtualWrite(V1, distance);     // Envia a distância para o Virtual Pin V1
  Blynk.virtualWrite(V2, waterHeight);  // Envia a altura da água para o Virtual Pin V2
  Blynk.virtualWrite(V3, volume);       // Envia o volume de água para o Virtual Pin V3
}

void setup() {
  // Inicia a comunicação serial
  Serial.begin(9600);

  // Conecta ao Blynk usando o Auth Token e as credenciais WiFi
  Blynk.begin(auth, ssid, pass);

  // Configuração dos pinos do sensor ultrassônico
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  // Configura um timer para chamar a função sendSensorData a cada 2 segundos
  timer.setInterval(2000L, sendSensorData);
}

void loop() {
  // Executa a função principal do Blynk
  Blynk.run();
  // Executa as funções do timer
  timer.run();
}