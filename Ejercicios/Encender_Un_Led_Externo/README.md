# Encender Flash del ESP32CAM y Led externo mediante el pin 12 del ESP32CAM

Programa básico que permite conectar al ESP32CAM a una red wifi y cuando se conecte pueda encerder el flash del ESP32CAM y el led externo mediante el pin 12 del ESP32CAM

## Configuración

1. Descargar la carpeta **Encender_Led** y abrir el archivo **Encender_Led.ino** desde el programa Arduino IDE.
2. Modificar las lineas 24 y 25 de este archivo con la informacion correspondiente a la red wifi que este utilizando:

![]( https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Encender_Un_Led_Externo/Imagenes/modificar_codigo.JPG )

## Circuito

El armado del circuito se debe realizar de la siguiente manera:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Encender_Un_Led_Externo/Imagenes/Circuito.JPG)

## Cargar el código en el ESP32CAM

1. Verificar que el FTDI esta conectado y en un puerto (en este caso es el puerto COM8)

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Webcam_DireccionIP/Imagenes/Verificaci%C3%B3n_Puerto.jpg)

2. Subir el código mediante el boton SUBIR que se encuentra en la parte superior izquierda de la ventana del IDE

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Webcam_DireccionIP/Imagenes/Boton_Subir.JPG)

3. Cuando se haya terminado de subir el codigo, en consola se debera ver de la siguiente manera

![]( https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Encender_Un_Led_Externo/Imagenes/mensaje_consola.JPG )

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

1. Cuando se presiona el boton de reset del ESP32CAM se debe mostrar ls informacion de la conexion con el wifi

![]( https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Encender_Un_Led_Externo/Imagenes/informacion_conexion.JPG )

2. Primero se debe mostrar el parpadeo de un led rojo del ESP32 y despues el parpadeo del flash y del led externo:

![]( https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Encender_Un_Led_Externo/Imagenes/Funcionamiento.gif )
