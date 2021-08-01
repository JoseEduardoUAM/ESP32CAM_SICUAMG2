/*
 * Conexión simple a WiFi
 * Por: Hugo Escalpelo
 * Fecha: 27 de junio de 2021
 *
 * Este programa muestra una conexión básica a WiFi para
 * ESP32CAM. Para ello es necesario que cambies el SSID y
 * contraseña por los datos correspondientes a la red que
 * deseas conectarte. Puedes observar el estado de la conexión
 * con el monitor serial. No se requieren componentes adicionales.
 *
 * En este programa se usan los leds soldados sobre la placa
 * ESP32CAM, el led flash y el led de status.
 *
 * Componente     PinESP32CAM     Estados lógicos
 * ledStatus------GPIO 33---------On=>LOW, Off=>HIGH
 * ledFlash-------GPIO 4----------On=>HIGH, Off=>LOW
 */

// Bibliotecas
#include <WiFi.h>  // Biblioteca para manejar el WiFi del ESP32CAM

// Datos de Red
const char* ssid = "********";  // Pon aquí el nombre de la red a la que deseas conectarte
const char* password = "********";  // Escribe la contraseña de dicha red

// Objetos
WiFiClient espClient; // Este objeto maneja las variables necesarias para una conexion WiFi

// Variables del programa
//33 led de status , 4 led flash
//En la protoboard: 14 led verde , 15 led amarillo , 13 led rojo
int pins[] = {33,4,14,15,13};

// Inicialización del programa
void setup() {
  //Configuración de pines
  for(int i = 0 ; i < 5 ; i++){
      pinMode ( pins[i] , OUTPUT); // Se configura el pin como salida
      digitalWrite ( pins[i] , LOW);// Se comienza con el led apagado
  }

  //Inicialización de comunicación serial
  Serial.begin (115200);
  Serial.println();
  Serial.println();
  Serial.print("Conectando a ");
  Serial.println(ssid);

  // Iniciar el WiFi
  WiFi.begin(ssid, password); // Esta es la función que realiz la conexión a WiFi

  while (WiFi.status() != WL_CONNECTED) { // Este bucle espera a que se realice la conexión
    digitalWrite (pins[0], HIGH);
    delay(500); //dado que es de suma importancia esperar a la conexión, debe usarse espera bloqueante
    digitalWrite (pins[0], LOW);
    Serial.print(".");  // Indicador de progreso
    delay (5);
  }

  // Cuando se haya logrado la conexión, el programa avanzará, por lo tanto, puede informarse lo siguiente
  Serial.println();
  Serial.println("WiFi conectado");
  Serial.println("Direccion IP: ");
  Serial.println(WiFi.localIP());

  // Si se logro la conexión, encender led
  if (WiFi.status () > 0){
      for(int i = 1 ; i < 5 ; i++){
          digitalWrite (pins[i], LOW); //apagar led
      }
  }
}// Fin del void setup

//Cuerpo del programa, bucle principal
void loop() {
    for(int i = 2 ; i < 5 ; i++){
        if( i == 3 ){
            for( int j = 0 ; j < 3 ; j++ ){
                bool estado = true;
                for( int k = 0 ; k < 6 ; k++){
                    digitalWrite (pins[1], ( estado ? HIGH : LOW ) ); //encender o apagar el flash
                    digitalWrite (pins[i], ( estado ? HIGH : LOW ) ); //encender o apagar el led amarillo
                    delay(500);
                    estado = (estado ? false : true);  // Si estado es verdadero
                }
            }
        }else{
            digitalWrite (pins[i], HIGH); //encender led de la protoboard
            bool estado = true;
            for( int j = 0 ; j < 6 ; j++ ){
                digitalWrite (pins[1], ( estado ? HIGH : LOW)); //encender flash
                delay(500);
                estado = (estado ? false : true);
            }
            digitalWrite (pins[i], LOW); //apagar led de la protoboard
        }
    }
}// Fin de void loop
