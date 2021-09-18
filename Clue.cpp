# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# include <time.h>

void explicacion();
int armopciones();
int peropciones();
int cuopciones();
void historia(int a, int b, int c, int d, int e, int f, int g);


main()
{
  int des;
  int elec;
  int rep;
  int rep2;


  int arma[5];
  int persona[5];
  int cuarto[5];
  int i;
  int j;
  int k;
  int v[20];
  int n1, n2, n3, n4, n5, n6;
  int arm;
  int per;
  int cu;
  int ccc;
  char armma[][20]={"Cuchillo", "Pistola", "Bate de Beisbol", "Hacha", "Tuberia"};
  char ppersona[][20]={"Donia Marcela", "Edgar", "Paco", "Frida", "Alan"};
  char ccuarto[][20]={"Billar", "Sala de Espera", "Arcade", "Salon de Bellaza", "Libreria" };
do
{
  system("cls");
  system("color 30");
  rep=1;
	        
  for(i=0;i<5;i++)
	  arma[i]=0;

  for(i=0;i<5;i++)
	  persona[i]=0;
	  
  for(i=0;i<5;i++)
	  cuarto[i]=0;
	  
	srand(time(NULL));
	for(i=0;i<3;i++)
	    {
	    	v[i]=1+rand()%(5);
		}
	for(i=0;i<5;i++)
	    {
	    	arma[i]=1+rand()%(5);
	    	for(j=0; j<5; j++)
	    	    {
	    	    	if (j!=i)
	    	    	    { 
						    if (arma[i]==arma[j]) 
						       {
						       	    i--;
							   }
	    	    	            
						}
				}
		}
	
	for(i=0;i<5;i++)
	    {
	    	persona[i]=1+rand()%(5);
	    	for(j=0; j<5; j++)
	    	    {
	    	    	if (j!=i)
	    	    	    { 
						    if (persona[i]==persona[j]) 
						       {
						       	    i--;
							   }
	    	    	            
						}   
				}
		}
	
	for(i=0;i<5;i++)
	    {
	    	cuarto[i]=1+rand()%(5);
	    	for(j=0; j<5; j++)
	    	    {
	    	    	if (j!=i)
	    	    	    { 
						    if (cuarto[i]==cuarto[j]) 
						       {
						       	    i--;
							   }
	    	    	            
						}
				}
		}
			
	/*for(i=0;i<3;i++)
	    {
	    	printf("%d ",v[i]);
		}
  printf("\n\n\n\n");*/
  /*for(i=0;i<5;i++)
	  printf("%i  ",arma[i]);
    printf("\n\n");
  for(i=0;i<5;i++)
	  printf("%i  ",persona[i]);
	printf("\n\n");
  for(i=0;i<5;i++)
	  printf("%i  ",cuarto[i]);
	printf("\n\n"); 
  system("pause");*/	
  //ESTAN AQUI PARA CHECAR LOS VALORES DE LAS MATRCIES Y PODER VER EL CORREECTO FUNCIONAMIENTO DEL PROGRAMA, ESTAN EN COMENTARIO PARA NO DAR LAS RESPUESTAS AL JUGADOR.
  
  explicacion();
  do{
      n1=0;
      n2=0;
      n3=0;
      n4=0;
      n5=0;
      n6=0;
	  system("color 1F");
	  system("cls");
	  printf("\n  Intento:  %d\n\n",rep);
	  printf("\n De que quieres consultar? \n\n");
      printf("\n  1.- Arma.");
      printf("\n  2.- Persona.");      
	  printf("\n  3.- Cuarto.");
	  //printf("\n\n  RECUERDA SOLO USAR NUMEROS SIN SIGNOS, NO USAR LETRAS\n\n");
	  //system("pause");
      printf("\n\n  Eleccion:  ");
      scanf("%i",&des);
      system("cls");
      
      switch (des){
      	            ////////////////////////////////////////////////////////////////////
			        case 1:
			            	do{
								system("color 2F");
								printf("\n De que Arma quieres consultar? \n\n");
                                printf("\n  1.- Cuchillo.");
	                            printf("\n  2.- Pistola.");
	                            printf("\n  3.- Bate de Beisbol.");
	                            printf("\n  4.- Hacha.");
	                            printf("\n  5.- Tuberia.");
	                            //printf("\n\n  RECUERDA SOLO USAR NUMEROS SIN SIGNOS, NO USAR LETRAS\n\n");
	                            //system("pause");
	                            printf("\n\n  Eleccion:  ");
                                scanf("%i",&elec);
                                system("cls");	
								if((elec>0)&&(elec<6))	
									{
			                            n3=arma[elec-1];
			                            for(i=0;i<5;i++)
											{
												if(persona[i]==n3)
													{
														n1=i+1;
														i=20;
													}
											}
										for(i=0;i<5;i++)
											{
											    if(cuarto[i]==n3)
													{
														n2=i+1;
														i=20;
													}
											}
										if (elec==v[0])
										    n4=1;
										if (n1==v[1])
										    n5=1;
										if (n2==v[2])
										    n6=1;
										historia(elec, n1, n2, n3, n4, n5, n6);
											rep2=0;
									} 
							              
								else{
										printf("\n\n\n");
										elec=0;
										printf(" No es un valor valido");
										printf("\n\n\n");
						                rep2=1;
						                system("pause");
                                        system("cls");	
									}
                              }while(rep2==1);
                              break;
      	            ////////////////////////////////////////////////////////////////////
			        case 2:
			            	do{
								system("color 5F");
								printf("\n De que Persona quieres consultar? \n\n");
                                printf("\n  1.- Donia Marcela.");
	                            printf("\n  2.- Edgar.");
	                            printf("\n  3.- Paco.");
	                            printf("\n  4.- Frida.");
	                            printf("\n  5.- Alan.");
	                            //printf("\n\n  RECUERDA SOLO USAR NUMEROS SIN SIGNOS, NO USAR LETRAS\n\n");
	                            //system("pause");
	                            printf("\n\n  Eleccion:  ");
                                scanf("%i",&elec);
                                system("cls");	
								if((elec>0)&&(elec<6))	
									{
			                            n3=persona[elec-1];
			                            for(i=0;i<5;i++)
											{
												if(arma[i]==n3)
													{
														n1=i+1;
														i=20;
													}
											}
										for(i=0;i<5;i++)
											{
											    if(cuarto[i]==n3)
													{
														n2=i+1;
														i=20;
													}
											}
										if (n1==v[0])
										    n4=1;
										if (elec==v[1])
										    n5=1;
										if (n2==v[2])
										    n6=1;
										historia(n1, elec, n2, n3, n4, n5, n6);
											rep2=0;
									} 
							              
								else{
										printf("\n\n\n");
										elec=0;
										printf(" No es un valor valido");
										printf("\n\n\n");
						                rep2=1;
						                system("pause");
                                        system("cls");	
									}
                              }while(rep2==1);
                              break;
      	            ////////////////////////////////////////////////////////////////////
			        case 3:
			            	do{
								system("color CF");
								printf("\n De que cuarto quieres consultar? \n\n");
                                printf("\n  1.- Billar.");
	                            printf("\n  2.- Sala de Espera.");
                            	printf("\n  3.- Arcade.");
	                            printf("\n  4.- Salon de Bellaza.");
	                            printf("\n  5.- Libreria.");
	                            //printf("\n\n  RECUERDA SOLO USAR NUMEROS SIN SIGNOS, NO USAR LETRAS\n\n");
	                            //system("pause");
	                            printf("\n\n  Eleccion:  ");
                                scanf("%i",&elec);
                                system("cls");	
								if((elec>0)&&(elec<6))	
									{
			                            n3=cuarto[elec-1];
			                            for(i=0;i<5;i++)
											{
												if(arma[i]==n3)
													{
														n1=i+1;
														i=20;
													}
											}
										for(i=0;i<5;i++)
											{
											    if(persona[i]==n3)
													{
														n2=i+1;
														i=20;
													}
											}
										
										if (n1==v[0])
										    n4=1;
										if (n2==v[1])
										    n5=1;
										if (elec==v[2])
										    n6=1;
										historia(n1, n2,elec, n3, n4, n5, n6);
											rep2=0;
									} 
							              
								else{
										printf("\n\n\n");
										elec=0;
										printf(" No es un valor valido");
										printf("\n\n\n");
						                rep2=1;
						                system("pause");
                                        system("cls");	
									}
                              }while(rep2==1);
                              break;
			        ////////////////////////////////////////////////////////////////////
			        default:    printf("\n\n\n");
			                    des=0;
								printf(" No es un valor valido");
						        rep--;
						        printf("\n\n\n");
						        system("pause");
						        system("cls");
      	          }
     rep++;
    }while(rep<6);
    system("cls");
	system("color 1F");
	printf("\n\n  Se han agotado tus intentos, ahora tendras que elegir el arma, persona y cuarto para ganar el juego");
    arm=armopciones();
    per=peropciones();
    cu=cuopciones();
    printf("\n\n  Lo que elegiste:");
	printf("\n  Arma: %s",armma[arm-1]);
	printf("\n  Persona: %s",ppersona[per-1]);
	printf("\n  Cuarto: %s",ccuarto[cu-1]);
	
	printf("\n\n  Respuestas correctas:");
	printf("\n  Arma: %s",armma[v[0]-1]);
	printf("\n  Persona: %s",ppersona[v[1]-1]);
	printf("\n  Cuarto: %s",ccuarto[v[2]-1]);
	
    if((arm==v[0])&&(per==v[1])&&(cu==v[2]))
      {    
           printf("\n\n\n\n            ¡Haz acertado y ganado el juego!");
	  }
        
    else{
    	    printf("\n\n\n\n Perdiste");
    	    if(arm!=v[0])
    	       {
    	       	  printf("\n  Debiste prestar mas a tencion a que el arma no se encontraba donde deberia.");
			   }
			if(per!=v[1])
    	       {
    	       	  printf("\n  Debiste prestar mas a tencion a que la persona no fue al cuarto.");
			   }
			if(cu!=v[2])
    	       {
    	       	  printf("\n  Debiste prestar mas a tencion a que no habia grabaciones dentro del cuarto.");
			   }
    	    printf("\n\n\n\n Sigue jugando");
	    }  
	printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	system("pause");
	system("cls");
	printf("\n  ¿Quieres Volver a Jugar?");
	printf("\n\n\n\n  SI=1            NO=0");
	//printf("\n\n  RECUERDA SOLO USAR NUMEROS SIN SIGNOS, NO USAR LETRAS\n\n");
	//system("pause");
	printf("\n\n\n\n  Eleccion:  ");
    scanf("%i",&ccc);
}while(ccc==1);
}

