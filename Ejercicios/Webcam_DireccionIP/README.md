# CamaraWebServer

## Descripción
Programa basico que permite conectar el ESP32CAM a una red wifi, poder utilizar la camara de este dispositivo como webcam y poder visualizar el video en un navegador web.

## Configuración

1. Descargar la carpeta **CameraWebServer** y abrir el archivo **CameraWebServer.ino** desde el programa Arduino IDE.
2. Modificar las lineas 22 y 23 de este archivo con la informacion correspondiente a la red wifi que este utilizando:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Webcam_DireccionIP/Imagenes/C%C3%B3digo_Modificaci%C3%B3n.JPG)

## Cargar el código en el ESP32CAM

1. Verificar que el FTDI esta conectado y en un puerto (en este caso es el puerto COM8)

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Webcam_DireccionIP/Imagenes/Verificaci%C3%B3n_Puerto.jpg)

2. Subir el código mediante el boton SUBIR que se encuentra en la parte superior izquierda de la ventana del IDE

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Webcam_DireccionIP/Imagenes/Boton_Subir.JPG)

3. Cuando se haya terminado de subir el codigo, en consola se debera ver de la siguiente manera

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Webcam_DireccionIP/Imagenes/Mensaje_Consola.JPG)

4. Despues de ver el mensaje en consola se debe desconectar el cable del pin I0O del ESP32CAM

- Antes de desconectar el cable del pin I0O

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Webcam_DireccionIP/Imagenes/antes_I0O.jpg)

- Despues de desconectar el cable del pin I0O

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Webcam_DireccionIP/Imagenes/despues_I0O.jpg)

5. Se debe presionar el boton **Monito Serie** que se encuentra en la parte superior derecha de la ventana del IDE

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Webcam_DireccionIP/Imagenes/Boton_Monitor_Serie.JPG)

Cuando se da click, mostra una ventana y se debe verificar que se esta trabajando con 115200 baudio

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Webcam_DireccionIP/Imagenes/configuracion_baudio.JPG)

6. Se debe presionar el boton de reset del ESP32CAM

## Resultados

1. Cuando se presiona el boton de reset del ESP32CAM se debe mostrar varios mensajes, en especial, la direccion IP en el que se conecto el ESP32CAM, en este caso, fue en la dirección http://192.168.1.66

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Webcam_DireccionIP/Imagenes/informacion_ip.JPG)

2. Se debe abrir un navegador web y colocar esta direccion en el buscador
3. Se mostrara la siguiente página en el navegador

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Webcam_DireccionIP/Imagenes/ventana_navegador_inicio.JPG)

4. Para el video de la camara se debe presionar el boton de **Start Stream**.

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Webcam_DireccionIP/Imagenes/boton_start.JPG)

5. Despues de esto, se debe mostar el video de la camara en el navegador

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Webcam_DireccionIP/Imagenes/ventana_navegador_cam.jpg)
