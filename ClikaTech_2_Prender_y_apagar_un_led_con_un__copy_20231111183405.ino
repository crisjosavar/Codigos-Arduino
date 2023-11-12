//ClikaTech Programa 2- Prender y apagar un LED con un boton pulsador

int val=0;  // almacenara la lectura del pulsador on o off
int valAnterior=0; //almacenara una lectura justamente anterior
int estado=0; //este nos dara el encender o apagar el LED.

void setup() {
  pinMode(13,OUTPUT); //este es el puerto numero 13 de nuestra arduino
  pinMode(7,INPUT); // este es el puerto 7 de nuestra arduino donde esta el boton pero debe de estar en input

}

void loop() {

  val=digitalRead(7);
  if(val==HIGH && valAnterior==LOW) { //detecta el cambio del estado del pulsador
//de estar pulsado a no estarlo 
    estado = 1 - estado;//si se ha pulsado, que cambie el esatdo del LED
    delay(20);//eliminamos los defectos de bouncing
  }
  valAnterior=val; //el valor del pulsador pasa a ser valor un valor pasado
  if(estado==1) digitalWrite(13,HIGH);
//el LED encendera cuando el estado sea 1
  else {
      digitalWrite(13,LOW);
  }

}

