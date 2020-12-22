#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int dinero,resultado,resultado1;
	cout<<"Digite valor de dinero ";
	cin>>dinero;
	if (dinero>=100)
	{if (dinero==100){
	cout<<"Es una moneda de 100 ";
	}else if((dinero>=200)&&(dinero<500)){
	resultado=dinero%200;
	resultado1=dinero/200;
	if(resultado==0){
	cout<<"El numero de monedas de 200 es " <<resultado1;}else{
	cout<<"El numero de monedas de 200 es " <<resultado1 <<"\n";
	cout <<"El numero de monedas de "<<resultado <<"es " <<resultado1;
	}
    }
	else if((dinero>=500)&&(dinero<1000)){
	resultado=dinero%500;
	resultado1=dinero/500;
	if(resultado==0){
	cout<<"El numero de monedas de 500 es " <<resultado1;}else{
	cout<<"El numero de monedas de 500 es " <<resultado1 <<"\n";
	cout <<"El numero de monedas de "<<resultado <<"es " <<resultado1;
	}
    }
	else if((dinero>=1000)&&(dinero<2000)){
	resultado=dinero%1000;
	resultado1=dinero/1000;
	if(resultado==0){
	cout<<"El numero de monedas de 1000 es " <<resultado1;}else{
	cout<<"El numero de monedas de 1000 es " <<resultado1 <<"\n";
	cout <<"El numero de monedas de " <<resultado << "es " <<resultado1;
	}
    }
    else if((dinero>=2000)&&(dinero<5000)){
	resultado=dinero%2000;
	resultado1=dinero/2000;
	if(resultado==0){
	cout<<"El numero de billetes de 2000 es " <<resultado1;}else{
	cout<<"El numero de billetes de 2000 es " <<resultado1 <<"\n";
	cout <<"El numero de billetes de " << resultado << "es " << resultado1;
	}
    }
    else if((dinero>=5000)&&(dinero<10000)){
	resultado=dinero%5000;
	resultado1=dinero/5000;
	if(resultado==0){
	cout<<"El numero de billetes de 5000 es " <<resultado1;}else{
	cout<<"El numero de billetes de 5000 es " <<resultado1 <<"\n";
	cout <<"El numero de billetes de " <<resultado << "es " << resultado1;
	}
    }
    else if((dinero>=10000)&&(dinero<20000)){
	resultado=dinero%10000;
	resultado1=dinero/10000;
	if(resultado==0){
	cout<<"El numero de billetes de 10000 es " <<resultado1;}else{
	cout<<"El numero de billetes de 10000 es " <<resultado1 <<"\n";
	cout <<"El numero de billetes de " <<resultado << "es " << resultado1;
	}
    }
    else if(dinero>=20000){
	resultado=dinero%20000;
	resultado1=dinero/20000;
	if(resultado==0){
	cout<<"El numero de billetes de 20000 es " <<resultado1;}else{
	cout<<"El numero de billetes de 20000 es " <<resultado1 <<"\n";
	cout <<"El numero de billetes de " <<resultado << "es " << resultado1;
	}
    }
	else if(dinero==1000){
	cout<<"Es una moneda de 1000 ";
	}else if(dinero==2000){
	cout<<"Es un billete de 2000 ";
	}else if(dinero==5000){
	cout<<"Es una billete de 5000 ";
	}else if(dinero==10000){
	cout<<"Es un billete de 10000 ";
	}else if(dinero==20000){
	cout<<"Es un billete de 20000 ";
	}else
	cout<<"Es un valor erroneo";
	}
	

	return 0;
}
