# Broker MQTT y Suscribir Tema

## Introducción
### ¿Que es un Broker?
El broker es el servidor que acepta mensajes publicados por clientes y los difunde entre los clientes suscritos.
### ¿Que es MQTT?
MQTT es un protocolo de mensajería basado en un modelo de publicación/suscripción. En este modelo para que un cliente (el publicante) mande un mensaje a otros clientes (los suscriptores) hay un intermediario (llamado broker) que se encarga de distribuir los mensajes a todos los interesados. Esto hace que los clientes no sepan de la existencia de otros clientes y sólo deben de conocer la dirección de un broker para poder participar en la comunicación.

## Requisitos
1. Tener instalado Mosquitto MQTT

> Enlace de Descarga: https://mosquitto.org/download/

2. Se utilizará el broker HIVEMQ:

> Enlace a página HIVEMQ: *http://www.mqtt-dashboard.com/*

La configuracón de conexion MQTT es la siguiente:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/Broker_MQTT_Tema/Imagenes/configuracion_mqtt_pagina.PNG)

## Procedimiento para Suscribir un Tema
1. Desde una consola de comandos de linux u otro sistema operativo donde se tenga instalado Mosquitto MQTT (en este caso se utilizo Ubuntu), se debe obtener la dirección ip del broker HIVEMQ:

- Comando de linux:
```
nslookup  broker.hivemq.com
```
- Resultado al ejecutar el comando

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/Broker_MQTT_Tema/Imagenes/obtencion_ip.PNG)

2. Para suscribir un tema se debe escribir desde la linea de comandos el siguiente comando:
```
mosquitto_sub -h [Direccion_Ip_Broker] -i [Nombre] -q 2 -t [Tema]
## Ejemplo:
## mosquitto_sub -h 3.66.119.222 -i sub_JoseEduardoUAM -q 2 -t codigoIoT/G2/flow3/temp
```
Resultado al ejecutar el comando:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/Broker_MQTT_Tema/Imagenes/suscribir_tema.PNG)

> Nota: El cursor de esta ventana se queda parpadeando en espera para recibir mensajes

## Comprobación de Suscripción

1. Abrir otra ventana de linea de comandos en el sistema operativo que se este trabajando (en este caso Ubuntu):

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/Broker_MQTT_Tema/Imagenes/nueva_ventana.PNG)

2. Publicar en el tema que se creo anteriormente, este se realiza con el siguiente comando:
```
mosquitto_pub -h [Direccion_Ip_Broker] -i [Nombre] -t [Tema] -m [mesanje]
## Ejemplo:
## mosquitto_pub -h 3.66.119.222 -i pub_EduardoUAM -t codigoIoT/G2/flow3/temp -m "Hola mi nombre es Jose Eduardo Hernandez"
```
Resultado de la publicacion:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/Broker_MQTT_Tema/Imagenes/publicacion.PNG)

3. Una vez que se halla ejecutado este comando, en la ventana de lineas de comando, (donde se halla suscrito el tema) se debe visualizar el mensaje enviado de la otra ventana de lineas de comando:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/Broker_MQTT_Tema/Imagenes/recibido.PNG)
