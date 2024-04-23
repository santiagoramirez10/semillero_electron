int a=12;
int b=13;
int c=8;
int d=7;
int e=6;
int f=11;
int g=10;
int h=9;
int l0[6]={a,b,c,d,e,f};
int l1[2]={b,c};
int l2[5]={a,b,g,e,d};
int l3[5]={a,b,c,g,d};
int l4[4]={f,b,g,c};
int l5[5]={a,f,g,c,d};
int l6[5]={c,d,e,f,g};
int l7[3]={a,b,c};
int l8[7]={a,b,c,d,e,f,g};
int l9[5]={a,b,c,f,g};
int t[8]={a,b,c,d,e,f,g,h};
int pulsador_positivo=2;
int pulsador_negativo=3;
int i;
int contador=0;
void setup(){ 
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(h, OUTPUT);
  pinMode(pulsador_positivo, INPUT);
  pinMode(pulsador_negativo, INPUT);
  apagar();
}
void loop(){
  if(digitalRead(pulsador_positivo)==0 and contador<9){
  	contador+=1;
  	delay(1000);
  }
  if(digitalRead(pulsador_negativo)==0 and contador>0){
  	contador-=1;
    delay(1000);
  }
  switch (contador){
  	case 0:
      cero();
      break;
    case 1:
      uno();
      break;
  	case 2:
      dos();
      break;
    case 3:
      tres();
      break;
    case 4:
      cuatro();
      break;
    case 5:
      cinco();
      break;
    case 6:
      seis();
      break;
    case 7:
      siete();
      break;
    case 8:
      ocho();
      break;
    case 9:
      nueve();
      break;
    default:
      apagar();
      break;
	}
}
void apagar(){
  for (i=0;i<sizeof(t)/2;i++){
    digitalWrite(t[i],HIGH);
  }
  delay(1); 
}
void cero(){
  apagar();
  for (i=0;i<sizeof(l0)/2;i=i+1){
    digitalWrite(l0[i],LOW);
  }
}
void uno(){
  apagar();
  for (i=0;i<sizeof(l1)/2;i=i+1){
    digitalWrite(l1[i],LOW);
  }
}
void dos(){
  apagar();
  for (i=0;i<sizeof(l2)/2;i=i+1){
    digitalWrite(l2[i],LOW);
  }
}
void tres(){
  apagar();
  for (i=0;i<sizeof(l3)/2;i=i+1){
    digitalWrite(l3[i],LOW);
  }
}
void cuatro(){
  apagar();
  for (i=0;i<sizeof(l4)/2;i=i+1){
    digitalWrite(l4[i],LOW);
  }
}
void cinco(){
  apagar();
  for (i=0;i<sizeof(l5)/2;i=i+1){
    digitalWrite(l5[i],LOW);
  }
}
void seis(){
  apagar();
  for (i=0;i<sizeof(l6)/2;i=i+1){
    digitalWrite(l6[i],LOW);
  }
}
void siete(){
  apagar();
  for (i=0;i<sizeof(l7)/2;i=i+1){
    digitalWrite(l7[i],LOW);
  }
}
void ocho(){
  apagar();
  for (i=0;i<sizeof(l8)/2;i=i+1){
    digitalWrite(l8[i],LOW);
  }
}
void nueve(){
  apagar();
  for (i=0;i<sizeof(l9)/2;i=i+1){
    digitalWrite(l9[i],LOW);
  }
}