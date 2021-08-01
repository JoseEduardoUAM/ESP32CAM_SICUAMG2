## Simulacion de Semaforo

## Descripción
Programa básico que permite conectar al ESP32CAM a una red wifi y cuando se  pueda conectar encienda el flash del ESP32CAM y el leds externos simulando un Semaforo mediante los pines (13,14 y 15)

## Configuración

1. Descargar la carpeta **Semaforo_3Leds_externos** y abrir el archivo **Semaforo_3Leds_externos.ino** desde el programa Arduino IDE.
2. Modificar las lineas 24 y 25 de este archivo con la informacion correspondiente a la red wifi que este utilizando:

![]( https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Encender_Un_Led_Externo/Imagenes/modificar_codigo.JPG )

## Requisitos

- 1 Protoboard
- 3 lets (verde, amarillo y rojo)
- 3 resistencias
- 4 Jumpers adicionales

## Circuito

El armado del circuito se debe realizar de la siguiente manera:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Simulacion_Semaforo/Imagenes/circuito.png)

## Cargar el código en el ESP32CAM

1. Verificar que el FTDI esta conectado y en un puerto (en este caso es el puerto COM8)

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Webcam_DireccionIP/Imagenes/Verificaci%C3%B3n_Puerto.jpg)

2. Subir el código mediante el boton SUBIR que se encuentra en la parte superior izquierda de la ventana del IDE

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Webcam_DireccionIP/Imagenes/Boton_Subir.JPG)

3. Cuando se haya terminado de subir el codigo, en consola se debera ver de la siguiente manera

![]( https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Encender_Un_Led_Externo/Imagenes/mensaje_consola.JPG )

4. Despues de ver el mensaje en consola se debe desconectar el cable del pin I0O del ESP32CAM

- Antes de desconectar el cable del pin I0O

![]( antes_IO0 )

- Despues de desconectar el cable del pin I0O

![]( despues_IO0 )

5. Se debe presionar el boton **Monito Serie** que se encuentra en la parte superior derecha de la ventana del IDE

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Webcam_DireccionIP/Imagenes/Boton_Monitor_Serie.JPG)

Cuando se da click, mostra una ventana y se debe verificar que se esta trabajando con 115200 baudio

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Webcam_DireccionIP/Imagenes/configuracion_baudio.JPG)

6. Se debe presionar el boton de reset del ESP32CAM

## Resultados

1. Cuando se presiona el boton de reset del ESP32CAM se debe mostrar ls informacion de la conexion con el wifi

![]( informacion_conexion )

2. Primero se debe mostrar el parpadeo de un led rojo del ESP32 y despues el parpadeo del flash y el parpadeo de los leds externos (verde, amarillo y rojo):

![]( https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Encender_Un_Led_Externo/Imagenes/Funcionamiento.gif )
