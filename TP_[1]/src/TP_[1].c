

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"
#include "funcionescalculo.h"

int main(void) {
	setbuf(stdout, NULL);
	printf("         Bienvenidos"
			"\nIngresar una opcion del menu: \n");

	     float kilometros;
	     float precioLatam;
	     float precioAerolineas;
	     int flagKM = 0;
	     int flagLatam = 0;
	     int flagAerolineas = 0;
	     int opcion;
	     int submenu;
	     float precioDebitoLatam;
	     float precioCreditoLatam;
	     float btcLatam;
	     float precioPorKmLatam;
	     float diferenciaDePrecio;
	     float precioDebitoAerolineas;
	     float precioCreditoAerolineas;
	     float btcAerolineas;
	     float precioUnitario;


	     do
	     {
	    	 if(flagKM==0 && flagLatam==0 && flagAerolineas==0)
	    	 {
	    		 printf("\n1. Ingresar kilómetros %.2f"
						"\n2. Ingresar Precio de Vuelos "
					    "\n  2.1. Precio vuelo Aerolíneas: %.2f"
		  			    "\n  2.2. Precio vuelo Latam: %.2f"
						"\n3. Calcular todos los costos"
						"\n4. Informar Resultados"
						"\n5. Carga forzada de datos"
						"\n6. Salir\n", kilometros, precioAerolineas, precioLatam);
	    	 }
	    	 if(flagKM==1 && flagLatam==0 && flagAerolineas==0)
	    	 {
	    		 printf("\n1. Cambiar Kilómetros: %.2f"
						"\n2. Ingresar Precio de Vuelos: "
		  			    "\n  2.1. Precio vuelo Aerolíneas: %.2f"
	    				"\n  2.2. Precio vuelo Latam: %.2f"
						"\n3. Calcular todos los costos:"
						"\n4. Informar Resultados"
						"\n5. Carga forzada de datos"
						"\n6. Salir\n", kilometros, precioAerolineas, precioLatam);
	    	 }
	    	 if(flagKM==1 && flagLatam== 1 && flagAerolineas==0)
	    	 {
	    		 printf("\n1. Cambiar Kilómetros: %.2f"
	    				"\n2. Ingresar Precio de Vuelos: "
		 			    "\n 2.1. Precio vuelo Aerolíneas: %.2f"
		 			    "\n 2.2. Cambiar vuelo Latam: %.2f"
						"\n3. Calcular todos los costos:"
						"\n4. Informar Resultados"
						"\n5. Carga forzada de datos"
						"\n6. Salir\n", kilometros, precioAerolineas, precioLatam);
	    	 }
	    	 if(flagKM==1 && flagLatam== 1 && flagAerolineas==1)
	    	 	    	 {
				 printf("\n1. Cambiar Kilómetros: %.2f"
						"\n2. Ingresar Precio de Vuelos: "
		 			    "\n 2.1. Cambiar vuelo Aerolíneas: %.2f"
		  			    "\n 2.2. Cambiar vuelo Latam: %.2f"
						"\n3. Calcular todos los costos:"
						"\n4. Informar Resultados"
						"\n5. Carga forzada de datos"
						"\n6. Salir\n", kilometros, precioAerolineas, precioLatam);
	    	 	    	 }
	    	 if(flagKM==1 && flagLatam== 0 && flagAerolineas==1)
	    	 	    	 {
				 printf("\n1. Cambiar Kilómetros: %.2f"
						"\n2. Ingresar Precio de Vuelos: "
		  			    "\n 2.1. Cambiar vuelo Aerolíneas: %.2f"
		 			    "\n 2.2. Ingresar vuelo Latam: %.2f"
						"\n3. Calcular todos los costos:"
						"\n4. Informar Resultados"
						"\n5. Carga forzada de datos"
						"\n6. Salir\n", kilometros, precioAerolineas, precioLatam);
	    	 	    	 }
	    	 if(flagKM==0 && flagLatam==1 && flagAerolineas==1)
						 {
				 printf("\n1. Ingresar Kilómetros: %.2f"
						"\n2. Ingresar Precio de Vuelos: "
		  			    "\n 2.1. Cambiar vuelo Aerolíneas: %.2f"
		  			    "\n 2.2. Cambiar vuelo Latam: %.2f"
						"\n3. Calcular todos los costos:"
						"\n4. Informar Resultados"
						"\n5. Carga forzada de datos"
						"\n6. Salir\n", kilometros, precioAerolineas, precioLatam);
						 }
	    	 if(flagKM==0 && flagLatam==1 && flagAerolineas==0)
						 {
				 printf("\n1. Ingresar Kilómetros: %.2f"
						"\n2. Ingresar Precio de Vuelos: "
		  			    "\n 2.1. Ingresar vuelo Aerolíneas: %.2f"
		  			    "\n 2.2. Cambiar vuelo Latam: %.2f"
						"\n3. Calcular todos los costos:"
						"\n4. Informar Resultados"
						"\n5. Carga forzada de datos"
						"\n6. Salir\n", kilometros, precioAerolineas, precioLatam);
						 }
	    	 if(flagKM==0 && flagLatam== 0 && flagAerolineas==1)
						 {
				 printf("\n1. Ingresar Kilómetros: %.2f"
						"\n2. Ingresar Precio de Vuelos: "
		 			    "\n 2.1. Cambiar vuelo Aerolíneas: %.2f"
		  			    "\n 2.2. Ingresar vuelo Latam: %.2f"
						"\n3. Calcular todos los costos:"
						"\n4. Informar Resultados"
						"\n5. Carga forzada de datos"
						"\n6. Salir\n", kilometros, precioAerolineas, precioLatam);
						 }

	    	 scanf("%d", &opcion);
	    	 if(opcion==6 || opcion==5 || opcion==4 || opcion==3 || opcion==2 || opcion==1)
	    	 {
	    	 switch(opcion)
	    	 {
	    	 case 1:
	    		 kilometros=PedirDato("Ingrese la distancia en kilometros: ");
	    		 flagKM=1;
	    		break;
	    	 case 2:
	    		 do{
	    		 printf("1- Seleccionar Aerolineas"
	    				 "\n2- Seleccionar Latam "
	    				 "\n3- Volver al menu principal"
	    				 "\nIngresar una opcion: \n");
	    		 scanf("%d", &submenu);
	    		 if(submenu==1 || submenu==2 || submenu==3)
	    		 {
	    		 switch(submenu)
	    		 {
	    		 case 1:
	    			 precioAerolineas=PedirDato("Ingrese el precio de Aerolineas: ");
	    			 flagAerolineas=1;
	    			 break;
	    		 case 2:
	    			 precioLatam = PedirDato("Ingrese el precio de Latam: ");
	    			 flagLatam=1;
	    			 break;
	    		 case 3:
	    			 break;
	    		 }
	    		 }
	    		 else{
	    			 printf("¡ERROR! Ingrese una opcion del submenu valida: \n");
	    		 }
	    		 }while(submenu!=3);


	    		 break;
	    	 case 3:
	    		 if(flagKM==0 || flagLatam==0 || flagAerolineas==0)
	    		 {
	    			 printf("\n¡ERROR! Opcion invalida por falta de datos\n"
	    					"            Ingrese datos\n");
	    			 break;
	    		 }

	    		 precioDebitoLatam = PrecioDebito(precioLatam);
	    		 precioCreditoLatam = PrecioCredito(precioLatam);
	    		 btcLatam = PrecioBTC(precioLatam);
	    		 precioPorKmLatam = PrecioUnitario(precioLatam, kilometros);
	    		 diferenciaDePrecio = DiferenciaDePrecio(precioLatam, precioAerolineas);
	    		 precioDebitoAerolineas = PrecioDebito(precioAerolineas);
	    		 precioCreditoAerolineas = PrecioCredito(precioAerolineas);
	    		 btcAerolineas = PrecioBTC(precioAerolineas);
	    		 precioUnitario = PrecioUnitario(precioAerolineas, kilometros);
	    		 printf("\n\nSE INGRESARON TODOS LOS DATOS Y SE CALCULARON LOS COSTOS\n\n");

	    		 break;
	    	 case 4:
	    		 if(flagKM==0 || flagLatam==0 || flagAerolineas==0)
	    		 {
	    			 printf("\nOpcion invalida por falta de datos\n"
	    					 "Ingrese datos\n");
	    			 break;
	    		 }
				 printf("Latam: %f"
						 "\na) Precio con tarjeta de débito: %.2f"
						 "\nb) Precio con tarjeta de crédito: %.2f"
						 "\nc) Precio pagando con bitcoin: %.2f"
						 "\nd) Precio unitario: %.2f", precioLatam, precioDebitoLatam, precioCreditoLatam, btcLatam, precioPorKmLatam);
				 printf("\nAerolíneas: %.2f"
						"\na) Precio con tarjeta de débito: %.2f"
						"\nb) Precio con tarjeta de crédito %.2f"
						"\nc) Precio pagando con bitcoin: %.2f"
						"d) Precio unitario: %.2f", precioAerolineas, precioDebitoAerolineas, precioCreditoAerolineas, btcAerolineas, precioUnitario);
				 printf("\nLa diferencia de precio es: %.2f", diferenciaDePrecio);


	    		 break;
	    	 case 5:

	    		 DatosHC();
	    		 opcion=6;

	    		 break;
	    	 case 6:
	    		 opcion=6;
	    		 break;
	    	 }
	    	 }
	    	 else
	    	 {
	    		 printf("¡ERROR! Ingrese una opcion del menu valida: \n");
	    	 }

	     }while(opcion!=6);

}
