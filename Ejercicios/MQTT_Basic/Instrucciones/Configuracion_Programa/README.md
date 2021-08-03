# Configuracion de Programa para el ESP32CAM
## Configuración
1. Descargar la carpeta **ESP32CAM_MQTT_Basic** y abrir el archivo **ESP32CAM_MQTT_Basic.ino** desde el programa Arduino IDE.
2. Modificar las lineas 21 y 22 de este archivo con la informacion correspondiente a la red wifi que este utilizando:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/Configuracion_Programa/Imagenes/linea_wifi.PNG)

3. Modificar la linea 130 con el tema que se haya suscrito en el broker:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/Configuracion_Programa/Imagenes/linea_130.PNG)

4. Modificar la linea 150 con el tema que se haya suscrito en el broker:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/MQTT_Basic/Instrucciones/Configuracion_Programa/Imagenes/linea_150.PNG)

5. Por ultimo guardar los cambios realizados

## Cargar el código en el ESP32CAM
1. Verificar que el FTDI esta conectado y en un puerto (en este caso es el puerto COM8)

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Webcam_DireccionIP/Imagenes/Verificaci%C3%B3n_Puerto.png)

2. Subir el código mediante el boton SUBIR que se encuentra en la parte superior izquierda de la ventana del IDE

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Webcam_DireccionIP/Imagenes/Boton_Subir.JPG)

3. Cuando se haya terminado de subir el código, en consola se debera ver de la siguiente manera:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Webcam_DireccionIP/Imagenes/Mensaje_Consola.JPG)

4. Despues de ver el mensaje en consola se debe desconectar el cable del pin I0O del ESP32CAM
- Antes de desconectar el cable del pin I0O

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Webcam_DireccionIP/Imagenes/antes_I0O.jpg)

- Despues de desconectar el cable del pin I0O

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Webcam_DireccionIP/Imagenes/despues_I0O.jpg)

5. Se debe presionar el boton Monito Serie que se encuentra en la parte superior derecha de la ventana del IDE

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Webcam_DireccionIP/Imagenes/Boton_Monitor_Serie.JPG)

6. Cuando se da click, se muestra una ventana y se debe verificar que se esta trabajando con 115200 baudio

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Webcam_DireccionIP/Imagenes/configuracion_baudio.JPG)

7. Se debe presionar el boton de reset del ESP32CAM
