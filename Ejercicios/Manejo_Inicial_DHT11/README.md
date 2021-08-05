# Manejo del DHT11 en el ESP32CAM
## Descripción
Programa básico que permite obtener la temperatura del ambiente en tiempo real integrando
el dispositovo DHT11 en el ESP32CAM y observando las temperaturas en °C y °F mediante el monitor serial del Arduino IDE.

## Circuito
### Dispositivo DHT11
![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Manejo_Inicial_DHT11/Imagenes/DHT11.png)

### Conexiones
Las conexines del ESP32CAM al DHT11:

- GND ---> GND
- GPIO12 ---> Data
- 3V3 ---> +5V

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Manejo_Inicial_DHT11/Imagenes/Circuito.png)

## Instrucciones

1. Antes de cargar el programa en el ESP32CAM, se recomienda tener el desconectado el cable de alimentación (3V3) que se encuentra entre el DHT11 y el ESP32CAM:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Manejo_Inicial_DHT11/Imagenes/circuiro_sin_3v3.png)

2. Al termino de cargar el programa se debe desconectar el cable entre los pines GNC y GPIO0 del ESP32CAM:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Manejo_Inicial_DHT11/Imagenes/circuito_sin_gpio0.png)

3. Se debe presionar el botón de monitor serial:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Webcam_DireccionIP/Imagenes/Boton_Monitor_Serie.JPG)

Y se debe mostrar la siguiente ventana:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Manejo_Inicial_DHT11/Imagenes/ventana_monitor_serial.PNG)

4. Estando en el minitor serial se debe presionar el reset del ESP32CAM y cuando este conectado al dispositovo DHT11
se debe colocar el cable de alimentacion (3V3) encuentra entre el DHT11 y el ESP32CAM:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Manejo_Inicial_DHT11/Imagenes/circuiro_con_3v3.png)

## Resultado

Cuando se presiona el boton de reset del ESP32CAM estando en el monitor serial del Arduino IDE, se debe esperar el mensaje
que indica que se encuentra conectado al DHT11, en ese momento se debe colocar el cable de alimentacion (3V3) encuentra entre el DHT11 y el ESP32CAM, además, se debe observar la temperatura del ambiente en ese momento en °C y °F:

![](https://github.com/JoseEduardoUAM/ESP32CAM_SICUAMG2/blob/main/Ejercicios/Manejo_Inicial_DHT11/Imagenes/funcionamiento.gif)
