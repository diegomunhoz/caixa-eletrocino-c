#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "bd.h"
#include "util.h"
#include "menuPrincipal.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() {
/**
	if(iniciaTelaLogin()){
		iniciaTelaMenuPrincipal();
	}
	
**/	
    system("pause");
    system("cls");

    char sql2[90000];
    sprintf(sql2,"select * from teste limit 1");

    printf("%s", ConsultaUnica(sql2));
    
	return 0;
}
