# Importar Nodos en NodeREd

## Introducción
### ¿Que es NodeREd?
Node-RED es una herramienta de programación para conectar dispositivos de hardware, API y servicios en línea de formas nuevas e interesantes.

Proporciona un editor basado en navegador que facilita la interconexión de flujos utilizando la amplia gama de nodos de la paleta que se pueden implementar en su tiempo de ejecución con un solo clic.

> *Enlace a página principal: https://nodered.org/*

### Caracteristicas
- Edición de flujo basada en navegador
- Construido sobre Node.js
- Desarrollo Social

## Requisitos
Tener instalado NodeRed

## Procedimiento para Importar Nodos
1. Ejecutar NodeRed desde una consola de comandos (en este caso Ubuntu):
- Comando para la ejecucion de NodeRed:

```
node-red
```

- Imagen que muestra el comando de ejecución NodeRed:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/importar_nodos/Imagenes/comando_nodered.PNG)

2. Una vez que se ejecute el comando, se debe abrir un navegador web y colocar la direccion que se proporciona (en este caso es la http://127.0.0.1:1880/)

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/importar_nodos/Imagenes/direccion_consola.PNG)

3. Cuando se termina de cargar la pagina se vera de la siguiente manera (solo si es la primera vez o si no se a realizado algun proyecto antes):

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/importar_nodos/Imagenes/pagina_inicio.PNG)

4. Ahora se debe seleccionar el boton de la parte superior derecha de la página del navegador:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/importar_nodos/Imagenes/hamburguesa.PNG)

5. Después, seleccionar importar:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/importar_nodos/Imagenes/opcion_importar.PNG)

6. Se abrirá la siguiente ventana:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/importar_nodos/Imagenes/ventana_importar.PNG)

7. En esta ventana se agrega los datos del archivo (Archivo_NodeRed.json) y se dará click en el boton importar:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/importar_nodos/Imagenes/importar_json.PNG)

## Configuración de Nodos en Flows
### **Flow 3. Alarma de temperaturas Altas**
1. En el nodo de red **mqtt in** cambiar el nombre del tema y el servidor:
+ Imagen que muestra el nodo **mqtt in**:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/importar_nodos/Imagenes/boton_mqtt_in.PNG)

Para abrir la ventana de configuración de este nodo basta con dar doble click en este nodo y colocar la información correspondiente:

+ Colocar el Servidor (si no se tiene configurado, se puede agregar uno o actualizar el que ya se tiene)

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/importar_nodos/Imagenes/configuracion_servidor_in.PNG)

+ En cualquier caso se debe colocar:

	+ Server: direccion ip del broker
	+ Protocolo
	+ Nombre del Id Cliente

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/importar_nodos/Imagenes/guardar_servidor_in.PNG)

+ Colocar el tema que se este publicando con ***mosquitto_pub***

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/importar_nodos/Imagenes/tema_configuracion_in.PNG)

2. En el nodo de red **mqtt out** cambiar el nombre del tema y el servidor:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/importar_nodos/Imagenes/boton_mqtt_out.PNG)

Para abrir la ventana de configuracion de este nodo basta con dar doble click en este nodo y colocar la información correspondiente:

+ Colocar el Servidor (si no se tiene configurado, se puede agregar uno o actualizar el que ya se tiene)

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/importar_nodos/Imagenes/configuracion_servidor_in.PNG)

+ En cualquier caso se debe colocar:

	+ Server: direccion ip del broker
	+ Protocolo
	+ Nombre del Id Cliente

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/importar_nodos/Imagenes/guardar_servidor_in.PNG)

+ Colocar el tema del switch:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/importar_nodos/Imagenes/tema_configuracion_out.PNG)

3. En el nodo de función switch se puede cambiar la alerta que se escuchará cuando alla una temeperatura alta:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/importar_nodos/Imagenes/boton_mensaje_audio.PNG)

Para abrir la ventana de configuracion de este nodo basta con dar doble click en este nodo y colocar la información correspondiente:

+ Se debe cambiar el mensaje que se desea escuchar:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/importar_nodos/Imagenes/configuracion_mensaje_audio.PNG)

### **Flow 4. Encender flash de ESP32CAM desde NodeRed**
1. En el nodo de red **mqtt in** cambiar el nombre del tema y el servidor:
+ Imagen que muestra el nodo **mqtt in**:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/importar_nodos/Imagenes/boton_mqtt_in_flash.PNG)

Para abrir la ventana de configuración de este nodo basta con dar doble click en este nodo y colocar la información correspondiente:

+ Colocar el Servidor (si no se tiene configurado, se puede agregar uno o actualizar el que ya se tiene como en el flow 3).

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/importar_nodos/Imagenes/configuracion_servidor_in_flash.PNG)

+ Colocar el tema para recibir datos de la ESP32:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/importar_nodos/Imagenes/tema_configuracion_in_flash.PNG)

2. En el nodo de red **mqtt out** cambiar el nombre del tema y el servidor:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/importar_nodos/Imagenes/boton_mqtt_out_flash.PNG)

Para abrir la ventana de configuración de este nodo basta con dar doble click en este nodo y colocar la información correspondiente:

+ Colocar el Servidor (si no se tiene configurado, se puede agregar uno o actualizar el que ya se tiene como en el flow 3).

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/importar_nodos/Imagenes/configuracion_servidor_out_flash.PNG)

+ Colocar el tema que se este publicando con ***mosquitto_pub***

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/importar_nodos/Imagenes/tema_configuracion_out.PNG)
