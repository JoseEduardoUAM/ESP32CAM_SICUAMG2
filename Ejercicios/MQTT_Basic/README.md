# MQTT BASIC

Programa básico que permite conectar al ESP32CAM a MQTT, enviar y recibir mensajes

## Requisitos

- Ubuntu 20.04
- Biblioteca PubSubClient para Arduino IDE
- Broker Mosquitto funcionando de forma local en el puerto 1883
- NodeRed corriendo de forma local en el puerto 1880
- Nodos Dashboard para NodeRed

## Intrucciones

1. Instalación de la biblioteca PubSubClient en Arduino IDE

> *[Instalación de PubSubClient](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/tree/main/Ejercicios/MQTT_Basic/Instrucciones/Instalacion_PubSubClient)*

2. Broker MQTT y suscribir tema

> *[Broker y Suscribir Tema](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/tree/main/Ejercicios/MQTT_Basic/Instrucciones/Broker_MQTT_Tema)*

4. Importar nodos en NodeRed

> *[Importar Nodos](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/tree/main/Ejercicios/MQTT_Basic/Instrucciones/importar_nodos)*

3. Configuración en el programa principal **ESP32CAM_MQTT_Basic.ino**
> *[Configuración de Programa](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/tree/main/Ejercicios/MQTT_Basic/Instrucciones/Configuracion_Programa)*

## Resultados

### **Flow 3. Alarma de temperaturas Altas**
1. Suscribir un tema:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Imagenes/suscribir_tema.PNG)

2. Seleccionar la opción de Dashboard:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Imagenes/dashboard.PNG)

3. Seleccionar el siguiente botón:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Imagenes/ver_pagina.PNG)

4. Se mostrará la siguiente página:

 ![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Imagenes/pagina_temperatura.PNG)

 5. Desde una ventana de linea de comandos (diferente en la que se esta suscribiendo el tema), se debe enviar una publicación
 y en la página web se debe mostrar la temperatura enviada, el mensaje, el id del usuario que lo envio y si la temperatura es
 mayor a 25 grados se debe escuchar la advertencia:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Imagenes/float3_temperatura.gif)

## Autores y Colaboradores:

> *Hugo Vargas github: https://github.com/hugoescalpelo*

> *Jose Eduardo Hernandez github: https://github.com/JoseEduardoUAM*
