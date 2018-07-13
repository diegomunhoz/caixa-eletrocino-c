
bool iniciaTelaLogin(){

	int agencia = 0, conta = 0, senha = 0;
	bool valida = false;
	system("cls");
	
	printf("===============================================================================\n");
	printf("==                  U N I P  ALPHAVILLE  -  TRABALHO   P I M                 ==\n");
	printf("===============================================================================\n");
	printf("                     SISTEMA DE CONTROLE - CAIXA ELETRONICO                  ==\n");
	printf("===============================================================================\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                             ACESSO AO SISTEMA                             ==\n");
	printf("==                                                                           ==\n");
	printf("==                   =======================================                 ==\n");
	printf("==                   ==                                   ==                 ==\n");
	printf("==                   ==       AGENCIA.:                   ==                 ==\n");
	printf("==                   ==                                   ==                 ==\n");
	printf("==                   ==       CONTA...:                   ==                 ==\n");
	printf("==                   ==                                   ==                 ==\n");
	printf("==                   ==       SENHA...:                   ==                 ==\n");
	printf("==                   ==                                   ==                 ==\n");
	printf("==                   =======================================                 ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("===============================================================================\n");
	printf("  MENSAGEM.:                                                                   \n");
	printf("===============================================================================\n");

	gotoxy(40,11);
	scanf("%d", &agencia);

	if(agencia == 0){
		valida = true;
	}else{
		system("cls");
		
	}
	system("cls");
	
	return valida;
}

void iniciaTelaMenuPrincipal(){

	int opcao = 0;

	system("cls");
	
	printf("===============================================================================\n");
	printf("==                  U N I P  ALPHAVILLE  -  TRABALHO   P I M                 ==\n");
	printf("===============================================================================\n");
	printf("                     SISTEMA DE CONTROLE - CAIXA ELETRONICO                  ==\n");
	printf("===============================================================================\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==              1 - CONSULTAR SALDO             5 - EFETUAR SAQUE            ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==              2 - CONSULTAR EXTRATO           6 - EFETUAR DEPOSITO         ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==              3 - EFETUAR PAGAMENTO           7 - TROCAR SENHA             ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==              4 - EFETUAR TRANSFERENCIA       0 - ENCEERRAR                ==\n");
	printf("==                                                                           ==\n");
	printf("==                               OPCAO...:                                   ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("===============================================================================\n");
	printf("  MENSAGEM.:                                                                   \n");
	printf("===============================================================================\n");

	gotoxy(43,18);
	scanf("%d", &opcao);


	system("cls");
}

void iniciaTelaSaldo(){

	int opcao = 0;

	system("cls");
	
	printf("===============================================================================\n");
	printf("==                  U N I P  PAULISTA   -   TRABALHO   P I M                 ==\n");
	printf("===============================================================================\n");
	printf("                     SISTEMA DE CONTROLE - CAIXA ELETRONICO                  ==\n");
	printf("===============================================================================\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("===============================================================================\n");
	printf("  MENSAGEM.:                                                                   \n");
	printf("===============================================================================\n");

	gotoxy(40,11);
	scanf("%d", &opcao);
		
	system("cls");
}

void iniciaTelaExtrato(){

	int opcao = 0;

	system("cls");
	
	printf("===============================================================================\n");
	printf("==                  U N I P  PAULISTA   -   TRABALHO   P I M                 ==\n");
	printf("===============================================================================\n");
	printf("                     SISTEMA DE CONTROLE - CAIXA ELETRONICO                  ==\n");
	printf("===============================================================================\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("===============================================================================\n");
	printf("  MENSAGEM.:                                                                   \n");
	printf("===============================================================================\n");

	gotoxy(40,11);
	scanf("%d", &opcao);
		
	system("cls");
}

void iniciaTelaDeposito(){

	int opcao = 0;

	system("cls");
	
	printf("===============================================================================\n");
	printf("==                  U N I P  PAULISTA   -   TRABALHO   P I M                 ==\n");
	printf("===============================================================================\n");
	printf("                     SISTEMA DE CONTROLE - CAIXA ELETRONICO                  ==\n");
	printf("===============================================================================\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("===============================================================================\n");
	printf("  MENSAGEM.:                                                                   \n");
	printf("===============================================================================\n");

	gotoxy(40,11);
	scanf("%d", &opcao);
		
	system("cls");
}

void iniciaTelaPagamento(){

	int opcao = 0;

	system("cls");
	
	printf("===============================================================================\n");
	printf("==                  U N I P  PAULISTA   -   TRABALHO   P I M                 ==\n");
	printf("===============================================================================\n");
	printf("                     SISTEMA DE CONTROLE - CAIXA ELETRONICO                  ==\n");
	printf("===============================================================================\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("===============================================================================\n");
	printf("  MENSAGEM.:                                                                   \n");
	printf("===============================================================================\n");

	gotoxy(40,11);
	scanf("%d", &opcao);
		
	system("cls");
}

void iniciaTelaTransferencia(){

	int opcao = 0;

	system("cls");
	
	printf("===============================================================================\n");
	printf("==                  U N I P  PAULISTA   -   TRABALHO   P I M                 ==\n");
	printf("===============================================================================\n");
	printf("                     SISTEMA DE CONTROLE - CAIXA ELETRONICO                  ==\n");
	printf("===============================================================================\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("===============================================================================\n");
	printf("  MENSAGEM.:                                                                   \n");
	printf("===============================================================================\n");

	gotoxy(40,11);
	scanf("%d", &opcao);
		
	system("cls");
}

void iniciaTelaTrocarSenha(){

	int opcao = 0;

	system("cls");
	
	printf("===============================================================================\n");
	printf("==                  U N I P  PAULISTA   -   TRABALHO   P I M                 ==\n");
	printf("===============================================================================\n");
	printf("                     SISTEMA DE CONTROLE - CAIXA ELETRONICO                  ==\n");
	printf("===============================================================================\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("==                                                                           ==\n");
	printf("===============================================================================\n");
	printf("  MENSAGEM.:                                                                   \n");
	printf("===============================================================================\n");

	gotoxy(40,11);
	scanf("%d", &opcao);
		
	system("cls");
}
