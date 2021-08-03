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

![]( configuracion_mqtt )

## Procedimiento para Suscribir un Tema
1. Desde una consola de comandos de linux u otro sistema operativo donde se tenga instalado Mosquitto MQTT (en este caso se utilizo Ubuntu), se debe obtener la dirección ip del broker HIVEMQ:

- Comando de linux:
```
nslookup  broker.hivemq.com
```