void explicacion()
{
	printf("\n  ¡Se ha encontrado un cadaver en la Plaza!\n  La policia ha reunido los videos de seguridad y evidencia,");     
	///////////////////////////////////
	printf("\n\n  se tienen 5 Armas:");
	printf("\n  1.- Cuchillo.");
	printf("\n  2.- Pistola.");
	printf("\n  3.- Bate de Beisbol.");
	printf("\n  4.- Hacha.");
	printf("\n  5.- Tuberia.");
	///////////////////////////////////
    printf("\n\n  se tienen 5 Personas Sospechosas:");
	printf("\n  1.- Donia Marcela.");
	printf("\n  2.- Edgar.");
	printf("\n  3.- Paco.");
	printf("\n  4.- Frida.");
	printf("\n  5.- Alan.");
	///////////////////////////////////
	printf("\n\n  se tienen 5 Cuartos:");
	printf("\n  1.- Billar.");
	printf("\n  2.- Sala de Espera.");
	printf("\n  3.- Arcade.");
	printf("\n  4.- Salon de Bellaza.");
	printf("\n  5.- Libreria.");
	///////////////////////////////////	

	printf("\n\n  despues de consultar 5 veces deberas de decir quien es el asesino, \n  donde fue asesinado el difunto y con que arma se hizo.");
    printf("\n\n                                             ¡BUENA SUERTE!\n\n");
	
	system("pause");
	system("cls");
}

