//código funciones

// Luis Enrique Ramirez Loez
#include <stdio.h>
#include <math.h>
int factorial( int fac[]) {
	fac[0]=1;
	for (int i = 1; i <= 6; i++) {
		fac[i] = fac[i - 1] * i;
	}
}

void funcion1( ) {

	int fac[7];
	factorial(fac);
	float xi,x2,delta,derivada[7],error,fi;
	float aprox=0;
	printf(" ingresa una el valor de xi.\n");
	scanf("%f",&xi);
	printf(" ingresa una el valor de x2.\n");
	scanf("%f",&x2);
	printf(" ingresa el valor de fi.\n");
	scanf("%f",&fi);
	delta=x2 - xi;
	derivada[0] = sqrt(xi);
	derivada[1] = (1.0/2.0) * (1.0 / sqrt(xi));
	derivada[2] = (-1.0/4.0) * (1.0 / pow(xi, 1.5));
	derivada[3] = (3.0/8.0) * (1.0 / pow(xi, 2.5));
	derivada[4] = (-15.0/16.0) * (1.0 / pow(xi, 3.5));
	derivada[5] = (105.0/32) * (1.0 / pow(xi, 4.5));
	for( int j= 0; j<=4; j++) {
		aprox=aprox+derivada[j]*pow(delta,j)/fac[j];
		printf("%f\n",aprox);
	}
	error= (derivada[5]*pow(delta,5)*fi)/fac[5];
	printf("error=%f\n",error+aprox);
}

void funcion2( ) {

	int fac[7];
	factorial(fac);
	float xi,x2,delta,derivada[7],error,fi;
	float aprox=0;
	printf(" ingresa una el valor de xi.\n");
	scanf("%f",&xi);
	printf(" ingresa una el valor de x2.\n");
	scanf("%f",&x2);
	printf(" ingresa el valor de fi.\n");
	scanf("%f",&fi);
	delta=x2 - xi;
	derivada[0] = log(xi);
	derivada[1] = 1/xi;
	derivada[2] = -1/pow(xi,2);
	derivada[3] = 2/pow(xi,3);
	derivada[4] = -6/pow(xi,4);
	derivada[5] =24/pow(xi,5);
	for( int j= 0; j<=4; j++) {
		aprox=aprox+derivada[j]*pow(delta,j)/fac[j];
		printf("%f\n",aprox);
	}
	error= (derivada[5]*pow(delta,5)*fi)/fac[5];
	printf("error=%f\n",error+aprox);
}

void funcion3( ) {

	int fac[7];
	factorial(fac);
	float xi,x2,delta,derivada[7],error,fi;
	float aprox=0;
	printf(" ingresa una el valor de xi.\n");
	scanf("%f",&xi);
	printf(" ingresa una el valor de x2.\n");
	scanf("%f",&x2);
	printf(" ingresa el valor de fi.\n");
	scanf("%f",&fi);
	delta=x2 - xi;

	derivada[0] = 1/xi;
	derivada[1] = -1/pow(xi,2);
	derivada[2] = 2/pow(xi,3);
	derivada[3] = -6/pow(xi,4);
	derivada[4] =24/pow(xi,5);
	derivada[5] =-120/pow(xi,6);
	for( int j= 0; j<=4; j++) {
		aprox=aprox+derivada[j]*pow(delta,j)/fac[j];
		printf("%f\n",aprox);
	}
	error= (derivada[5]*pow(delta,5)*fi)/fac[5];
	printf("error=%f\n",error+aprox);
}
void funcion4( ) {

	int fac[7];
	factorial(fac);
	float xi,x2,delta,derivada[7],error,fi;
	float aprox=0;
	printf(" ingresa una el valor de xi.\n");
	scanf("%f",&xi);
	printf(" ingresa una el valor de x2.\n");
	scanf("%f",&x2);
	printf(" ingresa el valor de fi.\n");
	scanf("%f",&fi);
	delta=x2 - xi;
  derivada[0] = xi * sin(xi);
    derivada[1] = sin(xi) + xi * cos(xi);
    derivada[2] = 2 * cos(xi) - xi * sin(xi);
    derivada[3] = -3 * sin(xi) - xi * cos(xi);
    derivada[4] = -2 * cos(xi) + xi * sin(xi);
    derivada[5] = 3 * sin(xi) + xi * cos(xi);

	for( int j= 0; j<=4; j++) {
		aprox=aprox+derivada[j]*pow(delta,j)/fac[j];
		printf("%f\n",aprox);
	}
	error= (derivada[5]*pow(delta,5)*fi)/fac[5];
	printf("error=%f\n",error+aprox);
}
void funcion5( ) {

	int fac[7];
	factorial(fac);
	float xi,x2,delta,derivada[7],error,fi;
	float aprox=0;
	printf(" ingresa una el valor de xi.\n");
	scanf("%f",&xi);
	printf(" ingresa una el valor de x2.\n");
	scanf("%f",&x2);
	printf(" ingresa el valor de fi.\n");
	scanf("%f",&fi);
	delta=x2 - xi;

	derivada[0] = xi * cos (xi);
	derivada[1] =cos(xi) -xi * sin(xi) ;
	derivada[2] =-2 *sin(xi) -xi * cos(xi);
	derivada[3] =xi * sin(xi) -3 * cos(xi);
	derivada[4] =2 * sin(xi) + xi * cos(xi) ;
	derivada[5] =5 * cos(xi) -xi * sin(xi);
	for( int j= 0; j<=4; j++) {
		aprox=aprox+derivada[j]*pow(delta,j)/fac[j];
		printf("%f\n",aprox);
	}
	error= (derivada[5]*pow(delta,5)*fi)/fac[5];
	printf("error=%f\n",error+aprox);
}

int main()
{
	int p;


	printf(" Elije una funcion del menu.\n");
		
	printf("f(x) = x^1/2........1\n");
	printf("f(x) = ln(x)........2\n");
	printf("f(x) = 1/x..........3\n");
	printf("f(x) = xsenx........4\n");
	printf("f(x) = xcosx........5\n");
	scanf("%d",&p);

	switch (p) {
	case 1:
		funcion1();
		break;
	case 2:
		funcion2();
		break;
	case 3:
		funcion3();
		break;
		case 4:
		funcion4();
		break;
		case 5: 
		funcion5();
		break;
	}
	return 0;
}