int armopciones()
{  
    int x;
	system("color 2F");
	printf("\n\n  Arma Utilizada:");
	printf("\n  1.- Cuchillo.");
	printf("\n  2.- Pistola.");
	printf("\n  3.- Bate de Beisbol.");
	printf("\n  4.- Hacha.");
	printf("\n  5.- Tuberia.");  
	//printf("\n\n  RECUERDA SOLO USAR NUMEROS SIN SIGNOS, NO USAR LETRAS\n\n");
	//system("pause");
	printf("\n\n  Eleccion:  ");
    scanf("%i",&x);
	system("cls");
	return x;
}

int peropciones()
{  
	int y;
	system("color 5F");
	printf("\n\n  Persona Culpable:");
	printf("\n  1.- Donia Marcela.");
	printf("\n  2.- Edgar.");
	printf("\n  3.- Paco.");
	printf("\n  4.- Frida.");
	printf("\n  5.- Alan.");
	//printf("\n\n  RECUERDA SOLO USAR NUMEROS SIN SIGNOS, NO USAR LETRAS\n\n");
	//system("pause");
	printf("\n\n  Eleccion:  ");
    scanf("%i",&y);
	system("cls");
	return y;
}

int cuopciones()
{  
	int z;
	system("color CF");
	printf("\n\n  Cuarto donde fallecio el Difunto:");
	printf("\n  1.- Billar.");
	printf("\n  2.- Sala de Espera.");
	printf("\n  3.- Arcade.");
	printf("\n  4.- Salon de Bellaza.");
	printf("\n  5.- Libreria.");
	//printf("\n\n  RECUERDA SOLO USAR NUMEROS SIN SIGNOS, NO USAR LETRAS\n\n");
	//system("pause");
	printf("\n\n  Eleccion:  ");
    scanf("%i",&z);
	system("cls");
	return z;
}

void historia(int a, int b, int c, int d, int e, int f, int g)
{
	// a es el arma
    // b es la persona ahi
	// c es el cuarto
	// d te dice el grupo al que pertenece.
	// e dice si es el armar que mato.
	// f dice si es quien mato.
	// g dice si es donde mataron.

	char arma[][20]={"Cuchillo", "Pistola", "Bate de Beisbol", "Hacha", "Tuberia"};
	char persona[][20]={"Donia Marcela", "Edgar", "Paco", "Frida", "Alan"};
	char cuarto[][20]={"Billar", "Sala de Espera", "Arcade", "Salon de Bellaza", "Libreria" };
	char sino[][20]={"SI", "NO"};
	
    printf("\n\n  El reporte dice que en el cuarto %s, estaba %s,\n  segun los registros ahi debe haber un %s.", cuarto[c-1], persona[b-1], arma[a-1]);         
	printf("\n\n  %s Hay grabaciones dentro del cuarto,\n las camaras del pasillo %s muestran que %s fue a alla y %s se encontro %s ahi. \n\n\n\n", sino[g], sino[f],  persona[b-1], sino[e], arma[a-1]);         
	system("pause");
}

