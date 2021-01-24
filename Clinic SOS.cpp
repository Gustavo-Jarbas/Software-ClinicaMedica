#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <iostream>
#include <string.h>
#include <dirent.h>
#include <conio.h>


int layout_modulo (char nome[]){ // essa função layout_modulo recebe como parametro apenas o nome do modulo
system("cls");
	
    printf("   __________________________________________________________________________\n");
	printf("  |          ======================================================          |\n");
	printf("                                     ________                                 \n");
	printf("            =                       |========|                      =         \n");
	printf("            =                       |========|                      =         \n");              
	printf("            =                       |========|                      =         \n");
	printf("            =              |==========================|             =         \n");
	printf("            =              |======== clinicSOS =======|             =         \n");
	printf("            =              |==========================|             =         \n");
	printf("            =                       |========|                      =         \n");
	printf("            =                       |========|                      =         \n");
	printf("            =                       |========|                      =         \n");
	printf("            =                       |========|                      =         \n");
	printf("            =                       |========|                      =         \n");
	printf("            =                       |========|                      =         \n");
	printf("            =                       |========|                      =         \n");
	printf("                                                                              \n");
    printf("             ======================================================           \n");
	printf("                               %s                                             \n",nome);
	printf("  |__________________________________________________________________________|\n");
}

int carregando(char texto[], int velocidade){ // essa função recebe dois parametros, um que é texto que será exibido em quanto carrega e outro a velocidade em que carrega
	
	for (int i = 0; i < 110; i+=10)  // faz um enquanto i for menor que 110 vai somando em 10 em 10
	{
	
	printf("                   %s  %d/100",texto,i);
	
        for (int j = 0; j < 15; j++) // nesse mesmo loop de cima tem outro loop fazendo com que, enquanto o j < 15 ele adicione mais um "."
		{
            printf(".");
            Sleep(velocidade); // velocidade em que se aparece o ponto
        }
  
	printf("\r"); // retorna até o começo da linha
		for (int j=0; j < 80; j++) 
		{
			printf(" "); // adiciona 80 espaços para limpar a linha
			
		}
	printf("\r"); // retonar até o começo da linha
    }
}
int musica_sair(){
Beep(293,250);
printf("    ___   _   _          _        ___    ___    ___       _                            _                           \n");
Beep(293,250);
printf("   / __| | | (_)  _ _   (_)  __  / __|  / _ \\  / __|     /_\\    __ _   _ _   __ _   __| |  ___   __   ___         \n");
Beep(220,250);
printf("  | (__  | | | | | ' \\  | | / _| \\__ \\ | (_) | \\__ \\    / _ \\  / _` | | '_| / _` | / _` | / -_) / _| / -_)     \n");
Beep(220,250);
printf("   \\___| |_| |_| |_||_| |_| \\__| |___/  \\___/  |___/   /_/ \\_\\ \\__, | |_|   \\__,_| \\__,_| \\___| \\__| \\___| \n");
Beep(293,250);
printf("                                                               |___/                                      \n\n\n\n\n");
Beep(293,250);
printf("            __   __        _   _                                                  \n");
Beep(330,250); 
printf("            \\ \\ / /  ___  | | | |_   ___     ___  ___   _ __    _ __   _ _   ___  \n");
Beep(330,250);
printf("             \\ V /  / _ \\ | | |  _| / -_)   (_-< / -_) | '  \\  | '_ \\ | '_| / -_) \n");
Beep(349,250);
printf("              \\_/   \\___/ |_|  \\__| \\___|   /__/ \\___| |_|_|_| | .__/ |_|   \\___| \n"); 
Beep(349,250);
printf("                                                               |_|                \n\n\n");
Beep(330,250);

printf("                                                         _   ___             \n");
Beep(330,250);
printf("                                                        (_) |   \\             \n"); 
Beep(293,250);
printf("                                                         _  | |) |             \n");
Beep(293,250);
printf("                                                        (_) |___/              \n");
Beep(330,250);
Beep(293,250);
Beep(262,250);
Beep(262,250);
Beep(196,250);
Beep(196,250);
Beep(262,250);
Beep(262,250);
Beep(293,250);
Beep(293,250);
Beep(330,250);
Beep(330,250);
Beep(293,250);
Beep(293,250);
Beep(262,250);
Beep(262,250);
Beep(330,250);
Beep(262,250);
Beep(175,250);
Beep(175,250);
Beep(131,250);
Beep(131,250);
Beep(175,250);
Beep(175,250);
Beep(196,250);
Beep(196,250);
Beep(220,250);
Beep(220,250);
Beep(196,250);
Beep(196,250);
Beep(175,250);
Beep(175,250);
Beep(220,500);
Beep(175,500);

}

typedef struct login{  //struc é para criar uma estrutura que aramzenas variaveis, é mais para separar um conjunto de variaveis de outro conjunto e deixar o codigo mais organizado, não sei explicar muito bem isso xd.
	char cpf1[12];
	char senha1[50];
} LOGIN;
typedef struct nascimento {
	int dia;
	int mes;
	int ano;
} NASCIMENTO;

typedef struct cadastro{ 
	char nome[30];
	char email[50];
	char senha[50];
	char cpf[12];
	int cadastro;
	char veri_senha[50];
	int novamente;
	int novamente1;
	int TelaMenuAceitaCadastro;
	
	NASCIMENTO aniversario;
} CADASTRO;

struct MENU{

	int menu;
	int menu_loop;	
};
struct CadastroPaciente{
	int cadastro;
	char escolha;
	int retornar;
};
struct Gerador_relatorios{
	int escolha;
	int voltar;

};

struct UnidadeDeRede // nome do struct
{ 
	int escolha;
	int loop;
	char mais[10];
	int maisA;
	int maisB;
	int maisC;
	int Maior;
	char clinicaMaior[25];
	char unidadeEscolhida[30];
	char mesEscolhido[30];
	char mesEscolhido1[30];
	char totalMesUnidade[10];
	int unidadeEscolha;
	int mesFaturamento;
	FILE *redeMaisAtende;
	FILE *unidadeDeRede;
	FILE *totalDeRede;
	DIR *dir;
	struct dirent *lsdir;
	char primeiro[30];
	char terceiro[25];
	char quarto[30];
};

struct relatorio_paciente{ 

	struct dirent *lsdir;
	DIR *pasta;
	char copia[20];
    char nome[150];
    char nascimento[50];
    char cpf[20];
    char pront[20];
    FILE *abrirpront;
    int escolha;
    int total;
    char voltar_menu;

};

struct relatorio_agendador{ 

	struct dirent *lsdir;
	DIR *pasta;
	char copia[20];
    char nome[150];
    char nascimento[50];
    char cpf[20];
    char pront[20];
    FILE *abrirpront;
    int escolha;
    int total;
    char voltar_menu;
    
   	char cartao[50];
	char responsavel[50];
	char medico[50];
	char cpf2[50];
	char crm[50];
	char especialidade[50];
	char clin[50];
	char preco[50];
	char data[50];
	char hora[50];
};

struct Relatorio_medico{
	
    DIR *pasta;
    struct dirent *lsdir;
    char nome[150];
    char cpf[20];
    char crm[15];
    char email[50];
    char nasci[11];
    char dinheiro[10];
    char especialidade[50];
    char voltar_menu;
    int total;    
    FILE *abrirpront;
    char copia[20];
};

struct relatorio_usuarios{ 

	struct dirent *lsdir;
	DIR *pasta;
	char copia[20];
    char nome[150];
    char nascimento[50];
    char cpf[20];
    char pront[20];
    FILE *abrirpront;
    int escolha;
    int total;
    char voltar_menu;
    

};
typedef struct atendimentoM{
	char dia[10];
	char hora[120];
	char Segunda[120];
	char Terca[120];
	char Quarta[120];
	char Quinta[120];
	char Sexta[120];
	
}ATENDIMENTOM;

typedef struct nascimentoM{
	int dia;
	int mes;
	int ano;
} NASCIMENTOM;

typedef struct cadastroM{ 
	char nome[30];
	char email[50];
	char cpf[12];
	char CRM[30];
	char especialidade[50];
	char clinica[10];
	int preco;
	ATENDIMENTOM horario;
	NASCIMENTOM aniversario;
} CADASTROM;

struct CadastroMedico{
	int escolha_especialidade;
	int escolha_dia;
	int loop;
	int escolha_horario_switch;
	char escolha_horario[60];
	int comeco;
	int ret;
	char medico_agendado[80];
	char barra[60];
	char especialidades_n[60];
	char txt[60];
	char turno[60];
	char velho[50]; 
	char aux[60];
	char novo[60];
	FILE *cadMedico;
 	FILE *Agendamento;
 	
 	int escolha;
 	char crm_altera[30];
 	FILE *abrircadastro;
 	char conteudo_medico[600];
 	char alterar_medico_cadastro;
 	char txt_medico[5] = ".txt";
 	char contat1[30] = "Cadastros_Medicos\\";
};
typedef struct AgendamentoH{
	FILE *Agendamento;
 	FILE *Agendado_paciente;
 	FILE *buscar_prontuario;
	int loop;
 	int escolha_especialidade;
 	int escolha_dia;
 	char dia[15];
 	char especialidade[30];
 	int marcar;
 	char guardarHora[10];
 	char horario_escolhido[67];
	char puxar_pacienteData[100];
	char puxar_pacienteCpf[100];
	char puxar_pacienteCartao[100];
	char puxar_pacienteResponsavel[100];
	DIR *dir;
    struct dirent *lsdir;
    char primeiro[30];
    char terceiro[40];
    char quarto[30];
    char primeiro1[17];
    char agendandoCPF[12];
    char puxar[10];
    char puxarVazio[50];
    char puxarNome[100];
    char puxarEspecialidade[100];
    char puxarCPF[100];
    char puxarCRM[30];
    char puxarClinica[100];
    char puxarPreco[100];
    char puxarDia[100];
    char puxarTurno[100];
    char puxarHorario[100];
    char semana1[20];
    char semana2[20];
	char horarios[100];
	char segunda[25];
	char terca[25];
	char quarta[25];
	char quinta[25];
	char sexta[25];
	char segunda2[50];
	char terca2[25];
	char quarta2[25];
	char quinta2[25];
	char sexta2[25];
	char h1[10];
	char h2[10];
	char h3[10];
	char lanche[10];
	char h4[10];
	char h5[10];
	char h6[10];
	char h7[10];
	char h11[10];
	char h22[10];
	char h33[10];
	char lanche2[10];
	char h44[10];
	char h55[10];
	char h66[10];
	char h77[10];
	char horarioEscolhido[10];
	char novo[17];
	char paciente_agendado[50];
	char buscarProntuario[32];
	
	char pacienteCpfBackUp[100];
	
	
}SegundaSexta;
typedef struct sextaSegunda
{
	SegundaSexta segunda;
	SegundaSexta terca;
	SegundaSexta quarta;
	SegundaSexta quinta;
	SegundaSexta sexta;

	
}SextaSegunda; 

typedef struct sextaSegunda2
{
	SegundaSexta segunda1;
	SegundaSexta terca1;
	SegundaSexta quarta1;
	SegundaSexta quinta1;
	SegundaSexta sexta1;
}SextaSegunda2;

struct CancelarConfirmarConsulta{
	FILE *agendamentosCC;
	FILE *confirmarAgendamento;
	FILE *dinheiro;
	FILE *mesDinheiro;
	FILE *unidadeRedeQueMaisAtende;
	
	int Atendido;
	int mesConsulta;
	int concluido;
	int escolha;
	char buscarCPF[20];
	char cpfBuscar[20];
	char especialidadeBuscar[35];
	char pesquisarTurno[15];	
	char Agendamentos[30];	

	
	char nomePaciente[100];
	char cpfPaciente[25];
	char cartaoPaciente[100];
	char responsavelPaciente[100];
	char nomeMedico[100];
	char cpfMedico[20];
	char CRM[20];
	char CRMpuxar[10];
	char especialidade[35];
	char clinica[50];
	char preco[35];
	char dia[35];
	char horas[35];

	char puxarCRM[50];
	char puxarVazio[50];
	char puxarNome[50];
	char puxarEspecialidade[50];
	char puxarCPF[50];
	char puxarClinica[50];
	char puxarPreco[50];
	char puxarDia[50];
	char puxarTurno[20];
	char puxarTurno2[20];
	char puxarHorario[80];
	char horarios[10];
	char h1[10];
	char h2[10];
	char h3[10];
	char lanche[10];
	char h4[10];
	char h5[10];
	char h6[10];
	char h7[10];
	char buscarHorario[100];
	char puxarDados[10];
	char unidadeQueAtendeMais[100];	
	char moneyClinic[100];
	char clinicaDinheiroTotal[100];
	char totalMes[100];
	char totalTotalMes[100];
	int comeco;
	
	int valorConsulta,soma;
	char n1[10];
	char n2[10];
	char diaEmNumeros[20];
	char dinheiroTotal[100];
    char dinheiroTotalTotal[100];
    int escolha_horario_escolha;
	int remover;
	int qualClinica;
};
int main()
{
	FILE *login; // aqui eu declaro o tipo da variavel arquivos txt
	FILE *arquivo;		
	LOGIN log; // aqui eu declaro o nome das struct, nao sei muito bem se esse é o jeito certo mas deu certo xD
	NASCIMENTO nasc;
	CADASTRO cad;
	MENU menu;
	CadastroPaciente cadP;
	cad.TelaMenuAceitaCadastro = 2;
	Gerador_relatorios ge_rel;
	UnidadeDeRede rede; // rede é o apelido da struct, para chamar a variavel escolha da struct, tem que por apelido. (apelido Ponto) primeiro. Exemplo: rede.escolha
	relatorio_paciente Re_pac;
	Relatorio_medico relMed;
	relatorio_usuarios relUs;
	AgendamentoH agendH;
	CancelarConfirmarConsulta CCC;
	NASCIMENTOM nascM;
	CADASTROM cadM;
	ATENDIMENTOM atenM;
	CadastroMedico cadMM; 
	sextaSegunda SS;
	sextaSegunda2 SSS;
	relatorio_agendador relAgend;		
	cadMM.comeco = 0;
	
	char c;
	int pos;
	int diaHoje;
	int diaDaSemanaH;
	int mesHoje;
	int semanaHoje;
	int diaSemana;
	char diaDaSemana[15];
	char ssegunda[30];
	char tterca[30];
	char qquarta[30];		
	char qquinta[30];
	char ssexta[30];
	int segunda1 = 0; 
	int terca1   = 0;  
	int quarta1  = 0; 
	int quinta1  = 0; 
	int sexta1   = 0;
	int segunda2 = 0;
	int terca2   = 0;
	int quarta2  = 0;
	int quinta2  = 0;
	int sexta2   = 0;
	
	do
	{
		system("color 71");

		Sleep (1000);
		printf("         ..######..##.......####.##....##.####..######......######...#######...######.\n"); 
		Sleep (150);
		Beep(493,350);
		Beep(659,500);// Sleep é para demorar (quantidade) em milisegundos
		printf("         .##....##.##........##..###...##..##..##....##....##....##.##.....##.##....##\n"); 
		Sleep (300);
		Beep(783,250);
		Beep(740,330);// Beep (Hertz,milisegundos)
		printf("         .##.......##........##..####..##..##..##..........##.......##.....##.##......\n"); 
		Sleep (300);
		Beep(659,440);
		Beep(987,400);
		printf("         .##.......##........##..##.##.##..##..##...........######..##.....##..######.\n"); 
		Sleep (100);
		Beep(880,500);
		Beep(740,450);
		printf("         .##.......##........##..##..####..##..##................##.##.....##.......##\n"); 
		Sleep (300);
		Beep(0,60);   
		Beep(659,350);
		printf("         .##....##.##........##..##...###..##..##....##....##....##.##.....##.##....##\n"); 
		Sleep (320);
		Beep(783,400);
		Beep(740,300);
		printf("         ..######..########.####.##....##.####..######......######...#######...######.\n"); 
		Sleep (575);
		Beep(659,450);
		Beep(0,40);
		Beep(659,300);
		Beep(493,500);
		printf("                                                ________                                    \n");
		printf("                                               |========|                                   \n");
		printf("                                               |========|                                   \n");              
		printf("                                               |========|                                   \n");
		printf("                                      |==========================|                          \n");
		printf("                                      |======== clinicSOS =======|                          \n");
		printf("                                      |==========================|                          \n");
		printf("                                               |========|                                   \n");
		printf("                                               |========|                                   \n");
		printf("                                               |========|                                   \n");
		printf("                                               |========|                                   \n");
		printf("                                               |========|                                   \n");
		printf("                                               |========|                                   \n");
		printf("                                               |========|                                   \n");
		printf("                                               |========|                                   \n");	
		printf("                                               |========|                                   \n");
		printf("                                               |========|                                   \n");
		printf("                                               |========|                                   \n");
		printf("                                              [==========]                                  \n");
		
		Sleep (1200);
		system("cls");// esse é o comando para limpar tela
		// começo do cadastro de usuario

		do
		{
			
	    printf("   __________________________________________________________________________\n");
		printf("  |                                                                          |\n");
		printf("                           Bem-Vindo ao ClinicSOS                             \n\n");
		printf("    Digite a opcao que deseja:                           \n");
		printf("    [1]Entrar com meu login\n");
		printf("    [2]Criar um novo login\n\n");
		printf("    Resposta: ");
		scanf("%d", &cad.cadastro);
		
		system("cls");
	
	    }while((cad.cadastro != 1) && (cad.cadastro != 2));
	    do
	    {
			if ((cad.cadastro == 1) || (cad.novamente == 1))
			{
				do
				{
					printf(" __________________________________________________________________________\n");
					printf("|                         Favor digitar CPF e sua senha                    |\n\n");
					printf("  Digite seu CPF (somente numeros): ");
					fflush(stdin);
					scanf("%s", &log.cpf1); // aqui eu insiro o numero do cpf na variavel cpf1 da struct log, struc é basicamente para separar as variaveis e deixar o codigo mais bonito
					
					char loggCadastro[] = "Logins\\";// isso é para futuramente procurar um txt dentro da pasta "Logins\\"
					
					
					strcat(loggCadastro, log.cpf1); // strcat concatena 2 variaveis string(junta as duas) o logg é "Logins\\" e o auxx é o cpf digitado que foi salvo na variavel log.cpf1, ficando "Logins\\(CPF digitado)"
					char txtCadastro[] = ".txt";
					strcat(loggCadastro, txtCadastro); // agora eu concateno o logg que tem o valor "Logins\\(CPF digitado)" com o txt que é ".txt" ficando "Logins\\(CPF DIGITADO).txt
					
					login = fopen(loggCadastro, "r"); // Agora eu abro um txt com esse nome "Logins\\(CPF digitado).txt" Se o txt nao for encontrado significa que esse login nao foi cadastrado! "r" é para ler informações do txt "w" é salvar informação
					
					char puxarCPFCadastro[20];
					char puxarSENHACadastro[50];
					
					fscanf(login, "%s", &puxarCPFCadastro); // aqui eu puxo o oque esta digitado na primeira linha do txt "CPF"
					fscanf(login, "%s", &puxarSENHACadastro); // aqui eu puxo o que esta digitado na segunda linha do txt "SENHA"
					
					//printf("%s %s", &puxarCPF, &puxarSENHA); //comandos para testar se está dando certo
					
					
					printf("  Digite sua senha:");
					fflush(stdin);
					
				    
				    
				    
				     pos = 0;
				     memset (&log.senha1, 0, sizeof (log.senha1) );
				    
					do 
					{
				        c = getch();
				        
				        if( isprint(c) ) 
				        {
				            log.senha1[ pos++ ] = c;
				            printf("%c", '*');
				        }
				        else if( c == 8 && pos )
				        {
				            log.senha1[ pos-- ] = '\0';
				            printf("%s", "\b \b");
				        }
				    } while( c != 13 );
					
					
					
					printf("\n|__________________________________________________________________________|\n");
					
				
					if((strcmp(log.cpf1,puxarCPFCadastro)==0) && (strcmp(log.senha1,puxarSENHACadastro)==0)) // aqui é para comparar se a senha E o cpf digitado batem cm o encontrado no txt, se o txt nao foi encontrado vai para o ELSE, se é diferente tambem.
					{
						
						fclose(login); //fechar arquivo login
						cad.TelaMenuAceitaCadastro = 1;
						cad.novamente = 3;						
					
					}
					else
					{	
						
						printf(" \\____________________| CPF OU SENHA INCORRETOS!!! |______________________/\n");
						printf("                      |____________________________|\n\n");
						system("color 0c");Beep(100,10);
						
						fclose(login);
						printf(" __________________________________________________________________________\n");
						printf("|                                                                          |\n");
						printf("  Deseja:                           \n");
						printf("  [1]-Tentar Novamente\n");
						printf("  [2]-Ir para tela de Cadastro\n\n");
						printf("  Resposta: ");
						scanf("%d", &cad.novamente);
						system("cls");
						system("color 71");
					}
		 		}while(cad.novamente == 1);	 
				// Depois de verificar se o Login bate com o registrado, o é salvo no historico o login dele e essa tela termina. // anotação para uma futura evolução do codigo
			}
			if ((cad.cadastro == 2) || (cad.novamente == 2))
			{
				do
				{
					cad.cadastro = 0;
					cad.novamente = 0;
					cad.novamente1 = 0;
			
					login = fopen("Logins\\login.txt", "w"); // abrir uma arquivo txt dentro da pasta Logins, esse txt se chama login, o W significa que vai entrar informaçõs no txt
					arquivo = fopen("Cadastros\\cadastro.txt", "w"); // o msm que o de cima
					
					
					if((arquivo == NULL) || (login == NULL)) // ser igual a NULL significa que o arquivo por algum motivo não pode ser criado ou aberto
					{
						printf("Erro ao criar o arquivo!");
						return 1;
					}
					else
					{
						system("color 71");
						
						printf(" __________________________________________________________________________\n");
						printf("|                         Peencha os campos necessarios                    |\n\n");
						printf(" Digite seu Nome: ");
						fflush(stdin);
						gets(cad.nome); // gets é tipo scanf %s só que o scanf só le uma palavra, o gets le os espaços tambem
						fprintf(arquivo, "%s\n", cad.nome); // fprintf é para escrever a informação em um txt, nesse caso o txt se chama "arquivo", e a informação é o cad.nome (struct cad variavel nome)
						
						printf(" Digite seu CPF (somente numeros): ");
						scanf("%s", &cad.cpf);
						fprintf(arquivo, "%s\n", cad.cpf); // aqui é o msm que o de cima
						fprintf(login, "%s\n", cad.cpf);// o cad.cpf é salvo em 2 arquivos txt, uma para ser puxado no login e outro para ser armazenado para uma futura tela de busca pelas informaçõs do paciente.
						
						printf(" Digite seu email: ");
						scanf("%s", &cad.email);
						fprintf(arquivo, "%s\n", cad.email);
	
						printf(" Digite sua data de nascimento com espacos(DIA MES ANO): ");
						scanf("%d %d %d", &cad.aniversario.dia, &cad.aniversario.mes, &cad.aniversario.ano);
						fprintf(arquivo, "%d/%d/%d\n", cad.aniversario.dia, cad.aniversario.mes, cad.aniversario.ano);
						printf(" Digite uma senha: ");
						
						
						pos = 0;
					    memset (&cad.senha, 0, sizeof (cad.senha) );
					    memset (&c, 0, sizeof (c) );
						do 
						{
					        c = getch();
					        
					        if( isprint(c) ) 
					        {
					            cad.senha[ pos++ ] = c;
					            printf("%c", '*');
					        }
					        else if( c == 8 && pos )
					        {
					            cad.senha[ pos-- ] = '\0';
					            printf("%s", "\b \b");
					        }
					    } while( c != 13 );
					    
					    
					    memset (&cad.veri_senha, 0, sizeof (cad.veri_senha) );
					    
					    pos = 0;
					    
						printf("\n Digite sua senha novamente: ");
						do 
						{
					        c = getch();
					        
					        if( isprint(c) ) 
					        {
					            cad.veri_senha[ pos++ ] = c;
					            printf("%c", '*');
					        }
					        else if( c == 8 && pos )
					        {
					            cad.veri_senha[ pos-- ] = '\0';
					            printf("%s", "\b \b");
					        }
					    } while( c != 13 );
					    
					    
						printf("\n|__________________________________________________________________________|\n");
						
						if  (strcmp(cad.senha, cad.veri_senha)==0) // verificar se as senhas digitadas sao iguais
						{
							fprintf(arquivo, "%s\n", cad.senha); // se as senhas sao iguals sao salvas no txt
							fprintf(login, "%s\n", cad.senha);
							fclose(login); // fechar os arquivos
							fclose(arquivo);
							
							login = fopen("\\Logins\\login.txt", "w"); // agr eu abro o arquivo denovo, por algum motive só digitando \\ antes do "Logins\\login.txt" eu consegui mudar o nome do txt
							
							
							
							int retCadastro;
							char velhoCadastro[] = "Logins\\login.txt"; // nome do arquivo antes de ser alterado
							char auxCadastro[12];
							char novoCadastro[] = "Logins\\";
							// aqui é o esquema de mudar o nome do txt para quando a pessoa for fazer o login eu saber diferenciar e puxar o txt pelo CPF do usuario
							strcpy(auxCadastro, cad.cpf);  // strcpy é para copiar o conteudo de uma variavel string para outra
							char txtCadastro[] = ".txt";
							strcat(novoCadastro, auxCadastro);
							strcat(novoCadastro, txtCadastro);
							// o velho é Logins\\login.txt e o novo é Logins\\(CPF DIGITADO).txt
							retCadastro = rename(velhoCadastro, novoCadastro); // aqui é para renomear o nome do arquivo por um nome novo, 
						
							fclose(login); 
							
							arquivo = fopen("\\Cadastros\\cadastro.txt", "w"); // mesmo esquema do de cima
							
							char velho1Cadastro[] = "Cadastros\\cadastro.txt";
							char aux1Cadastro[12];
							char novo1Cadastro[] = "Cadastros\\";
							
							strcpy(aux1Cadastro, cad.cpf);
							strcat(novo1Cadastro, aux1Cadastro);
							strcat(novo1Cadastro, txtCadastro);
							
							retCadastro = rename(velho1Cadastro, novo1Cadastro); // mesmo esquema que o de cima
							/*printf("--%s--\n",velho1);
							printf("--%s--\n",novo1);*/
							
							fclose(arquivo);
							carregando("Salvando   ",10);
							printf(" \\____________________|   CADASTRO CONCLUIDO !!!   |______________________/\n");
							printf("                      |____________________________|\n\n");
							printf(" __________________________________________________________________________\n");
							printf("|                                                                          |\n");
							printf("  Deseja:                           \n");
							printf("  [1]-Ir para tela de login\n");
							printf("  [2]-Encerrar programa\n\n");
							printf("  Resposta: ");
							scanf("%d", &cad.novamente);
							system("cls");
							if(cad.novamente == 2)
							{
								return 0;
							}
							system("cls");
							// redirecionar a pessoa para tela de login				
						}	
						else // esse else foi criado para excluir o arquivo caso as senhas sejam diferentes e dar a opçao da pessoa encerrar o programa ou tentar registrar uma conta novamente
						{
							fclose(arquivo);
							fclose(login);
							system("color 0c");Beep(100,10);
							remove("Logins\\login.txt");
							remove("Cadastros\\cadastro.txt");
							printf(" __________________________________________________________________________\n");
							printf("|                                                                          |\n");
							printf("  Senhas digitadas nao sao iguais!\n\n");
							printf("  [1]-Tentar novamente\n");
							printf("  [2]-Encerrar programa\n\n");
							printf("  Resposta: ");
							scanf("%d", &cad.novamente1);
							system("cls");
							if(cad.novamente1 == 2)
							{
								return 0;
							}
							//Voltar para a tela de registro
						}
					}
				}while(cad.novamente1 == 1);
			}
	    }while(cad.novamente == 1);
   }while(cad.TelaMenuAceitaCadastro == 2);
   	
   do{
	
		
		system("cls");

        printf("                         ___   _   _          _          ___    ___    ___                                    \n");
        printf("                        / __| | | (_)  _ _   (_)  __    / __|  / _ \\  / __|                                  \n");
        printf("                       | (__  | | | | | ' \\  | | / _|   \\__ \\ | (_) | \\__ \\                              \n");
		printf("                        \\___| |_| |_| |_||_| |_| \\__|   |___/  \\___/  |___/                                \n");					
		printf("                                             ________                                                         \n");
		printf("                                            |========|                                                        \n");
		printf("                                            |========|                                                        \n");              
		printf("                                            |========|                                                        \n");
		printf("                                   |==========================|                                               \n");
		printf("                                   |======== clinicSOS =======|                                               \n");
		printf("                                   |==========================|                                               \n");
		printf("                                            |========|                                                        \n");
		printf("                                            |========|                                                        \n");
		printf("                                            |========|                                                        \n");
		printf("                                            |========|                                                        \n");
		printf("    _______________________________         |========|          ______________________________                \n");
		printf("   |                               |        |========|         |                              |               \n");
		printf("   |  [1]-Cadastro do paciente     |        |========|         | [2]- Agendamento de consulta |               \n");
		printf("   |_______________________________|        |========|         |______________________________|               \n");	
		printf("    _______________________________         |========|          ______________________________                \n");
		printf("   |                               |        |========|         |                              |               \n");
		printf("   | [3]- Cadastro de medicos      |        |========|         | [4]- Gerador de relatorios   |               \n");
		printf("   |_______________________________|       [==========]        |______________________________|               \n");
		printf("    _______________________________                             ______________________________               \n");
		printf("   |                               |                           |                              |              \n");
		printf("   | [5]- Cancelamento de consultas|                           |     [6] - Encerrar           |              \n");
		printf("   |       e Confirmar consulta    |                           |           Programa           |              \n");
		printf("   |_______________________________|                           |______________________________|              \n\n");
		printf("                                     Digite o modulo desejado: "                                   );
		
		scanf("%d", &menu.menu);	
		system("cls");
   		
   		//Cadastro de paciente comandos
   		char criar_pront_clinicACadP[32] = "Prontuarios\\ClinicaA\\";
		char criar_pront_clinicBCadP[32] = "Prontuarios\\ClinicaB\\";
		char criar_pront_clinicCCadP[32] = "Prontuarios\\ClinicaC\\";
		//Cadastro de paciente comandos
   		switch(menu.menu)
		{
			case 1: 		
				printf("\n\n\n\n\n\n\n\n\n\n\n\n");
				carregando("Carregando (Cadastro de paciente)",15);
				
				cadP.cadastro = 1;
				cadP.retornar = 0;
				
				while (cadP.cadastro == 1)
				{
				
					system("cls");
					
					layout_modulo("Cadastro de paciente");
					printf("   __________________________________________________________________________\n");
					printf("  |Digite o numero que deseja:                                               |\n");                                                  
					printf("    - Criar novo cadastro de paciente (0)                                     \n");
					printf("    - Alterar cadastro de paciente(1)                                         \n");                                            
					printf("    - Retornar ao menu principal(2)                                           \n");
					fflush(stdin); // limpa saidas
					printf("   \nResposta:");
					scanf("%c",&cadP.escolha); 
					printf("  |__________________________________________________________________________|\n");
			
					cadP.cadastro = 0;
					
					switch (cadP.escolha)
					{
						case '0':
				
							carregando("Abrindo",10); //chamando função "carregando"
				
				
				
							int registroCadP;
							registroCadP = 1;
				
							while (registroCadP == 1)
							{
					
								system("cls"); // limpa tela
								fflush(stdin);	
								char nomeCadP[120];
								char responsavelCadP[120];
								char dataCadP[11]; 
								char cpfCadP[12];
								char cnsCadP[16];
								
								printf("   ______________________________DADOS DO PACIENTE___________________________\n");
								printf("  |                                                                          |\n"); 	
								printf("   Digite o nome do paciente: ");
								gets(nomeCadP);
								printf("   Digite a data de nascimento: ");
								fflush(stdin);
								scanf("%s", &dataCadP);
								printf("   Digite o numero do CPF: ");
								fflush(stdin);
								scanf("%s", &cpfCadP);
								printf("   Digite o numero do CNS: ");
								fflush(stdin);
								scanf("%s", &cnsCadP);
								printf("   Digite o nome do responsavel: ");
								fflush(stdin);
								gets(responsavelCadP);
								printf("  |__________________________________________________________________________|\n\n\n");
								
								char prontCadP;
					
								printf("    ___________________________________________________________________________\n");
								printf("   |                                                                           |\n");
								printf("     Deseja realmente salvar o prontuario do paciente com esses dados?          \n");
								printf("                             (S)SIM                 (N)NAO                      \n");
								printf("     Resposta: ");	
								fflush(stdin);
								scanf("%c",&prontCadP);
								printf("   |__________________________________________________________________________|\n\n");
					
								if ((prontCadP =='s') ||  (prontCadP =='S') )
								{
												
									// salva prontuario na pasta de geral
									char criar_prontCadP[32] = "Prontuarios\\Geral\\";
									strcat(criar_prontCadP, cpfCadP);
									char txtCadP[5] = ".txt";
									strcat(criar_prontCadP, txtCadP);
									FILE *abrir_prontuario;
									abrir_prontuario = fopen(criar_prontCadP,"w");
									fprintf(abrir_prontuario,"%s\n%s\n%s\n%s\n%s ",
									nomeCadP,dataCadP,cpfCadP,cnsCadP,responsavelCadP);
									fclose(abrir_prontuario);
									
									printf("    ___________________________________________________________________________\n");
									printf("   |                                                                           |\n");
									printf("     Digite a Clinica que deseja cadastrar o paciente:                          \n\n");
									printf("        [1]- Clinica A                [2]- Clinica B        [3]- Clinica C      \n");
									printf("     Resposta: ");	
									int clinicaCadP;
									scanf("%i",&clinicaCadP);
									printf("   |___________________________________________________________________________|\n");
									
									switch(clinicaCadP)
									{
										case 1:
											// salva prontuario na clinca A
											strcat(criar_pront_clinicACadP, cpfCadP);
											strcat(criar_pront_clinicACadP, txtCadP);
											FILE *abrir_prontuarioA;
											abrir_prontuarioA = fopen(criar_pront_clinicACadP,"w");
											fprintf(abrir_prontuarioA,"%s\n%s\n%s\n%s\n%s ",
											nomeCadP,dataCadP,cpfCadP,cnsCadP,responsavelCadP);
											fclose(abrir_prontuarioA);
											break;
											
										case 2:
											// salva prontuario na clinca B
											strcat(criar_pront_clinicBCadP, cpfCadP);
											strcat(criar_pront_clinicBCadP, txtCadP);
											FILE *abrir_prontuarioB;
											abrir_prontuarioB = fopen(criar_pront_clinicBCadP,"w");
											fprintf(abrir_prontuarioB,"%s\n%s\n%s\n%s\n%s ",
											nomeCadP,dataCadP,cpfCadP,cnsCadP,responsavelCadP);
											fclose(abrir_prontuarioB);
											break;
										case 3:
											// salva prontuario na clinca C
											strcat(criar_pront_clinicCCadP, cpfCadP);
											strcat(criar_pront_clinicCCadP, txtCadP);
											FILE *abrir_prontuarioC;
											abrir_prontuarioC = fopen(criar_pront_clinicCCadP,"w");
											fprintf(abrir_prontuarioC,"%s\n%s\n%s\n%s\n%s ",
											nomeCadP,dataCadP,cpfCadP,cnsCadP,responsavelCadP);
											fclose(abrir_prontuarioC);
											break;	
										default:
										
											break;	
									}
									printf("    ___________________________________________________________________________\n");
									printf("   |                                                                           |\n");
									printf("                            SALVANDO PRONTUARIO N: %s                           \n",cpfCadP);
									printf("   |___________________________________________________________________________|\n");
									carregando("                            Carregando   ",10); // chama função carregando
									registroCadP = 0;
									cadP.cadastro = 1;
								}
								
								else
								{			
									printf("    ___________________________________________________________________________\n");
									printf("   |                                                                           |\n");
									printf("                     ATUALIZE OS DADOS POR FAVOR!!!!!!!                         \n");
									printf("   |___________________________________________________________________________|\n");
									
									carregando("                            Carregando   ",10); // chama função carregando
										
									registroCadP = 1;
								}
							}
							
								break;
							
							case '1':
								system("cls");
							
								char buscacpfCadP [12];
								char conteudoCadP [400];
								char continuarCadP[2];	
								cadP.retornar = 0; 
								
								while (cadP.retornar == 0)
								
								{
									char buscacpfCadP [12] ;
									char conteudoCadP [400] ;
									char continuarCadP[2];	
									system("cls");
									printf("    ___________________________________________________________________________\n");
									printf("   |                                                                           |\n");
									printf("     Digite o numero do CPF do paciente que desejar alterar: ");
									scanf("%s",buscacpfCadP);
									
									char busca_prontCadP[32] = "Prontuarios\\Geral\\";
						
						
									strcat(busca_prontCadP, buscacpfCadP);
									char textCadP[5] = ".txt";
										
								    strcat(busca_prontCadP, textCadP);
											
									FILE *abrir_busca;
									abrir_busca = fopen(busca_prontCadP,"r");
									
									if (abrir_busca == NULL)
									{
										printf("\n\n                         PRONTUARIO NAO ENCONTRADO :(                          \n");
										printf("                    Deseja tentar novamente? (S)Sim ou (N)Nao                  \n");
										printf("\n\n                        Resposta: ");
									
										scanf("%s",&continuarCadP);
											 
										if ((strcmp(continuarCadP,"N")==0) || (strcmp(continuarCadP,"n")==0)) 
										{
											cadP.retornar = 1;
											cadP.cadastro = 1;
										}	
									}
									else
									{
									
										char alterarCadP;
										
										while (fgets(conteudoCadP,350, abrir_busca) != NULL){ /* fgets pede 3 parametros, variavel, tamanho e ponteiro, enquanto for diferente de 
										                                                          null ela vai linha por linha amrazenando na variavel */
											printf("\n      %s ",conteudoCadP);
										}
									
										printf("\n\n   |___________________________________________________________________________|\n\n\n");	
										
										printf("    ___________________________________________________________________________\n");
										printf("   |                                                                           |\n");
										printf("      Deseja mesmo fazer alteracoes nesse prontuario?(S)Sim ou (N)Nao           \n");
										printf("\n\n                        Resposta: ");
										fflush(stdin);
										scanf("%c",&alterarCadP);
										printf("   |___________________________________________________________________________|\n");
										
										if (alterarCadP == 's' || alterarCadP == 'S')
										{
											system("cls"); // limpa tela
											fflush(stdin);	
											char nomeCadP[120];
											char responsavelCadP[120];
											char dataCadP[11]; 
											char cnsCadP[16];
											
											
											printf("   ______________________________DADOS DO PACIENTE___________________________\n");
											printf("  |                                                                          |\n"); 	
											printf("   Digite o nome do paciente: ");
											gets(nomeCadP);
											printf("   Digite a data de nascimento: ");
											fflush(stdin);
											scanf("%s", &dataCadP);
											printf("   Digite o numero do CPF: %s\n",buscacpfCadP);
						
											printf("   Digite o numero do CNS: ");
											scanf("%s", &cnsCadP);
											printf("   Digite o nome do responsavel: ");
											fflush(stdin);
											gets(responsavelCadP);
											printf("  |__________________________________________________________________________|\n\n\n");
											
											char prontCadP;
						
						
											printf("    ___________________________________________________________________________\n");
											printf("   |                                                                           |\n");
											printf("     Deseja realmente salvar o prontuario do paciente com esses dados?          \n");
											printf("                             (S)SIM                 (N)NAO                      \n");
											printf("     Resposta: ");	
											fflush(stdin);
											scanf("%c",&prontCadP);
											
											if ((prontCadP == 's') || (prontCadP == 'S'))
										    {
										
												
												// salva prontuario na pasta de geral
												char criar_prontCadP[32] = "Prontuarios\\Geral\\";
												strcat(criar_prontCadP, buscacpfCadP);
												char txtCadP[5] = ".txt";
												strcat(criar_prontCadP, txtCadP);
												FILE *abrir_prontuario;
												abrir_prontuario = fopen(criar_prontCadP,"w");
												fprintf(abrir_prontuario,"%s\n%s\n%s\n%s\n%s ",
												nomeCadP,dataCadP,buscacpfCadP,cnsCadP,responsavelCadP);
												fclose(abrir_prontuario);
												
												printf("    ___________________________________________________________________________\n");
												printf("   |                                                                           |\n");
												printf("     Digite a Clinica que deseja cadastrar o paciente:                          \n\n");
												printf("        [1]- Clinica A                [2]- Clinica B        [3]- Clinica C      \n");
												printf("     Resposta: ");	
												int clinicaCadP;
												scanf("%i",&clinicaCadP);
												printf("   |___________________________________________________________________________|\n");
												
												switch(clinicaCadP)
												{
													case 1:
														// salva prontuario na clinca A
														strcat(criar_pront_clinicACadP, buscacpfCadP);
														strcat(criar_pront_clinicACadP, txtCadP);
														FILE *abrir_prontuarioA;
														abrir_prontuarioA = fopen(criar_pront_clinicACadP,"w");
														fprintf(abrir_prontuarioA,"%s\n%s\n%s\n%s\n%s ",
														nomeCadP,dataCadP,buscacpfCadP,cnsCadP,responsavelCadP);
														fclose(abrir_prontuarioA);
														break;
													case 2:
														// salva prontuario na clinca B
														strcat(criar_pront_clinicBCadP, buscacpfCadP);
														strcat(criar_pront_clinicBCadP, txtCadP);
														FILE *abrir_prontuarioB;
														abrir_prontuarioB = fopen(criar_pront_clinicBCadP,"w");
														fprintf(abrir_prontuarioB,"%s\n%s\n%s\n%s\n%s ",
														nomeCadP,dataCadP,buscacpfCadP,cnsCadP,responsavelCadP);
														fclose(abrir_prontuarioB);
														break;
													case 3:
														// salva prontuario na clinca C
														strcat(criar_pront_clinicCCadP, buscacpfCadP);
														strcat(criar_pront_clinicCCadP, txtCadP);
														FILE *abrir_prontuarioC;
														abrir_prontuarioC = fopen(criar_pront_clinicCCadP,"w");
														fprintf(abrir_prontuarioC,"%s\n%s\n%s\n%s\n%s ",
														nomeCadP,dataCadP,buscacpfCadP,cnsCadP,responsavelCadP);
														fclose(abrir_prontuarioC);
														break;	
													default:
													
														break;	
												}
												
												printf("    ___________________________________________________________________________\n");
												printf("   |                                                                           |\n");
												printf("                            SALVANDO PRONTUARIO N: %s                           \n",buscacpfCadP);
												printf("   |___________________________________________________________________________|\n");
											
												carregando("                            Carregando   ",10); // chama função carregando
										    }
										}
										else
										{
										carregando("                            Carregando   ",10); // chama função carregando
										cadP.retornar = 1;	
										cadP.cadastro = 1;
									
										}
									}
								}
							break;
							
							case '2':
			
								system("cls");
								
								menu.menu_loop = 1;
								break;
							
							default:
								system("cls");
								printf("    ___________________________________________________________________________\n");
								printf("   |                                                                           |\n");
								printf("                                   Valor incorreto !!! :(                       \n\n");
								printf("                              Digite apenas os valores:                         \n");
								printf("                            (0)         (1)          (2)                        \n\n");
								printf("   |___________________________________________________________________________|\n");
								system("pause");
								cadP.cadastro = 1;
								break;
					
					
					}
				}
		
	
				
				break;
			case 2: 
					do{
						system("cls");
						
						printf("\n\n\n\n\n\n\n\n\n\n\n\n");
						carregando("Carregando (Agendamento de consulta)",15);
						layout_modulo("Agendamento de consulta");
						
					 	char pacienteCpf[100];
					 	char puxar_pacienteNome[100];
					 	agendH.loop = 0;
					 	
					 	do
						 {
					 		do
							{
						 		printf("Digite o CPF do paciente que deseja agendar uma consulta: ");
						 		fflush(stdin);
						 		scanf("%s", &pacienteCpf);
						 	
						 		
								strcpy(agendH.buscarProntuario,"Prontuarios\\Geral\\");
								strcat(agendH.buscarProntuario, pacienteCpf);
						
								strcat(agendH.buscarProntuario, ".txt");
							
								
						
								agendH.buscar_prontuario = fopen(agendH.buscarProntuario,"r");
								if (agendH.buscar_prontuario == NULL)
								{
									printf("Paciente nao encontrado\n");
									printf("Gostaria de tentar novamente?\n");
									printf("[1]-SIM, procurar pelo paciente de novo\n");
									printf("[2]-NAO, encerrar programa");
									scanf("%d", &agendH.loop);
									if (agendH.loop == 2)
									
									return 1;
									
									
								}
								else
								{
									
									printf("\n=========================| DADOS DO PACIENTE | ========================");
									fgets(puxar_pacienteNome, 100, agendH.buscar_prontuario);
									printf("\nNome: %s",puxar_pacienteNome);
									fgets(agendH.puxar_pacienteData, 100, agendH.buscar_prontuario);
									printf("Data de Nascimento: %s",agendH.puxar_pacienteData);
									fgets(agendH.puxar_pacienteCpf, 100, agendH.buscar_prontuario);
									printf("CPF: %s",agendH.puxar_pacienteCpf);
									fgets(agendH.puxar_pacienteCartao, 100, agendH.buscar_prontuario);
									printf("Cartao: %s",agendH.puxar_pacienteCartao);	 
									fgets(agendH.puxar_pacienteResponsavel, 100, agendH.buscar_prontuario);
									printf("Nome do Responsavel: %s",agendH.puxar_pacienteResponsavel);	
									
									printf("\n========================================================================");
							 	
								
									
									printf("\n\n\nPaciente correto?\n");
									printf("[1]-NAO\n");
									printf("[2]-SIM\n");
									scanf("%d", &agendH.loop);	
								}
							 	system("cls");
							}while(agendH.loop == 1);
							 	
							printf("\n---Especialidade do Medico---\n\n");
							printf("[1]-Cardiologia \n");
							printf("[2]-Dermatologia \n");
							printf("[3]-Radiologia \n");
							printf("[4]-Fisioterapia \n");
							printf("[5]-Clinico geral \n");
							printf("[6]-Ortopedia \n");
							printf("[7]-Nutricao \n");
							printf("[8]-Ginecologia \n");
							printf("[9]-Obstetricia \n");
							printf("[10]-Psicologia \n");
							printf("Numero da especialidade: ");
							scanf("%d", &agendH.escolha_especialidade);
							
							switch (agendH.escolha_especialidade)
							{
								case 1:
									strcpy(agendH.especialidade,"Cardiologia");
								
									agendH.loop = 0;
									break;
								case 2:
									strcpy(agendH.especialidade,"Dermatologia");
								
									agendH.loop = 0;
									break;
								case 3:
									strcpy(agendH.especialidade,"Radiologia");
								
									agendH.loop = 0;
									break;
								case 4:
									strcpy(agendH.especialidade,"Fisioterapia");
									
									agendH.loop = 0;
									break;
								case 5:
									strcpy(agendH.especialidade,"Clinico_Geral");
									
									agendH.loop = 0;
									break;
								case 6:
									strcpy(agendH.especialidade,"Ortopedia");
									agendH.loop = 0;
									break;
								case 7:
									strcpy(agendH.especialidade,"Nutricao");
									agendH.loop = 0;
									break;
								case 8:
									strcpy(agendH.especialidade,"Ginecologia");
									agendH.loop = 0;
									break;
								case 9:
									strcpy(agendH.especialidade,"Obstetricia");
									agendH.loop = 0;
									break;
								case 10:
									strcpy(agendH.especialidade,"Psicologia");
									agendH.loop = 0;
									break;
								default:
									printf("Especialidade nao encontrado, gostaria de tentar novamente?\n");
									printf("[1]-SIM\n");
									printf("[2]-NAO\n");
									printf("Resposta: ");
									scanf("%d", &agendH.loop);	
										
									if(agendH.loop == 2)
									{
										return 0;
									}
									else
									{
										agendH.loop = 1;
										system("cls");
									}
									break;		
								}
						}while(agendH.loop == 1);
						
						// comeco do codigo que vai abrir todos txt dentro de uma pasta.
					    
						
					    strcpy(agendH.primeiro1,agendH.especialidade);
					    strcpy(agendH.primeiro,"Especialidades\\");	
					    strcat(agendH.especialidade,"\\");
					    strcat(agendH.primeiro,agendH.especialidade);
					    
						
					    agendH.dir = opendir(agendH.primeiro);
					
					   
					    while ( ( agendH.lsdir = readdir(agendH.dir) ) != NULL )
					    {
					    	
							strcpy(agendH.terceiro,agendH.primeiro);
							char segundo[30];
						 	strcpy(segundo, agendH.lsdir->d_name);
							 if((strcmp(segundo,".")==0) || (strcmp(segundo,"..")==0))
							 {	
							 	system("cls");
							 }
							strcpy(agendH.quarto,agendH.terceiro);
							strcat(agendH.quarto,segundo);
							agendH.Agendamento = fopen(agendH.quarto,"r");
							char puxarTUDO[8];
							while(fgets(puxarTUDO, 8, agendH.Agendamento) != NULL)
							{
								printf("%s", puxarTUDO);
							
							}
							
							strcpy(segundo,"");	
						}
						fclose(agendH.Agendamento);
					    closedir(agendH.dir);
					    
					    
					  
					    
					    
						printf("\n Digite o CRM do medico que deseja marcar horario:\n ");
						scanf("%s", &agendH.agendandoCPF);
						system("cls");
						strcat(agendH.primeiro,agendH.agendandoCPF);
						strcat(agendH.primeiro,".txt");
					
						agendH.Agendamento = fopen(agendH.primeiro, "r");
						
						while(fgets(agendH.puxar, 10, agendH.Agendamento) != NULL)
							{
							
								printf("%s", agendH.puxar);
							
							}
							
						fclose(agendH.Agendamento);
						
						agendH.Agendamento = fopen(agendH.primeiro, "r");
						
					
						
						fgets(agendH.puxarVazio, 50, agendH.Agendamento);
						fgets(agendH.puxarNome, 50, agendH.Agendamento);
						fgets(agendH.puxarEspecialidade, 50, agendH.Agendamento);
						fgets(agendH.puxarCPF, 50, agendH.Agendamento);
						fgets(agendH.puxarCRM,30, agendH.Agendamento);
						fgets(agendH.puxarClinica, 50, agendH.Agendamento);
						fgets(agendH.puxarPreco, 50, agendH.Agendamento);
						fgets(agendH.puxarDia, 50, agendH.Agendamento);
						fgets(agendH.puxarTurno, 50, agendH.Agendamento);
						fgets(agendH.semana1, 20, agendH.Agendamento);
						fscanf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s",agendH.segunda, SS.segunda.h1, SS.segunda.h2, SS.segunda.h3, SS.segunda.lanche, SS.segunda.h4, SS.segunda.h5, SS.segunda.h6, SS.segunda.h7);
						fscanf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s",agendH.terca, SS.terca.h1, SS.terca.h2, SS.terca.h3, SS.terca.lanche, SS.terca.h4, SS.terca.h5, SS.terca.h6, SS.terca.h7);
						fscanf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s",agendH.quarta, SS.quarta.h1, SS.quarta.h2, SS.quarta.h3, SS.quarta.lanche, SS.quarta.h4, SS.quarta.h5, SS.quarta.h6, SS.quarta.h7);
						fscanf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s",agendH.quinta, SS.quinta.h1, SS.quinta.h2, SS.quinta.h3, SS.quinta.lanche, SS.quinta.h4, SS.quinta.h5, SS.quinta.h6, SS.quinta.h7);
						fscanf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s",agendH.sexta, SS.sexta.h1, SS.sexta.h2, SS.sexta.h3, SS.sexta.lanche, SS.sexta.h4, SS.sexta.h5, SS.sexta.h6, SS.sexta.h7);
						char fscanf1[10];
						char fscanf2[10];
						fscanf(agendH.Agendamento,"%s",fscanf1);
						fscanf(agendH.Agendamento,"%s",fscanf2);
						fscanf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s",ssegunda, SSS.segunda1.h11, SSS.segunda1.h22, SSS.segunda1.h33, SSS.segunda1.lanche2, SSS.segunda1.h44, SSS.segunda1.h55, SSS.segunda1.h66, SSS.segunda1.h77);
						fscanf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s",tterca, SSS.terca1.h11, SSS.terca1.h22, SSS.terca1.h33, SSS.terca1.lanche2, SSS.terca1.h44, SSS.terca1.h55, SSS.terca1.h66, SSS.terca1.h77);
						fscanf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s",qquarta, SSS.quarta1.h11, SSS.quarta1.h22, SSS.quarta1.h33, SSS.quarta1.lanche2, SSS.quarta1.h44, SSS.quarta1.h55, SSS.quarta1.h66, SSS.quarta1.h77);
						fscanf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s",qquinta, SSS.quinta1.h11, SSS.quinta1.h22, SSS.quinta1.h33, SSS.quinta1.lanche2, SSS.quinta1.h44, SSS.quinta1.h55, SSS.quinta1.h66, SSS.quinta1.h77);
						fscanf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s",ssexta, SSS.sexta1.h11, SSS.sexta1.h22, SSS.sexta1.h33, SSS.sexta1.lanche2, SSS.sexta1.h44, SSS.sexta1.h55, SSS.sexta1.h66, SSS.sexta1.h77);
					
						do
						{	
							
							printf("\n\n--Dados de hoje--\n\n");
							printf("Digite o dia: ");
							scanf("%d", &diaHoje);
							printf("\nDigite o mes: ");
							scanf("%d", &mesHoje);
							printf("\n-Dia da semana-\n");
							printf("[1]-Segunda\n");
							printf("[2]-Terca\n");
							printf("[3]-Quarta\n");
							printf("[4]-Quinta\n");
							printf("[5]-Sexta\n");
							printf("Numero do dia da semana: ");
							scanf("%d", &diaDaSemanaH);
							
							switch(diaDaSemanaH)
							{
								case 1:
									segunda1 = 0; 
									terca1   = 1;  
									quarta1  = 2; 
									quinta1  = 3; 
									sexta1   = 4;
									segunda2 = 7;
									terca2   = 8;
									quarta2  = 9;
									quinta2  = 10;
									sexta2   = 11;
									
									segunda1 += diaHoje; 
									if (diaHoje >= 30)
									{
										if(diaHoje == 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									} 
									terca1   += diaHoje; 
									if (diaHoje >= 30)
									{
										if(diaHoje == 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									quarta1  += diaHoje; 
									if (diaHoje == 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									quinta1  += diaHoje; 
									if (diaHoje == 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									sexta1   += diaHoje;
									if (diaHoje == 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									segunda2 += diaHoje;
									if (diaHoje == 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									terca2   += diaHoje;
									if (diaHoje >= 30)
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									} 
									quarta2  += diaHoje;
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									quinta2  += diaHoje;
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									sexta2   += diaHoje;
									if (diaHoje > 30)
									{
										
										mesHoje ++;
									}  
									
									break;
								case 2:
									segunda1 = -1; 
									terca1   = 0;  
									quarta1  = 1; 
									quinta1  = 2; 
									sexta1   = 3;
									segunda2 = 6;
									terca2   = 7;
									quarta2  = 8;
									quinta2  = 9;
									sexta2   = 10;
									
									segunda1 += diaHoje;
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									terca1   += diaHoje;
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									} 
									quarta1  += diaHoje;
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									} 
									quinta1  += diaHoje;
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									} 
									sexta1   += diaHoje;
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									} 
									segunda2 += diaHoje;
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									terca2   += diaHoje;
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									quarta2  += diaHoje;
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									quinta2  += diaHoje;
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									sexta2   += diaHoje;
									if (diaHoje > 30)
									{
										
										mesHoje ++;
									} 
									break;
								case 3:
									segunda1 = -2; 
									terca1   = -1;  
									quarta1  = 0; 
									quinta1  = 1; 
									sexta1   = 2;
									segunda2 = 5;
									terca2   = 6;
									quarta2  = 7;
									quinta2  = 8;
									sexta2   = 9;
									
									segunda1 += diaHoje;
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									} 
									terca1   += diaHoje;  
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									quarta1  += diaHoje; 
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									quinta1  += diaHoje; 
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									} 
									sexta1   += diaHoje;
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									} 
									segunda2 += diaHoje;
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									} 
									terca2   += diaHoje;
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									} 
									quarta2  += diaHoje;
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									quinta2  += diaHoje;
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									sexta2   += diaHoje;
									if (diaHoje > 30)
									{
										
										mesHoje ++;
									} 
									
									break;
								case 4:
									segunda1 = -3; 
									terca1   = -2;  
									quarta1  = -1; 
									quinta1  = 0; 
									sexta1   = 1;
									segunda2 = 4;
									terca2   = 5;
									quarta2  = 6;
									quinta2  = 7;
									sexta2   = 8;
									
									segunda1 += diaHoje; 
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									terca1   += diaHoje;  
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									quarta1  += diaHoje; 
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									quinta1  += diaHoje; 
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									sexta1   += diaHoje;
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									segunda2 += diaHoje;
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}  
									terca2   += diaHoje;
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									quarta2  += diaHoje;
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									quinta2  += diaHoje;
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									sexta2   += diaHoje;
									if (diaHoje > 30)
									{
									
										mesHoje ++;
									} 
									break;
								case 5:
									segunda1 = -4; 
									terca1   = -3;  
									quarta1  = -2; 
									quinta1  = -1; 
									sexta1   = 0;
									segunda2 = 3;
									terca2   = 4;
									quarta2  = 5;
									quinta2  = 6;
									sexta2   = 7;
									
									segunda1 += diaHoje; 
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									terca1   += diaHoje; 
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									quarta1  += diaHoje; 
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									quinta1  += diaHoje; 
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									sexta1   += diaHoje;
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									segunda2 += diaHoje;
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									terca2   += diaHoje;
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									quarta2  += diaHoje;
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									quinta2  += diaHoje;
									if (diaHoje >= 30)
									{
										if(diaHoje > 30)
										{
											mesHoje ++;
										}		
										diaHoje = 0;
									}
									sexta2   += diaHoje;
									if (diaHoje > 30)
									{
										
										mesHoje ++;
									} 
									break;
								default:
								
								 break;
							}
							
							printf("\n	 		  Semana atual:                                  Data:\n");
							printf("Segunda: %s %s %s %s %s %s %s %s        %d/%d\n",SS.segunda.h1, SS.segunda.h2, SS.segunda.h3, SS.segunda.lanche, SS.segunda.h4, SS.segunda.h5, SS.segunda.h6, SS.segunda.h7,segunda1,mesHoje - 1);
							printf("Terca:   %s %s %s %s %s %s %s %s        %d/%d\n",SS.terca.h1, SS.terca.h2, SS.terca.h3, SS.terca.lanche, SS.terca.h4, SS.terca.h5, SS.terca.h6, SS.terca.h7,terca1,mesHoje);
							printf("Quarta:  %s %s %s %s %s %s %s %s        %d/%d\n",SS.quarta.h1, SS.quarta.h2, SS.quarta.h3, SS.quarta.lanche, SS.quarta.h4, SS.quarta.h5, SS.quarta.h6, SS.quarta.h7,quarta1,mesHoje);
							printf("Quinta:  %s %s %s %s %s %s %s %s        %d/%d\n",SS.quinta.h1, SS.quinta.h2, SS.quinta.h3, SS.quinta.lanche, SS.quinta.h4, SS.quinta.h5, SS.quinta.h6, SS.quinta.h7,quinta1,mesHoje);
							printf("Sexta:   %s %s %s %s %s %s %s %s        %d/%d\n",SS.sexta.h1, SS.sexta.h2, SS.sexta.h3, SS.sexta.lanche, SS.sexta.h4, SS.sexta.h5, SS.sexta.h6, SS.sexta.h7,sexta1,mesHoje);
							printf("\n 			  Semana que vem:                                Data:\n");
							printf("Segunda: %s %s %s %s %s %s %s %s        %d/%d\n",SSS.segunda1.h11, SSS.segunda1.h22, SSS.segunda1.h33, SSS.segunda1.lanche2, SSS.segunda1.h44, SSS.segunda1.h55, SSS.segunda1.h66, SSS.segunda1.h77,segunda2,mesHoje);
							printf("Terca:   %s %s %s %s %s %s %s %s        %d/%d\n",SSS.terca1.h11, SSS.terca1.h22, SSS.terca1.h33, SSS.terca1.lanche2, SSS.terca1.h44, SSS.terca1.h55, SSS.terca1.h66, SSS.terca1.h77,terca2,mesHoje);
							printf("Quarta:  %s %s %s %s %s %s %s %s        %d/%d\n",SSS.quarta1.h11, SSS.quarta1.h22, SSS.quarta1.h33, SSS.quarta1.lanche2, SSS.quarta1.h44, SSS.quarta1.h55, SSS.quarta1.h66, SSS.quarta1.h77,quarta2,mesHoje);
							printf("Quinta:  %s %s %s %s %s %s %s %s        %d/%d\n",SSS.quinta1.h11, SSS.quinta1.h22, SSS.quinta1.h33, SSS.quinta1.lanche2, SSS.quinta1.h44, SSS.quinta1.h55, SSS.quinta1.h66, SSS.quinta1.h77,quinta2,mesHoje);
							printf("Sexta:   %s %s %s %s %s %s %s %s        %d/%d\n",SSS.sexta1.h11, SSS.sexta1.h22, SSS.sexta1.h33, SSS.sexta1.lanche2, SSS.sexta1.h44, SSS.sexta1.h55, SSS.sexta1.h66, SSS.sexta1.h77,sexta2,mesHoje);
							
							printf("\n\n--Semana--\n");
							printf("[1]-Semana atual\n");
							printf("[2]-Semana que vem\n");
							printf("Digite o numero da semana escolhida: ");
							scanf("%d", &semanaHoje);
							printf("\n\n--Dia--\n");
							printf("[1]-Segunda\n");
							printf("[2]-Terca\n");
							printf("[3]-Quarta\n");
							printf("[4]-Quinta\n");
							printf("[5]-Sexta\n");
							printf("Digite o numero do dia escolhido: ");
							scanf("%d", &diaSemana);
							
							
							
							if((semanaHoje == 1) && (diaSemana == 1))
							{
								strcpy(agendH.h1,SS.segunda.h1);
								strcpy(agendH.h2,SS.segunda.h2);
								strcpy(agendH.h3,SS.segunda.h3);
								strcpy(agendH.h4,SS.segunda.h4);
								strcpy(agendH.h5,SS.segunda.h5);
								strcpy(agendH.h6,SS.segunda.h6);
								strcpy(agendH.h7,SS.segunda.h7);
								strcpy(diaDaSemana,"Segunda");
								diaHoje = segunda1;
							
							}
							if((semanaHoje == 1) && (diaSemana == 2))
							{
								strcpy(agendH.h1,SS.terca.h1);
								strcpy(agendH.h2,SS.terca.h2);
								strcpy(agendH.h3,SS.terca.h3);
								strcpy(agendH.h4,SS.terca.h4);
								strcpy(agendH.h5,SS.terca.h5);
								strcpy(agendH.h6,SS.terca.h6);
								strcpy(agendH.h7,SS.terca.h7);
								strcpy(diaDaSemana,"Terca");
								diaHoje = terca1;
							
							}
							if((semanaHoje == 1) && (diaSemana == 3))
							{
								strcpy(agendH.h1,SS.quarta.h1);
								strcpy(agendH.h2,SS.quarta.h2);
								strcpy(agendH.h3,SS.quarta.h3);
								strcpy(agendH.h4,SS.quarta.h4);
								strcpy(agendH.h5,SS.quarta.h5);
								strcpy(agendH.h6,SS.quarta.h6);
								strcpy(agendH.h7,SS.quarta.h7);
								strcpy(diaDaSemana,"Quarta");
								diaHoje = quarta1;
							
							}
							if((semanaHoje == 1) && (diaSemana == 4))
							{
								strcpy(agendH.h1,SS.quinta.h1);
								strcpy(agendH.h2,SS.quinta.h2);
								strcpy(agendH.h3,SS.quinta.h3);
								strcpy(agendH.h4,SS.quinta.h4);
								strcpy(agendH.h5,SS.quinta.h5);
								strcpy(agendH.h6,SS.quinta.h6);
								strcpy(agendH.h7,SS.quinta.h7);
								strcpy(diaDaSemana,"Quinta");
								diaHoje = quinta1;
							}
							if((semanaHoje == 1) && (diaSemana == 5))
							{
								strcpy(agendH.h1,SS.sexta.h1);
								strcpy(agendH.h2,SS.sexta.h2);
								strcpy(agendH.h3,SS.sexta.h3);
								strcpy(agendH.h4,SS.sexta.h4);
								strcpy(agendH.h5,SS.sexta.h5);
								strcpy(agendH.h6,SS.sexta.h6);
								strcpy(agendH.h7,SS.sexta.h7);
								strcpy(diaDaSemana,"Sexta");
								diaHoje = sexta1;
							}
							// semana 2
								if((semanaHoje == 2) && (diaSemana == 1))
							{
								strcpy(agendH.h1,SSS.segunda1.h11);
								strcpy(agendH.h2,SSS.segunda1.h22);
								strcpy(agendH.h3,SSS.segunda1.h33);
								strcpy(agendH.h4,SSS.segunda1.h44);
								strcpy(agendH.h5,SSS.segunda1.h55);
								strcpy(agendH.h6,SSS.segunda1.h66);
								strcpy(agendH.h7,SSS.segunda1.h77);
								strcpy(diaDaSemana,"Segunda");
								diaHoje = segunda2;
							}
							if((semanaHoje == 2) && (diaSemana == 2))
							{
								strcpy(agendH.h1,SSS.terca1.h11);
								strcpy(agendH.h2,SSS.terca1.h22);
								strcpy(agendH.h3,SSS.terca1.h33);
								strcpy(agendH.h4,SSS.terca1.h44);
								strcpy(agendH.h5,SSS.terca1.h55);
								strcpy(agendH.h6,SSS.terca1.h66);
								strcpy(agendH.h7,SSS.terca1.h77);
								strcpy(diaDaSemana,"Terca");
								diaHoje = terca2;
							}
							if((semanaHoje == 2) && (diaSemana == 3))
							{
								strcpy(agendH.h1,SSS.quarta1.h11);
								strcpy(agendH.h2,SSS.quarta1.h22);
								strcpy(agendH.h3,SSS.quarta1.h33);
								strcpy(agendH.h4,SSS.quarta1.h44);
								strcpy(agendH.h5,SSS.quarta1.h55);
								strcpy(agendH.h6,SSS.quarta1.h66);
								strcpy(agendH.h7,SSS.quarta1.h77);
								strcpy(diaDaSemana,"Quarta");
								diaHoje = quarta2;
							}
							if((semanaHoje == 2) && (diaSemana == 4))
							{
								strcpy(agendH.h1,SSS.quinta1.h11);
								strcpy(agendH.h2,SSS.quinta1.h22);
								strcpy(agendH.h3,SSS.quinta1.h33);
								strcpy(agendH.h4,SSS.quinta1.h44);
								strcpy(agendH.h5,SSS.quinta1.h55);
								strcpy(agendH.h6,SSS.quinta1.h66);
								strcpy(agendH.h7,SSS.quinta1.h77);
								strcpy(diaDaSemana,"Quinta");
								diaHoje = quinta2;
							}
							if((semanaHoje == 2) && (diaSemana == 5))
							{
								strcpy(agendH.h1,SSS.sexta1.h11);
								strcpy(agendH.h2,SSS.sexta1.h22);
								strcpy(agendH.h3,SSS.sexta1.h33);
								strcpy(agendH.h4,SSS.sexta1.h44);
								strcpy(agendH.h5,SSS.sexta1.h55);
								strcpy(agendH.h6,SSS.sexta1.h66);
								strcpy(agendH.h7,SSS.sexta1.h77);
								strcpy(diaDaSemana,"Sexta");
								diaHoje = sexta2;
							}
							
							system("cls");
							
							printf("\n\n--Seamana %d | %s (%d/%d)--\n\n",semanaHoje,diaDaSemana,diaHoje,mesHoje);
							printf("[1]-%s\n",agendH.h1);
							printf("[2]-%s\n",agendH.h2);
							printf("[3]-%s\n",agendH.h3);
							printf("[4]-%s\n",agendH.h4);
							printf("[5]-%s\n",agendH.h5);
							printf("[6]-%s\n",agendH.h6);
							printf("[7]-%s\n\n",agendH.h7);
							printf("Digite o numero do horario que deseja marcar a consulta: \n");
							scanf("%d", &agendH.marcar);
						
							switch(agendH.marcar)
							{
								case 1:
									strcpy(agendH.horarioEscolhido,agendH.h1);
									strcpy(agendH.horario_escolhido,"");
									strcat(agendH.horario_escolhido,diaDaSemana);
									strcat(agendH.horario_escolhido,": ");
									strcat(agendH.horario_escolhido,"AGENDADO ");
									strcat(agendH.horario_escolhido,agendH.h2);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,agendH.h3);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,"lanche ");
									strcat(agendH.horario_escolhido,agendH.h4);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,agendH.h5);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,agendH.h6);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,agendH.h7);
									agendH.loop = 0;
									break;
								case 2:
									strcpy(agendH.horarioEscolhido,agendH.h2);	
									strcpy(agendH.horario_escolhido,"");
									strcat(agendH.horario_escolhido,diaDaSemana);
									strcat(agendH.horario_escolhido,": ");
									strcat(agendH.horario_escolhido,agendH.h1);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,"AGENDADO ");
									strcat(agendH.horario_escolhido,agendH.h3);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,"lanche ");
									strcat(agendH.horario_escolhido,agendH.h4);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,agendH.h5);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,agendH.h6);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,agendH.h7);
									agendH.loop = 0;
									break;
								case 3:
									strcpy(agendH.horarioEscolhido,agendH.h3);
									strcpy(agendH.horario_escolhido,"");
									strcat(agendH.horario_escolhido,diaDaSemana);
									strcat(agendH.horario_escolhido,": ");
									strcat(agendH.horario_escolhido,agendH.h1);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,agendH.h2);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,"AGENDADO ");
									strcat(agendH.horario_escolhido,"lanche ");
									strcat(agendH.horario_escolhido,agendH.h4);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,agendH.h5);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,agendH.h6);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,agendH.h7);
									agendH.loop = 0;
									break;
								case 4:
									strcpy(agendH.horarioEscolhido,agendH.h4);
									strcpy(agendH.horario_escolhido,"");
									strcat(agendH.horario_escolhido,diaDaSemana);
									strcat(agendH.horario_escolhido,": ");
									strcat(agendH.horario_escolhido,agendH.h1);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,agendH.h2);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,agendH.h3);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,"lanche ");
									strcat(agendH.horario_escolhido,"AGENDADO ");
									strcat(agendH.horario_escolhido,agendH.h5);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,agendH.h6);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,agendH.h7);
									agendH.loop = 0;
									break;
								case 5:
									strcpy(agendH.horarioEscolhido,agendH.h5);
									strcpy(agendH.horario_escolhido,"");
									strcat(agendH.horario_escolhido,diaDaSemana);
									strcat(agendH.horario_escolhido,": ");
									strcat(agendH.horario_escolhido,agendH.h1);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,agendH.h2);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,agendH.h3);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,"lanche ");
									strcat(agendH.horario_escolhido,agendH.h4);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,"AGENDADO ");
									strcat(agendH.horario_escolhido,agendH.h6);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,agendH.h7);
									agendH.loop = 0;
									break;
								case 6:
									strcpy(agendH.horarioEscolhido,agendH.h6);
									strcpy(agendH.horario_escolhido,"");
									strcat(agendH.horario_escolhido,diaDaSemana);
									strcat(agendH.horario_escolhido,": ");
									strcat(agendH.horario_escolhido,agendH.h1);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,agendH.h2);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,agendH.h3);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,"lanche ");
									strcat(agendH.horario_escolhido,agendH.h4);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,agendH.h5);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,"AGENDADO ");
									strcat(agendH.horario_escolhido,agendH.h7);
									agendH.loop = 0;
									break;
								case 7:
									strcpy(agendH.horarioEscolhido,agendH.h7);
									strcpy(agendH.horario_escolhido,"");
									strcat(agendH.horario_escolhido,diaDaSemana);
									strcat(agendH.horario_escolhido,": ");
									strcat(agendH.horario_escolhido,agendH.h1);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,agendH.h2);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,agendH.h3);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,"lanche ");
									strcat(agendH.horario_escolhido,agendH.h4);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,agendH.h5);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,agendH.h6);
									strcat(agendH.horario_escolhido," ");
									strcat(agendH.horario_escolhido,"AGENDADO");
									agendH.loop = 0;
									break;
								default:
									agendH.loop = 1;
									system("cls");
									break;
									
							}
						}while(agendH.loop == 1);
							
						strcpy(agendH.guardarHora,agendH.horarioEscolhido);
						
						strcpy(agendH.novo,"Especialidades\\");
						strcat(agendH.novo,agendH.especialidade);
						strcat(agendH.novo,agendH.agendandoCPF);
						strcat(agendH.novo,".txt");
						
						agendH.Agendamento = fopen(agendH.novo,"w");
						
					
						if((semanaHoje == 1) && (diaSemana == 1))
							{
								fprintf(agendH.Agendamento,"\n");
								fprintf(agendH.Agendamento,"%s", agendH.puxarNome);
								fprintf(agendH.Agendamento,"%s",agendH.puxarEspecialidade);
								fprintf(agendH.Agendamento,"%s",agendH.puxarCPF);
								fprintf(agendH.Agendamento,"%s",agendH.puxarCRM);
								fprintf(agendH.Agendamento,"%s",agendH.puxarClinica);
								fprintf(agendH.Agendamento,"%s",agendH.puxarPreco);
								fprintf(agendH.Agendamento,"Dia que trabalha: Segunda a Sexta\n");
								fprintf(agendH.Agendamento,"%s",agendH.puxarTurno);
								
								fprintf(agendH.Agendamento,"%s",agendH.semana1);
								
								fprintf(agendH.Agendamento,"%s\n",agendH.horario_escolhido);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.terca, SS.terca.h1, SS.terca.h2, SS.terca.h3, SS.terca.lanche, SS.terca.h4, SS.terca.h5, SS.terca.h6, SS.terca.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quarta, SS.quarta.h1, SS.quarta.h2, SS.quarta.h3, SS.quarta.lanche, SS.quarta.h4, SS.quarta.h5, SS.quarta.h6, SS.quarta.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quinta, SS.quinta.h1, SS.quinta.h2, SS.quinta.h3, SS.quinta.lanche, SS.quinta.h4, SS.quinta.h5, SS.quinta.h6, SS.quinta.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.sexta, SS.sexta.h1, SS.sexta.h2, SS.sexta.h3, SS.sexta.lanche, SS.sexta.h4, SS.sexta.h5, SS.sexta.h6, SS.sexta.h7);
								
								fprintf(agendH.Agendamento,"			-Semana 2-\n");
								
								fprintf(agendH.Agendamento,"Segunda: %s %s %s %s %s %s %s %s\n",SSS.segunda1.h11, SSS.segunda1.h22, SSS.segunda1.h33, SSS.segunda1.lanche2, SSS.segunda1.h44, SSS.segunda1.h55, SSS.segunda1.h66, SSS.segunda1.h77);
								fprintf(agendH.Agendamento,"Terca:   %s %s %s %s %s %s %s %s\n",SSS.terca1.h11, SSS.terca1.h22, SSS.terca1.h33, SSS.terca1.lanche2, SSS.terca1.h44, SSS.terca1.h55, SSS.terca1.h66, SSS.terca1.h77);
								fprintf(agendH.Agendamento,"Quarta:  %s %s %s %s %s %s %s %s\n",SSS.quarta1.h11, SSS.quarta1.h22, SSS.quarta1.h33, SSS.quarta1.lanche2, SSS.quarta1.h44, SSS.quarta1.h55, SSS.quarta1.h66, SSS.quarta1.h77);
								fprintf(agendH.Agendamento,"Quinta:  %s %s %s %s %s %s %s %s\n",SSS.quinta1.h11, SSS.quinta1.h22, SSS.quinta1.h33, SSS.quinta1.lanche2, SSS.quinta1.h44, SSS.quinta1.h55, SSS.quinta1.h66, SSS.quinta1.h77);
								fprintf(agendH.Agendamento,"Sexta:   %s %s %s %s %s %s %s %s\n",SSS.sexta1.h11, SSS.sexta1.h22, SSS.sexta1.h33, SSS.sexta1.lanche2, SSS.sexta1.h44, SSS.sexta1.h55, SSS.sexta1.h66, SSS.sexta1.h77);
								fprintf(agendH.Agendamento,"--------------------------------------------------------------------------------");
								
							}
							if((semanaHoje == 1) && (diaSemana == 2))
							{
								fprintf(agendH.Agendamento,"\n");
								fprintf(agendH.Agendamento,"%s", agendH.puxarNome);
								fprintf(agendH.Agendamento,"%s",agendH.puxarEspecialidade);
								fprintf(agendH.Agendamento,"%s",agendH.puxarCPF);
								fprintf(agendH.Agendamento,"%s",agendH.puxarCRM);
								fprintf(agendH.Agendamento,"%s",agendH.puxarClinica);
								fprintf(agendH.Agendamento,"%s",agendH.puxarPreco);
								fprintf(agendH.Agendamento,"Dia que trabalha: Segunda a Sexta\n");
								fprintf(agendH.Agendamento,"%s",agendH.puxarTurno);
								
								fprintf(agendH.Agendamento,"%s",agendH.semana1);
								
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.segunda, SS.segunda.h1, SS.segunda.h2, SS.segunda.h3, SS.segunda.lanche, SS.segunda.h4, SS.segunda.h5, SS.segunda.h6, SS.segunda.h7);
								fprintf(agendH.Agendamento,"%s\n",agendH.horario_escolhido);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quarta, SS.quarta.h1, SS.quarta.h2, SS.quarta.h3, SS.quarta.lanche, SS.quarta.h4, SS.quarta.h5, SS.quarta.h6, SS.quarta.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quinta, SS.quinta.h1, SS.quinta.h2, SS.quinta.h3, SS.quinta.lanche, SS.quinta.h4, SS.quinta.h5, SS.quinta.h6, SS.quinta.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.sexta, SS.sexta.h1, SS.sexta.h2, SS.sexta.h3, SS.sexta.lanche, SS.sexta.h4, SS.sexta.h5, SS.sexta.h6, SS.sexta.h7);
								
								fprintf(agendH.Agendamento,"			-Semana 2-\n");
								
								fprintf(agendH.Agendamento,"Segunda: %s %s %s %s %s %s %s %s\n",SSS.segunda1.h11, SSS.segunda1.h22, SSS.segunda1.h33, SSS.segunda1.lanche2, SSS.segunda1.h44, SSS.segunda1.h55, SSS.segunda1.h66, SSS.segunda1.h77);
								fprintf(agendH.Agendamento,"Terca:   %s %s %s %s %s %s %s %s\n",SSS.terca1.h11, SSS.terca1.h22, SSS.terca1.h33, SSS.terca1.lanche2, SSS.terca1.h44, SSS.terca1.h55, SSS.terca1.h66, SSS.terca1.h77);
								fprintf(agendH.Agendamento,"Quarta:  %s %s %s %s %s %s %s %s\n",SSS.quarta1.h11, SSS.quarta1.h22, SSS.quarta1.h33, SSS.quarta1.lanche2, SSS.quarta1.h44, SSS.quarta1.h55, SSS.quarta1.h66, SSS.quarta1.h77);
								fprintf(agendH.Agendamento,"Quinta:  %s %s %s %s %s %s %s %s\n",SSS.quinta1.h11, SSS.quinta1.h22, SSS.quinta1.h33, SSS.quinta1.lanche2, SSS.quinta1.h44, SSS.quinta1.h55, SSS.quinta1.h66, SSS.quinta1.h77);
								fprintf(agendH.Agendamento,"Sexta:   %s %s %s %s %s %s %s %s\n",SSS.sexta1.h11, SSS.sexta1.h22, SSS.sexta1.h33, SSS.sexta1.lanche2, SSS.sexta1.h44, SSS.sexta1.h55, SSS.sexta1.h66, SSS.sexta1.h77);
								fprintf(agendH.Agendamento,"--------------------------------------------------------------------------------");
							}
							if((semanaHoje == 1) && (diaSemana == 3))
							{
								fprintf(agendH.Agendamento,"\n");
								fprintf(agendH.Agendamento,"%s", agendH.puxarNome);
								fprintf(agendH.Agendamento,"%s",agendH.puxarEspecialidade);
								fprintf(agendH.Agendamento,"%s",agendH.puxarCPF);
								fprintf(agendH.Agendamento,"%s",agendH.puxarCRM);
								fprintf(agendH.Agendamento,"%s",agendH.puxarClinica);
								fprintf(agendH.Agendamento,"%s",agendH.puxarPreco);
								fprintf(agendH.Agendamento,"Dia que trabalha: Segunda a Sexta\n");
								fprintf(agendH.Agendamento,"%s",agendH.puxarTurno);
								
								fprintf(agendH.Agendamento,"%s",agendH.semana1);
								
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.segunda, SS.segunda.h1, SS.segunda.h2, SS.segunda.h3, SS.segunda.lanche, SS.segunda.h4, SS.segunda.h5, SS.segunda.h6, SS.segunda.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.terca, SS.terca.h1, SS.terca.h2, SS.terca.h3, SS.terca.lanche, SS.terca.h4, SS.terca.h5, SS.terca.h6, SS.terca.h7);
								fprintf(agendH.Agendamento,"%s\n",agendH.horario_escolhido);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quinta, SS.quinta.h1, SS.quinta.h2, SS.quinta.h3, SS.quinta.lanche, SS.quinta.h4, SS.quinta.h5, SS.quinta.h6, SS.quinta.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.sexta, SS.sexta.h1, SS.sexta.h2, SS.sexta.h3, SS.sexta.lanche, SS.sexta.h4, SS.sexta.h5, SS.sexta.h6, SS.sexta.h7);
								
								fprintf(agendH.Agendamento,"			-Semana 2-\n");
								
								fprintf(agendH.Agendamento,"Segunda: %s %s %s %s %s %s %s %s\n",SSS.segunda1.h11, SSS.segunda1.h22, SSS.segunda1.h33, SSS.segunda1.lanche2, SSS.segunda1.h44, SSS.segunda1.h55, SSS.segunda1.h66, SSS.segunda1.h77);
								fprintf(agendH.Agendamento,"Terca:   %s %s %s %s %s %s %s %s\n",SSS.terca1.h11, SSS.terca1.h22, SSS.terca1.h33, SSS.terca1.lanche2, SSS.terca1.h44, SSS.terca1.h55, SSS.terca1.h66, SSS.terca1.h77);
								fprintf(agendH.Agendamento,"Quarta:  %s %s %s %s %s %s %s %s\n",SSS.quarta1.h11, SSS.quarta1.h22, SSS.quarta1.h33, SSS.quarta1.lanche2, SSS.quarta1.h44, SSS.quarta1.h55, SSS.quarta1.h66, SSS.quarta1.h77);
								fprintf(agendH.Agendamento,"Quinta:  %s %s %s %s %s %s %s %s\n",SSS.quinta1.h11, SSS.quinta1.h22, SSS.quinta1.h33, SSS.quinta1.lanche2, SSS.quinta1.h44, SSS.quinta1.h55, SSS.quinta1.h66, SSS.quinta1.h77);
								fprintf(agendH.Agendamento,"Sexta:   %s %s %s %s %s %s %s %s\n",SSS.sexta1.h11, SSS.sexta1.h22, SSS.sexta1.h33, SSS.sexta1.lanche2, SSS.sexta1.h44, SSS.sexta1.h55, SSS.sexta1.h66, SSS.sexta1.h77);
								fprintf(agendH.Agendamento,"--------------------------------------------------------------------------------");
							}
							if((semanaHoje == 1) && (diaSemana == 4))
							{
								fprintf(agendH.Agendamento,"\n");
								fprintf(agendH.Agendamento,"%s", agendH.puxarNome);
								fprintf(agendH.Agendamento,"%s",agendH.puxarEspecialidade);
								fprintf(agendH.Agendamento,"%s",agendH.puxarCPF);
								fprintf(agendH.Agendamento,"%s",agendH.puxarCRM);
								fprintf(agendH.Agendamento,"%s",agendH.puxarClinica);
								fprintf(agendH.Agendamento,"%s",agendH.puxarPreco);
								fprintf(agendH.Agendamento,"Dia que trabalha: Segunda a Sexta\n");
								fprintf(agendH.Agendamento,"%s",agendH.puxarTurno);
								
								fprintf(agendH.Agendamento,"%s",agendH.semana1);
								
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.segunda, SS.segunda.h1, SS.segunda.h2, SS.segunda.h3, SS.segunda.lanche, SS.segunda.h4, SS.segunda.h5, SS.segunda.h6, SS.segunda.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.terca, SS.terca.h1, SS.terca.h2, SS.terca.h3, SS.terca.lanche, SS.terca.h4, SS.terca.h5, SS.terca.h6, SS.terca.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quarta, SS.quarta.h1, SS.quarta.h2, SS.quarta.h3, SS.quarta.lanche, SS.quarta.h4, SS.quarta.h5, SS.quarta.h6, SS.quarta.h7);
								fprintf(agendH.Agendamento,"%s\n",agendH.horario_escolhido);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.sexta, SS.sexta.h1, SS.sexta.h2, SS.sexta.h3, SS.sexta.lanche, SS.sexta.h4, SS.sexta.h5, SS.sexta.h6, SS.sexta.h7);
								
								fprintf(agendH.Agendamento,"			-Semana 2-\n");
								
								fprintf(agendH.Agendamento,"Segunda: %s %s %s %s %s %s %s %s\n",SSS.segunda1.h11, SSS.segunda1.h22, SSS.segunda1.h33, SSS.segunda1.lanche2, SSS.segunda1.h44, SSS.segunda1.h55, SSS.segunda1.h66, SSS.segunda1.h77);
								fprintf(agendH.Agendamento,"Terca:   %s %s %s %s %s %s %s %s\n",SSS.terca1.h11, SSS.terca1.h22, SSS.terca1.h33, SSS.terca1.lanche2, SSS.terca1.h44, SSS.terca1.h55, SSS.terca1.h66, SSS.terca1.h77);
								fprintf(agendH.Agendamento,"Quarta:  %s %s %s %s %s %s %s %s\n",SSS.quarta1.h11, SSS.quarta1.h22, SSS.quarta1.h33, SSS.quarta1.lanche2, SSS.quarta1.h44, SSS.quarta1.h55, SSS.quarta1.h66, SSS.quarta1.h77);
								fprintf(agendH.Agendamento,"Quinta:  %s %s %s %s %s %s %s %s\n",SSS.quinta1.h11, SSS.quinta1.h22, SSS.quinta1.h33, SSS.quinta1.lanche2, SSS.quinta1.h44, SSS.quinta1.h55, SSS.quinta1.h66, SSS.quinta1.h77);
								fprintf(agendH.Agendamento,"Sexta:   %s %s %s %s %s %s %s %s\n",SSS.sexta1.h11, SSS.sexta1.h22, SSS.sexta1.h33, SSS.sexta1.lanche2, SSS.sexta1.h44, SSS.sexta1.h55, SSS.sexta1.h66, SSS.sexta1.h77);
								fprintf(agendH.Agendamento,"--------------------------------------------------------------------------------");
							}
							if((semanaHoje == 1) && (diaSemana == 5))
							{
								fprintf(agendH.Agendamento,"\n");
								fprintf(agendH.Agendamento,"%s", agendH.puxarNome);
								fprintf(agendH.Agendamento,"%s",agendH.puxarEspecialidade);
								fprintf(agendH.Agendamento,"%s",agendH.puxarCPF);
								fprintf(agendH.Agendamento,"%s",agendH.puxarCRM);
								fprintf(agendH.Agendamento,"%s",agendH.puxarClinica);
								fprintf(agendH.Agendamento,"%s",agendH.puxarPreco);
								fprintf(agendH.Agendamento,"Dia que trabalha: Segunda a Sexta\n");
								fprintf(agendH.Agendamento,"%s",agendH.puxarTurno);
								
								fprintf(agendH.Agendamento,"%s",agendH.semana1);
								
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.segunda, SS.segunda.h1, SS.segunda.h2, SS.segunda.h3, SS.segunda.lanche, SS.segunda.h4, SS.segunda.h5, SS.segunda.h6, SS.segunda.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.terca, SS.terca.h1, SS.terca.h2, SS.terca.h3, SS.terca.lanche, SS.terca.h4, SS.terca.h5, SS.terca.h6, SS.terca.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quarta, SS.quarta.h1, SS.quarta.h2, SS.quarta.h3, SS.quarta.lanche, SS.quarta.h4, SS.quarta.h5, SS.quarta.h6, SS.quarta.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quinta, SS.quinta.h1, SS.quinta.h2, SS.quinta.h3, SS.quinta.lanche, SS.quinta.h4, SS.quinta.h5, SS.quinta.h6, SS.quinta.h7);
								fprintf(agendH.Agendamento,"%s\n",agendH.horario_escolhido);
								
								fprintf(agendH.Agendamento,"			-Semana 2-\n");
								
								fprintf(agendH.Agendamento,"Segunda: %s %s %s %s %s %s %s %s\n",SSS.segunda1.h11, SSS.segunda1.h22, SSS.segunda1.h33, SSS.segunda1.lanche2, SSS.segunda1.h44, SSS.segunda1.h55, SSS.segunda1.h66, SSS.segunda1.h77);
								fprintf(agendH.Agendamento,"Terca:   %s %s %s %s %s %s %s %s\n",SSS.terca1.h11, SSS.terca1.h22, SSS.terca1.h33, SSS.terca1.lanche2, SSS.terca1.h44, SSS.terca1.h55, SSS.terca1.h66, SSS.terca1.h77);
								fprintf(agendH.Agendamento,"Quarta:  %s %s %s %s %s %s %s %s\n",SSS.quarta1.h11, SSS.quarta1.h22, SSS.quarta1.h33, SSS.quarta1.lanche2, SSS.quarta1.h44, SSS.quarta1.h55, SSS.quarta1.h66, SSS.quarta1.h77);
								fprintf(agendH.Agendamento,"Quinta:  %s %s %s %s %s %s %s %s\n",SSS.quinta1.h11, SSS.quinta1.h22, SSS.quinta1.h33, SSS.quinta1.lanche2, SSS.quinta1.h44, SSS.quinta1.h55, SSS.quinta1.h66, SSS.quinta1.h77);
								fprintf(agendH.Agendamento,"Sexta:   %s %s %s %s %s %s %s %s\n",SSS.sexta1.h11, SSS.sexta1.h22, SSS.sexta1.h33, SSS.sexta1.lanche2, SSS.sexta1.h44, SSS.sexta1.h55, SSS.sexta1.h66, SSS.sexta1.h77);
								fprintf(agendH.Agendamento,"--------------------------------------------------------------------------------");
							}
							// semana 2
								if((semanaHoje == 2) && (diaSemana == 1))
							{
								fprintf(agendH.Agendamento,"\n");
								fprintf(agendH.Agendamento,"%s", agendH.puxarNome);
								fprintf(agendH.Agendamento,"%s",agendH.puxarEspecialidade);
								fprintf(agendH.Agendamento,"%s",agendH.puxarCPF);
								fprintf(agendH.Agendamento,"%s",agendH.puxarCRM);
								fprintf(agendH.Agendamento,"%s",agendH.puxarClinica);
								fprintf(agendH.Agendamento,"%s",agendH.puxarPreco);
								fprintf(agendH.Agendamento,"Dia que trabalha: Segunda a Sexta\n");
								fprintf(agendH.Agendamento,"%s",agendH.puxarTurno);
								
								fprintf(agendH.Agendamento,"%s",agendH.semana1);
								
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.segunda, SS.segunda.h1, SS.segunda.h2, SS.segunda.h3, SS.segunda.lanche, SS.segunda.h4, SS.segunda.h5, SS.segunda.h6, SS.segunda.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.terca, SS.terca.h1, SS.terca.h2, SS.terca.h3, SS.terca.lanche, SS.terca.h4, SS.terca.h5, SS.terca.h6, SS.terca.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quarta, SS.quarta.h1, SS.quarta.h2, SS.quarta.h3, SS.quarta.lanche, SS.quarta.h4, SS.quarta.h5, SS.quarta.h6, SS.quarta.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quinta, SS.quinta.h1, SS.quinta.h2, SS.quinta.h3, SS.quinta.lanche, SS.quinta.h4, SS.quinta.h5, SS.quinta.h6, SS.quinta.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.sexta, SS.sexta.h1, SS.sexta.h2, SS.sexta.h3, SS.sexta.lanche, SS.sexta.h4, SS.sexta.h5, SS.sexta.h6, SS.sexta.h7);
								
								fprintf(agendH.Agendamento,"			-Semana 2-");
								
								fprintf(agendH.Agendamento,"\n%s\n",agendH.horario_escolhido);
								fprintf(agendH.Agendamento,"Terca:  %s %s %s %s %s %s %s %s\n",SSS.terca1.h11, SSS.terca1.h22, SSS.terca1.h33, SSS.terca1.lanche2, SSS.terca1.h44, SSS.terca1.h55, SSS.terca1.h66, SSS.terca1.h77);
								fprintf(agendH.Agendamento,"Quarta: %s %s %s %s %s %s %s %s\n",SSS.quarta1.h11, SSS.quarta1.h22, SSS.quarta1.h33, SSS.quarta1.lanche2, SSS.quarta1.h44, SSS.quarta1.h55, SSS.quarta1.h66, SSS.quarta1.h77);
								fprintf(agendH.Agendamento,"Quinta: %s %s %s %s %s %s %s %s\n",SSS.quinta1.h11, SSS.quinta1.h22, SSS.quinta1.h33, SSS.quinta1.lanche2, SSS.quinta1.h44, SSS.quinta1.h55, SSS.quinta1.h66, SSS.quinta1.h77);
								fprintf(agendH.Agendamento,"Sexta:  %s %s %s %s %s %s %s %s\n",SSS.sexta1.h11, SSS.sexta1.h22, SSS.sexta1.h33, SSS.sexta1.lanche2, SSS.sexta1.h44, SSS.sexta1.h55, SSS.sexta1.h66, SSS.sexta1.h77);
								fprintf(agendH.Agendamento,"--------------------------------------------------------------------------------");
							}
							if((semanaHoje == 2) && (diaSemana == 2))
							{
								fprintf(agendH.Agendamento,"\n");
								fprintf(agendH.Agendamento,"%s", agendH.puxarNome);
								fprintf(agendH.Agendamento,"%s",agendH.puxarEspecialidade);
								fprintf(agendH.Agendamento,"%s",agendH.puxarCPF);
								fprintf(agendH.Agendamento,"%s",agendH.puxarCRM);
								fprintf(agendH.Agendamento,"%s",agendH.puxarClinica);
								fprintf(agendH.Agendamento,"%s",agendH.puxarPreco);
								fprintf(agendH.Agendamento,"Dia que trabalha: Segunda a Sexta\n");
								fprintf(agendH.Agendamento,"%s",agendH.puxarTurno);
								
								fprintf(agendH.Agendamento,"%s",agendH.semana1);
								
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.segunda, SS.segunda.h1, SS.segunda.h2, SS.segunda.h3, SS.segunda.lanche, SS.segunda.h4, SS.segunda.h5, SS.segunda.h6, SS.segunda.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.terca, SS.terca.h1, SS.terca.h2, SS.terca.h3, SS.terca.lanche, SS.terca.h4, SS.terca.h5, SS.terca.h6, SS.terca.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quarta, SS.quarta.h1, SS.quarta.h2, SS.quarta.h3, SS.quarta.lanche, SS.quarta.h4, SS.quarta.h5, SS.quarta.h6, SS.quarta.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quinta, SS.quinta.h1, SS.quinta.h2, SS.quinta.h3, SS.quinta.lanche, SS.quinta.h4, SS.quinta.h5, SS.quinta.h6, SS.quinta.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.sexta, SS.sexta.h1, SS.sexta.h2, SS.sexta.h3, SS.sexta.lanche, SS.sexta.h4, SS.sexta.h5, SS.sexta.h6, SS.sexta.h7);
								
								fprintf(agendH.Agendamento,"			-Semana 2-\n");
								
								fprintf(agendH.Agendamento,"Segunda: %s %s %s %s %s %s %s %s\n",SSS.segunda1.h11, SSS.segunda1.h22, SSS.segunda1.h33, SSS.segunda1.lanche2, SSS.segunda1.h44, SSS.segunda1.h55, SSS.segunda1.h66, SSS.segunda1.h77);
								fprintf(agendH.Agendamento,"%s\n",agendH.horario_escolhido);
								fprintf(agendH.Agendamento,"Quarta: %s %s %s %s %s %s %s %s\n",SSS.quarta1.h11, SSS.quarta1.h22, SSS.quarta1.h33, SSS.quarta1.lanche2, SSS.quarta1.h44, SSS.quarta1.h55, SSS.quarta1.h66, SSS.quarta1.h77);
								fprintf(agendH.Agendamento,"Quinta: %s %s %s %s %s %s %s %s\n",SSS.quinta1.h11, SSS.quinta1.h22, SSS.quinta1.h33, SSS.quinta1.lanche2, SSS.quinta1.h44, SSS.quinta1.h55, SSS.quinta1.h66, SSS.quinta1.h77);
								fprintf(agendH.Agendamento,"Sexta:  %s %s %s %s %s %s %s %s\n",SSS.sexta1.h11, SSS.sexta1.h22, SSS.sexta1.h33, SSS.sexta1.lanche2, SSS.sexta1.h44, SSS.sexta1.h55, SSS.sexta1.h66, SSS.sexta1.h77);
								fprintf(agendH.Agendamento,"--------------------------------------------------------------------------------");
							}
							if((semanaHoje == 2) && (diaSemana == 3))
							{
								fprintf(agendH.Agendamento,"\n");
								fprintf(agendH.Agendamento,"%s", agendH.puxarNome);
								fprintf(agendH.Agendamento,"%s",agendH.puxarEspecialidade);
								fprintf(agendH.Agendamento,"%s",agendH.puxarCPF);
								fprintf(agendH.Agendamento,"%s",agendH.puxarCRM);
								fprintf(agendH.Agendamento,"%s",agendH.puxarClinica);
								fprintf(agendH.Agendamento,"%s",agendH.puxarPreco);
								fprintf(agendH.Agendamento,"Dia que trabalha: Segunda a Sexta\n");
								fprintf(agendH.Agendamento,"%s",agendH.puxarTurno);
								
								fprintf(agendH.Agendamento,"%s",agendH.semana1);
								
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.segunda, SS.segunda.h1, SS.segunda.h2, SS.segunda.h3, SS.segunda.lanche, SS.segunda.h4, SS.segunda.h5, SS.segunda.h6, SS.segunda.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.terca, SS.terca.h1, SS.terca.h2, SS.terca.h3, SS.terca.lanche, SS.terca.h4, SS.terca.h5, SS.terca.h6, SS.terca.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quarta, SS.quarta.h1, SS.quarta.h2, SS.quarta.h3, SS.quarta.lanche, SS.quarta.h4, SS.quarta.h5, SS.quarta.h6, SS.quarta.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quinta, SS.quinta.h1, SS.quinta.h2, SS.quinta.h3, SS.quinta.lanche, SS.quinta.h4, SS.quinta.h5, SS.quinta.h6, SS.quinta.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.sexta, SS.sexta.h1, SS.sexta.h2, SS.sexta.h3, SS.sexta.lanche, SS.sexta.h4, SS.sexta.h5, SS.sexta.h6, SS.sexta.h7);
								
								fprintf(agendH.Agendamento,"			-Semana 2-\n");
								
								fprintf(agendH.Agendamento,"Segunda: %s %s %s %s %s %s %s %s\n",SSS.segunda1.h11, SSS.segunda1.h22, SSS.segunda1.h33, SSS.segunda1.lanche2, SSS.segunda1.h44, SSS.segunda1.h55, SSS.segunda1.h66, SSS.segunda1.h77);
								fprintf(agendH.Agendamento,"Terca:   %s %s %s %s %s %s %s %s\n",SSS.terca1.h11, SSS.terca1.h22, SSS.terca1.h33, SSS.terca1.lanche2, SSS.terca1.h44, SSS.terca1.h55, SSS.terca1.h66, SSS.terca1.h77);
								fprintf(agendH.Agendamento,"%s\n",agendH.horario_escolhido);
								fprintf(agendH.Agendamento,"Quinta:  %s %s %s %s %s %s %s %s\n",SSS.quinta1.h11, SSS.quinta1.h22, SSS.quinta1.h33, SSS.quinta1.lanche2, SSS.quinta1.h44, SSS.quinta1.h55, SSS.quinta1.h66, SSS.quinta1.h77);
								fprintf(agendH.Agendamento,"Sexta:   %s %s %s %s %s %s %s %s\n",SSS.sexta1.h11, SSS.sexta1.h22, SSS.sexta1.h33, SSS.sexta1.lanche2, SSS.sexta1.h44, SSS.sexta1.h55, SSS.sexta1.h66, SSS.sexta1.h77);
								fprintf(agendH.Agendamento,"--------------------------------------------------------------------------------");
							}
							if((semanaHoje == 2) && (diaSemana == 4))
							{
								fprintf(agendH.Agendamento,"\n");
								fprintf(agendH.Agendamento,"%s", agendH.puxarNome);
								fprintf(agendH.Agendamento,"%s",agendH.puxarEspecialidade);
								fprintf(agendH.Agendamento,"%s",agendH.puxarCPF);
								fprintf(agendH.Agendamento,"%s",agendH.puxarCRM);
								fprintf(agendH.Agendamento,"%s",agendH.puxarClinica);
								fprintf(agendH.Agendamento,"%s",agendH.puxarPreco);
								fprintf(agendH.Agendamento,"Dia que trabalha: Segunda a Sexta\n");
								fprintf(agendH.Agendamento,"%s",agendH.puxarTurno);
								
								fprintf(agendH.Agendamento,"%s",agendH.semana1);
								
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.segunda, SS.segunda.h1, SS.segunda.h2, SS.segunda.h3, SS.segunda.lanche, SS.segunda.h4, SS.segunda.h5, SS.segunda.h6, SS.segunda.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.terca, SS.terca.h1, SS.terca.h2, SS.terca.h3, SS.terca.lanche, SS.terca.h4, SS.terca.h5, SS.terca.h6, SS.terca.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quarta, SS.quarta.h1, SS.quarta.h2, SS.quarta.h3, SS.quarta.lanche, SS.quarta.h4, SS.quarta.h5, SS.quarta.h6, SS.quarta.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quinta, SS.quinta.h1, SS.quinta.h2, SS.quinta.h3, SS.quinta.lanche, SS.quinta.h4, SS.quinta.h5, SS.quinta.h6, SS.quinta.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.sexta, SS.sexta.h1, SS.sexta.h2, SS.sexta.h3, SS.sexta.lanche, SS.sexta.h4, SS.sexta.h5, SS.sexta.h6, SS.sexta.h7);
								
								fprintf(agendH.Agendamento,"			-Semana 2-\n");
								
								fprintf(agendH.Agendamento,"Segunda: %s %s %s %s %s %s %s %s\n",SSS.segunda1.h11, SSS.segunda1.h22, SSS.segunda1.h33, SSS.segunda1.lanche2, SSS.segunda1.h44, SSS.segunda1.h55, SSS.segunda1.h66, SSS.segunda1.h77);
								fprintf(agendH.Agendamento,"Terca:   %s %s %s %s %s %s %s %s\n",SSS.terca1.h11, SSS.terca1.h22, SSS.terca1.h33, SSS.terca1.lanche2, SSS.terca1.h44, SSS.terca1.h55, SSS.terca1.h66, SSS.terca1.h77);
								fprintf(agendH.Agendamento,"Quarta:  %s %s %s %s %s %s %s %s\n",SSS.quarta1.h11, SSS.quarta1.h22, SSS.quarta1.h33, SSS.quarta1.lanche2, SSS.quarta1.h44, SSS.quarta1.h55, SSS.quarta1.h66, SSS.quarta1.h77);
								fprintf(agendH.Agendamento,"%s\n",agendH.horario_escolhido);
								fprintf(agendH.Agendamento,"Sexta:   %s %s %s %s %s %s %s %s\n",SSS.sexta1.h11, SSS.sexta1.h22, SSS.sexta1.h33, SSS.sexta1.lanche2, SSS.sexta1.h44, SSS.sexta1.h55, SSS.sexta1.h66, SSS.sexta1.h77);
								fprintf(agendH.Agendamento,"--------------------------------------------------------------------------------");
							}
							if((semanaHoje == 2) && (diaSemana == 5))
							{
								fprintf(agendH.Agendamento,"\n");
								fprintf(agendH.Agendamento,"%s", agendH.puxarNome);
								fprintf(agendH.Agendamento,"%s",agendH.puxarEspecialidade);
								fprintf(agendH.Agendamento,"%s",agendH.puxarCPF);
								fprintf(agendH.Agendamento,"%s",agendH.puxarCRM);
								fprintf(agendH.Agendamento,"%s",agendH.puxarClinica);
								fprintf(agendH.Agendamento,"%s",agendH.puxarPreco);
								fprintf(agendH.Agendamento,"Dia que trabalha: Segunda a Sexta\n");
								fprintf(agendH.Agendamento,"%s",agendH.puxarTurno);
								
								fprintf(agendH.Agendamento,"%s",agendH.semana1);
								
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.segunda, SS.segunda.h1, SS.segunda.h2, SS.segunda.h3, SS.segunda.lanche, SS.segunda.h4, SS.segunda.h5, SS.segunda.h6, SS.segunda.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.terca, SS.terca.h1, SS.terca.h2, SS.terca.h3, SS.terca.lanche, SS.terca.h4, SS.terca.h5, SS.terca.h6, SS.terca.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quarta, SS.quarta.h1, SS.quarta.h2, SS.quarta.h3, SS.quarta.lanche, SS.quarta.h4, SS.quarta.h5, SS.quarta.h6, SS.quarta.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quinta, SS.quinta.h1, SS.quinta.h2, SS.quinta.h3, SS.quinta.lanche, SS.quinta.h4, SS.quinta.h5, SS.quinta.h6, SS.quinta.h7);
								fprintf(agendH.Agendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.sexta, SS.sexta.h1, SS.sexta.h2, SS.sexta.h3, SS.sexta.lanche, SS.sexta.h4, SS.sexta.h5, SS.sexta.h6, SS.sexta.h7);
								
								fprintf(agendH.Agendamento,"			-Semana 2-");
								
								fprintf(agendH.Agendamento,"Segunda: %s %s %s %s %s %s %s %s\n",SSS.segunda1.h11, SSS.segunda1.h22, SSS.segunda1.h33, SSS.segunda1.lanche2, SSS.segunda1.h44, SSS.segunda1.h55, SSS.segunda1.h66, SSS.segunda1.h77);
								fprintf(agendH.Agendamento,"Terca:   %s %s %s %s %s %s %s %s\n",SSS.terca1.h11, SSS.terca1.h22, SSS.terca1.h33, SSS.terca1.lanche2, SSS.terca1.h44, SSS.terca1.h55, SSS.terca1.h66, SSS.terca1.h77);
								fprintf(agendH.Agendamento,"Quarta:  %s %s %s %s %s %s %s %s\n",SSS.quarta1.h11, SSS.quarta1.h22, SSS.quarta1.h33, SSS.quarta1.lanche2, SSS.quarta1.h44, SSS.quarta1.h55, SSS.quarta1.h66, SSS.quarta1.h77);
								fprintf(agendH.Agendamento,"Quinta:  %s %s %s %s %s %s %s %s\n",SSS.quinta1.h11, SSS.quinta1.h22, SSS.quinta1.h33, SSS.quinta1.lanche2, SSS.quinta1.h44, SSS.quinta1.h55, SSS.quinta1.h66, SSS.quinta1.h77);
								fprintf(agendH.Agendamento,"%s\n",agendH.horario_escolhido);
								fprintf(agendH.Agendamento,"--------------------------------------------------------------------------------");
							}
							
					
						
						
						
						
						
						fclose(agendH.Agendamento);
			

						strcpy(agendH.paciente_agendado,"Agendamentos\\");
						strcat(agendH.paciente_agendado,pacienteCpf);
						strcat(agendH.paciente_agendado,".txt");
						
						
					
						agendH.Agendado_paciente = fopen(agendH.paciente_agendado,"w");
						
						fprintf(agendH.Agendado_paciente,"Nome: %s",puxar_pacienteNome);
						fprintf(agendH.Agendado_paciente,"CPF: %s\n",pacienteCpf);
						fprintf(agendH.Agendado_paciente,"Cartao: %s",agendH.puxar_pacienteCartao);	
						fprintf(agendH.Agendado_paciente,"Responsavel: %s\n",agendH.puxar_pacienteResponsavel);
						
						fprintf(agendH.Agendado_paciente,"%s",agendH.puxarNome);
						fprintf(agendH.Agendado_paciente,"%s",agendH.puxarCPF);
						fprintf(agendH.Agendado_paciente,"%s",agendH.puxarCRM);
						fprintf(agendH.Agendado_paciente,"%s",agendH.puxarEspecialidade);
						fprintf(agendH.Agendado_paciente,"%s",agendH.puxarClinica);
						fprintf(agendH.Agendado_paciente,"%s",agendH.puxarPreco);
						fprintf(agendH.Agendado_paciente,"Dia da consulta: %s (%d/%d)\n",diaDaSemana,diaHoje,mesHoje);
						fprintf(agendH.Agendado_paciente,"Horario: %s",agendH.guardarHora);
						
						fclose(agendH.Agendado_paciente);
						
						printf("Escolha uma das opcoes a baixo\n");
						printf("[1]-Fazer outro Agendamento\n");
						printf("[2]-Voltar para o Menu\n");
						printf("[3]-Encerrar Programa\n");
						printf("Digito escolhido: ");
						scanf("%d", &agendH.loop);
						if(agendH.loop == 2){
							menu.menu_loop = 1;
						}
						if(agendH.loop == 3){
							return 0;
						}
					}while(agendH.loop == 1);
			        break;
			        
			case 3: 
			
					printf("\n\n\n\n\n\n\n\n\n\n\n\n");
					carregando("Carregando (Cadastro de medicos)",15);
					layout_modulo("Cadastro de medicos");
					
					
					
					
					do{
						cadMM.comeco = 0;
						
						printf("   __________________________________________________________________________\n");
						printf("  |Digite o numero que deseja:                                               |\n");                                                  
						printf("    - Criar novo cadastro de medico (0)                                     \n");
						printf("    - Alterar cadastro de medico(1)                                         \n");                                            
						printf("    - Retornar ao menu principal(2)                                           \n");
						fflush(stdin); // limpa saidas
						printf("   \n    Resposta:");
						scanf("%i",&cadMM.escolha); 
						printf("  |__________________________________________________________________________|\n");
						
						switch(cadMM.escolha){
							
						case 0:
							
						   cadMM.cadMedico = fopen("Cadastros_Medicos\\cadastro.txt", "w"); 
									
						   if(cadMM.cadMedico == NULL)
							{
								printf("Erro ao criar o arquivo!");
								return 1;
							}
							else
							{
								system("cls");
								printf("  ___________________________________________________________________________\n");
								printf(" |                                                                           |\n");
								printf("   Digite o nome do Medico: ");
								fflush(stdin);
								gets(cadM.nome); 
								fprintf(cadMM.cadMedico, "%s\n", cadM.nome); 
											
								printf("   Digite o CPF do Medico (somente numeros): ");
								scanf("%s", &cadM.cpf);
								fprintf(cadMM.cadMedico, "%s\n", cadM.cpf); 
								
								printf("   Digite o CRM do medico: ");
								scanf("%s", &cadM.CRM);
								fprintf(cadMM.cadMedico, "%s\n", cadM.CRM);  
											
								printf("   Digite o email do Medico: ");
								scanf("%s", &cadM.email);
								fprintf(cadMM.cadMedico, "%s\n", cadM.email);
											
								printf("   Digite a data de nascimento do Medico com espacos(DIA MES ANO): ");
								scanf("%d %d %d", &cadM.aniversario.dia, &cadM.aniversario.mes, &cadM.aniversario.ano);
								fprintf(cadMM.cadMedico, "%d/%d/%d\n", cadM.aniversario.dia, cadM.aniversario.mes, cadM.aniversario.ano);
								printf(" |___________________________________________________________________________|\n");
							
								
								do{
									cadMM.loop = 0;
									
									printf("\n--Horarios para atendimentos(Segunda a Sexta)--\n\n");
									printf("[1]--Manha--\n");
									printf("6:00am | 7:00am | 8:00am | lanche | 10:00am | 11:00am | 12:00 | 1:00pm\n\n");
									printf("[2]--Tarde--\n");
									printf("2:00pm | 3:00pm | 4:00pm | lanche | 6:00pm | 7:00pm | 8:00pm | 9:00pm\n\n");
									printf("[3]--Noite--\n");
									printf("10:00pm | 11:00pm | 12:00 | lanche | 2:00am | 3:00am | 4:00am | 5:00am\n\n");
									printf("Numero do Turno escolhido: ");
									scanf("%d",	&cadMM.escolha_horario_switch);
									
									switch(cadMM.escolha_horario_switch)
									{
										case 1:
											strcpy(cadMM.escolha_horario,"Manha");
											strcpy(cadM.horario.Segunda,"Segunda: 6:00am 7:00am 8:00am lanche 10:00am 11:00am 12:00 1:00pm");
											strcpy(cadM.horario.Terca,"Terca:   6:00am 7:00am 8:00am lanche 10:00am 11:00am 12:00 1:00pm");
											strcpy(cadM.horario.Quarta,"Quarta:  6:00am 7:00am 8:00am lanche 10:00am 11:00am 12:00 1:00pm");
											strcpy(cadM.horario.Quinta,"Quinta:  6:00am 7:00am 8:00am lanche 10:00am 11:00am 12:00 1:00pm");
											strcpy(cadM.horario.Sexta,"Sexta:   6:00am 7:00am 8:00am lanche 10:00am 11:00am 12:00 1:00pm");
											
											cadMM.loop = 0;
											break;	
										case 2:
											strcpy(cadMM.escolha_horario,"Tarde");
											strcpy(cadM.horario.Segunda,"Segunda: 2:00pm 3:00pm 4:00pm lanche 6:00pm 7:00pm 8:00pm 9:00pm");
											strcpy(cadM.horario.Terca,"Terca:   2:00pm 3:00pm 4:00pm lanche 6:00pm 7:00pm 8:00pm 9:00pm");
											strcpy(cadM.horario.Quarta,"Quarta:  2:00pm 3:00pm 4:00pm lanche 6:00pm 7:00pm 8:00pm 9:00pm");
											strcpy(cadM.horario.Quinta,"Quinta:  2:00pm 3:00pm 4:00pm lanche 6:00pm 7:00pm 8:00pm 9:00pm");
											strcpy(cadM.horario.Sexta,"Sexta:   2:00pm 3:00pm 4:00pm lanche 6:00pm 7:00pm 8:00pm 9:00pm");
																	 
											cadMM.loop = 0;
											break;
										case 3:	
											strcpy(cadMM.escolha_horario,"Noite");
											strcpy(cadM.horario.Segunda,"Segunda: 10:00pm 11:00pm 12:00 lanche 2:00am 3:00am 4:00am 5:00am");
											strcpy(cadM.horario.Terca,"Terca:   10:00pm 11:00pm 12:00 lanche 2:00am 3:00am 4:00am 5:00am");
											strcpy(cadM.horario.Quarta,"Quarta:  10:00pm 11:00pm 12:00 lanche 2:00am 3:00am 4:00am 5:00am");
											strcpy(cadM.horario.Quinta,"Quinta:  10:00pm 11:00pm 12:00 lanche 2:00am 3:00am 4:00am 5:00am");
											strcpy(cadM.horario.Sexta,"Sexta:   10:00pm 11:00pm 12:00 lanche 2:00am 3:00am 4:00am 5:00am");
											
											cadMM.loop = 0;
											break;
										default:
											printf("Horario nao encontrado, gostaria de tentar novamente?\n");
											printf("[1]-SIM\n");
											printf("[2]-NAO\n");
											printf("Resposta: ");
											scanf("%d", &cadMM.loop);	
												
											if(cadMM.loop == 2)
											{
												return 0;
											}
											else
											{
												cadMM.loop = 1;
												system("cls");
											}
											break;
									}
								}while(cadMM.loop == 1);
								
								do{
									printf("\n---Especialidade do Medico---\n\n");
									printf("--clinica A--\n\n");
									printf("[1]-Cardiologia \n");
									printf("[2]-Dermatologia \n");
									printf("[3]-Radiologia \n\n");
									printf("--clinica B--\n\n");
									printf("[4]-Fisioterapia \n");
									printf("[5]-Clinico geral \n");
									printf("[6]-Ortopedia \n\n");
									printf("--clinica C--\n\n");
									printf("[7]-Nutricao \n");
									printf("[8]-Ginecologia \n");
									printf("[9]-Obstetricia \n");
									printf("[10]-Psicologia \n\n");
									printf("Numero da especialidade escolhida: ");
									scanf("%d", &cadMM.escolha_especialidade);
									
									switch (cadMM.escolha_especialidade)
									{
										case 1:
											strcpy(cadM.especialidade,"Cardiologia");
											strcpy(cadM.clinica,"Clinica A");
											cadMM.loop = 0;
											break;
										case 2:
											strcpy(cadM.especialidade,"Dermatologia");
											strcpy(cadM.clinica,"Clinica A");
											cadMM.loop = 0;
											break;
										case 3:
											strcpy(cadM.especialidade,"Radiologia");
											strcpy(cadM.clinica,"Clinica A");
											cadMM.loop = 0;
											break;
										case 4:
											strcpy(cadM.especialidade,"Fisioterapia");
											strcpy(cadM.clinica,"Clinica B");
											cadMM.loop = 0;
											break;
										case 5:
											strcpy(cadM.especialidade,"Clinico_Geral");
											strcpy(cadM.clinica,"Clinica B");
											cadMM.loop = 0;
											break;
										case 6:
											strcpy(cadM.especialidade,"Ortopedia");
											strcpy(cadM.clinica,"Clinica B");
											cadMM.loop = 0;
											break;
										case 7:
											strcpy(cadM.especialidade,"Nutricao");
											strcpy(cadM.clinica,"Clinica C");
											cadMM.loop = 0;
											break;
										case 8:
											strcpy(cadM.especialidade,"Ginecologia");
											strcpy(cadM.clinica,"Clinica C");
											cadMM.loop = 0;
											break;
										case 9:
											strcpy(cadM.especialidade,"Obstetricia");
											strcpy(cadM.clinica,"Clinica C");
											cadMM.loop = 0;
											break;
										case 10:
											strcpy(cadM.especialidade,"Psicologia");
											strcpy(cadM.clinica,"Clinica C");
											cadMM.loop = 0;
											break;
										default:
											printf("Especialidade nao encontrado, gostaria de tentar novamente?\n");
											printf("[1]-SIM\n");
											printf("[2]-NAO\n");
											printf("Resposta: ");
											scanf("%d", &cadMM.loop);	
												
											if(cadMM.loop == 2)
											{
												return 0;
											}
											else
											{
												cadMM.loop = 1;
												system("cls");
											}
											break;		
									}
								}while(cadMM.loop == 1);
								fprintf(cadMM.cadMedico,"%s\n", cadM.especialidade);
						
								
								strcpy(cadMM.especialidades_n,"Especialidades\\");
								
								strcpy(cadMM.barra,"\\");
								
								strcpy(cadMM.txt,".txt");
								
							
								
								
								strcpy(cadMM.turno,cadMM.escolha_horario);
							
								strcat(cadMM.especialidades_n,cadM.especialidade); 
								strcat(cadMM.especialidades_n,cadMM.barra);
								strcat(cadMM.especialidades_n,cadM.CRM);
								
								strcat(cadMM.especialidades_n,".txt");
							
							
								strcpy(cadMM.medico_agendado,cadMM.especialidades_n);
								
							
								cadMM.Agendamento = fopen(cadMM.medico_agendado, "w");
								
								if(cadMM.Agendamento == NULL)
								{
									printf("Erro ao criar o arquivo!");
									return 1;
								}
								else
								{
									printf("\nDigite o valor da consulta do Medico(em numeros inteiros): ");
									scanf("%d", &cadM.preco);
									fprintf(cadMM.cadMedico, "R$%d\n", cadM.preco);
									fprintf(cadMM.cadMedico,"%s\n", cadM.clinica);
									fprintf(cadMM.cadMedico,"%s\n", cadMM.turno);
									fprintf(cadMM.cadMedico,"Dia que trabalha: Segunda a Sexta\n");
									fprintf(cadMM.cadMedico,"			-Semana 1-\n");
									fprintf(cadMM.cadMedico,"%s\n", cadM.horario.Segunda);
									fprintf(cadMM.cadMedico,"%s\n", cadM.horario.Terca);
									fprintf(cadMM.cadMedico,"%s\n", cadM.horario.Quarta);
									fprintf(cadMM.cadMedico,"%s\n", cadM.horario.Quinta);
									fprintf(cadMM.cadMedico,"%s\n", cadM.horario.Sexta);
									fprintf(cadMM.cadMedico,"			-Semana 2-\n");
									fprintf(cadMM.cadMedico,"%s\n", cadM.horario.Segunda);
									fprintf(cadMM.cadMedico,"%s\n", cadM.horario.Terca);
									fprintf(cadMM.cadMedico,"%s\n", cadM.horario.Quarta);
									fprintf(cadMM.cadMedico,"%s\n", cadM.horario.Quinta);
									fprintf(cadMM.cadMedico,"%s\n", cadM.horario.Sexta);
									
									fclose(cadMM.cadMedico);
								
									cadMM.cadMedico = fopen("\\Cadastros_Medicos\\cadastro.txt", "w");		
									strcpy(cadMM.velho,"Cadastros_Medicos\\cadastro.txt");
									strcpy(cadMM.novo,"Cadastros_Medicos\\");
									strcpy(cadMM.aux, cadM.CRM);
									strcat(cadMM.novo, cadMM.aux);
									strcat(cadMM.novo, cadMM.txt);
									cadMM.ret = rename(cadMM.velho, cadMM.novo);
									
										
									fclose(cadMM.cadMedico);
									fprintf(cadMM.Agendamento,"\n");
									fprintf(cadMM.Agendamento,"Nome do medico: %s\n", cadM.nome);
									fprintf(cadMM.Agendamento,"Especialidade: %s\n", cadM.especialidade);
									fprintf(cadMM.Agendamento,"CPF: %s\n",cadM.cpf);
									fprintf(cadMM.Agendamento,"CRM: %s\n",cadM.CRM);
									fprintf(cadMM.Agendamento,"Clinica onde reside: %s\n", cadM.clinica);
									fprintf(cadMM.Agendamento,"Preco da consulta: R$%d\n", cadM.preco);
									fprintf(cadMM.Agendamento,"Dia que trabalha: Segunda a Sexta\n");
									fprintf(cadMM.Agendamento,"Turno: %s\n",cadMM.turno);
									fprintf(cadMM.Agendamento,"			-Semana 1-\n");
									fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Segunda);
									fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Terca);
									fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Quarta);
									fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Quinta);
									fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Sexta);
									fprintf(cadMM.Agendamento,"			-Semana 2-\n");
									fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Segunda);
									fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Terca);
									fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Quarta);
									fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Quinta);
									fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Sexta);
									fprintf(cadMM.Agendamento,"--------------------------------------------------------------------------------");
									
									fclose(cadMM.Agendamento);
									
									system("cls");
								}
					
								printf("Escolha uma das opcoes a baixo\n");
								printf("[1]-Voltar cadastro de medicos\n");
								printf("[2]-Voltar para o Menu\n");
								printf("[3]-Encerrar Programa\n");
								printf("Digito escolhido: ");
								scanf("%d", &cadMM.comeco);
								system("cls");
								if(cadMM.comeco == 2){
									menu.menu_loop = 1;
								}
								if(cadMM.comeco == 3){
									return 0;
								}
							}
							break;
							
							case 1:
								system("cls");
								printf("  ___________________________________________________________________________\n");
								printf(" |                                                                           |\n");
								printf("   Digite o CRM do medico que desja fazer a alteracao: ");
								scanf("%s",cadMM.crm_altera);
								printf(" |___________________________________________________________________________|\n");
								
								strcat(cadMM.contat1,cadMM.crm_altera);
								strcat(cadMM.contat1, cadMM.txt_medico);

										    	
								cadMM.abrircadastro = fopen(cadMM.contat1,"r");
									
								if (cadMM.abrircadastro == NULL)
								{
								printf("\n\n                         MEDICO NAO ENCONTRADO :(                          \n");
								printf("              Aperte qualquer tecla para voltar ao cadastro de medicos \n\n\n                 \n");
								
								system("pause");
								cadMM.comeco = 1;
								system("cls");
								
								
								}
								else
								{	
								printf("   ___________________________________________________________________________\n");
								printf("  |                                                                           |\n");	    	
								while (fgets(cadMM.conteudo_medico,600, cadMM.abrircadastro) != NULL)
								printf("\n      %s ",cadMM.conteudo_medico);
								
								printf("\n\n   |___________________________________________________________________________|\n\n\n");
								
								printf("    ___________________________________________________________________________\n");
								printf("   |                                                                           |\n");
								printf("      Deseja mesmo fazer alteracoes nesse medico?(S)Sim ou (N)Nao           \n");
								printf("\n\n                        Resposta: ");
								fflush(stdin);
								scanf("%c",&cadMM.alterar_medico_cadastro);
								printf("   |___________________________________________________________________________|\n");
						
								if (cadMM.alterar_medico_cadastro == 's' || cadMM.alterar_medico_cadastro == 'S'){
									
								
								
								
								cadMM.cadMedico = fopen(cadMM.contat1, "w"); 
										
							   if(cadMM.cadMedico == NULL)
								{
									printf("Erro ao criar o arquivo!");
									return 1;
								}
								else
								{
									system("cls");
									printf("  ___________________________________________________________________________\n");
									printf(" |                                                                           |\n");
									printf("   Digite o nome do Medico: ");
									fflush(stdin);
									gets(cadM.nome); 
									fprintf(cadMM.cadMedico, "%s\n", cadM.nome); 
												
									printf("   Digite o CPF do Medico (somente numeros): ");
									scanf("%s", &cadM.cpf);
									fprintf(cadMM.cadMedico, "%s\n", cadM.cpf); 
									
									printf("   Digite o CRM do medico: %s\n",cadMM.crm_altera);
									fprintf(cadMM.cadMedico, "%s\n", cadMM.crm_altera);  
												
									printf("   Digite o email do Medico: ");
									scanf("%s", &cadM.email);
									fprintf(cadMM.cadMedico, "%s\n", cadM.email);
												
									printf("   Digite a data de nascimento do Medico com espacos(DIA MES ANO): ");
									scanf("%d %d %d", &cadM.aniversario.dia, &cadM.aniversario.mes, &cadM.aniversario.ano);
									fprintf(cadMM.cadMedico, "%d/%d/%d\n", cadM.aniversario.dia, cadM.aniversario.mes, cadM.aniversario.ano);
									printf(" |___________________________________________________________________________|\n");
									
									do{
										cadMM.loop = 0;
										
										printf("\n--Horarios para atendimentos(Segunda a Sexta)--\n\n");
										printf("[1]--Manha--\n");
										printf("6:00am | 7:00am | 8:00am | lanche | 10:00am | 11:00am | 12:00 | 1:00pm\n\n");
										printf("[2]--Tarde--\n");
										printf("2:00pm | 3:00pm | 4:00pm | lanche | 6:00pm | 7:00pm | 8:00pm | 9:00pm\n\n");
										printf("[3]--Noite--\n");
										printf("10:00pm | 11:00pm | 12:00 | lanche | 2:00am | 3:00am | 4:00am | 5:00am\n\n");
										printf("Numero do Turno escolhido: ");
										scanf("%d",	&cadMM.escolha_horario_switch);
										
										switch(cadMM.escolha_horario_switch)
										{
											case 1:
												strcpy(cadMM.escolha_horario,"Manha");
												strcpy(cadM.horario.Segunda,"Segunda: 6:00am 7:00am 8:00am lanche 10:00am 11:00am 12:00 1:00pm");
												strcpy(cadM.horario.Terca,"Terca: 6:00am 7:00am 8:00am lanche 10:00am 11:00am 12:00 1:00pm");
												strcpy(cadM.horario.Quarta,"Quarta: 6:00am 7:00am 8:00am lanche 10:00am 11:00am 12:00 1:00pm");
												strcpy(cadM.horario.Quinta,"Quinta: 6:00am 7:00am 8:00am lanche 10:00am 11:00am 12:00 1:00pm");
												strcpy(cadM.horario.Sexta,"Sexta: 6:00am 7:00am 8:00am lanche 10:00am 11:00am 12:00 1:00pm");
												cadMM.loop = 0;
												break;	
											case 2:
												strcpy(cadMM.escolha_horario,"Tarde");
												strcpy(cadM.horario.Segunda,"Segunda: 2:00pm 3:00pm 4:00pm lanche 6:00pm 7:00pm 8:00pm 9:00pm");
												strcpy(cadM.horario.Terca,"Terca: 2:00pm 3:00pm 4:00pm lanche 6:00pm 7:00pm 8:00pm 9:00pm");
												strcpy(cadM.horario.Quarta,"Quarta: 2:00pm 3:00pm 4:00pm lanche 6:00pm 7:00pm 8:00pm 9:00pm");
												strcpy(cadM.horario.Quinta,"Quinta: 2:00pm 3:00pm 4:00pm lanche 6:00pm 7:00pm 8:00pm 9:00pm");
												strcpy(cadM.horario.Sexta,"Sexta: 2:00pm 3:00pm 4:00pm lanche 6:00pm 7:00pm 8:00pm 9:00pm");
												cadMM.loop = 0;
												break;
											case 3:	
												strcpy(cadMM.escolha_horario,"Noite");
												strcpy(cadM.horario.Segunda,"Segunda: 10:00pm 11:00pm 12:00 lanche 2:00am 3:00am 4:00am 5:00am");
												strcpy(cadM.horario.Terca,"Terca: 10:00pm 11:00pm 12:00 lanche 2:00am 3:00am 4:00am 5:00am");
												strcpy(cadM.horario.Quarta,"Quarta: 10:00pm 11:00pm 12:00 lanche 2:00am 3:00am 4:00am 5:00am");
												strcpy(cadM.horario.Quinta,"Quinta: 10:00pm 11:00pm 12:00 lanche 2:00am 3:00am 4:00am 5:00am");
												strcpy(cadM.horario.Sexta,"Sexta: 10:00pm 11:00pm 12:00 lanche 2:00am 3:00am 4:00am 5:00am");
												cadMM.loop = 0;
												break;
											default:
												printf("Horario nao encontrado, gostaria de tentar novamente?\n");
												printf("[1]-SIM\n");
												printf("[2]-NAO\n");
												printf("Resposta: ");
												scanf("%d", &cadMM.loop);	
													
												if(cadMM.loop == 2)
												{
													return 0;
												}
												else
												{
													cadMM.loop = 1;
													system("cls");
												}
												break;
										}
									}while(cadMM.loop == 1);
									
									do{
										printf("\n---Especialidade do Medico---\n\n");
										printf("--clinica A--\n\n");
										printf("[1]-Cardiologia \n");
										printf("[2]-Dermatologia \n");
										printf("[3]-Radiologia \n\n");
										printf("--clinica B--\n\n");
										printf("[4]-Fisioterapia \n");
										printf("[5]-Clinico geral \n");
										printf("[6]-Ortopedia \n\n");
										printf("--clinica C--\n\n");
										printf("[7]-Nutricao \n");
										printf("[8]-Ginecologia \n");
										printf("[9]-Obstetricia \n");
										printf("[10]-Psicologia \n\n");
										printf("Numero da especialidade escolhida: ");
										scanf("%d", &cadMM.escolha_especialidade);
										
										switch (cadMM.escolha_especialidade)
										{
											case 1:
												strcpy(cadM.especialidade,"Cardiologia");
												strcpy(cadM.clinica,"Clinica A");
												cadMM.loop = 0;
												break;
											case 2:
												strcpy(cadM.especialidade,"Dermatologia");
												strcpy(cadM.clinica,"Clinica A");
												cadMM.loop = 0;
												break;
											case 3:
												strcpy(cadM.especialidade,"Radiologia");
												strcpy(cadM.clinica,"Clinica A");
												cadMM.loop = 0;
												break;
											case 4:
												strcpy(cadM.especialidade,"Fisioterapia");
												strcpy(cadM.clinica,"Clinica B");
												cadMM.loop = 0;
												break;
											case 5:
												strcpy(cadM.especialidade,"Clinico_Geral");
												strcpy(cadM.clinica,"Clinica B");
												cadMM.loop = 0;
												break;
											case 6:
												strcpy(cadM.especialidade,"Ortopedia");
												strcpy(cadM.clinica,"Clinica B");
												cadMM.loop = 0;
												break;
											case 7:
												strcpy(cadM.especialidade,"Nutricao");
												strcpy(cadM.clinica,"Clinica C");
												cadMM.loop = 0;
												break;
											case 8:
												strcpy(cadM.especialidade,"Ginecologia");
												strcpy(cadM.clinica,"Clinica C");
												cadMM.loop = 0;
												break;
											case 9:
												strcpy(cadM.especialidade,"Obstetricia");
												strcpy(cadM.clinica,"Clinica C");
												cadMM.loop = 0;
												break;
											case 10:
												strcpy(cadM.especialidade,"Psicologia");
												strcpy(cadM.clinica,"Clinica C");
												cadMM.loop = 0;
												break;
											default:
												printf("Especialidade nao encontrado, gostaria de tentar novamente?\n");
												printf("[1]-SIM\n");
												printf("[2]-NAO\n");
												printf("Resposta: ");
												scanf("%d", &cadMM.loop);	
													
												if(cadMM.loop == 2)
												{
													return 0;
												}
												else
												{
													cadMM.loop = 1;
													system("cls");
												}
												break;		
										}
									}while(cadMM.loop == 1);
									fprintf(cadMM.cadMedico,"%s\n", cadM.especialidade);
							
									
									strcpy(cadMM.especialidades_n,"Especialidades\\");
									
									strcpy(cadMM.barra,"\\");
									
									strcpy(cadMM.txt,".txt");
									
								
									
									
									strcpy(cadMM.turno,cadMM.escolha_horario);
								
									strcat(cadMM.especialidades_n,cadM.especialidade); 
									strcat(cadMM.especialidades_n,cadMM.barra);
									strcat(cadMM.especialidades_n,cadM.CRM);
									
									strcat(cadMM.especialidades_n,".txt");
								
								
									strcpy(cadMM.medico_agendado,cadMM.especialidades_n);
									
								
									cadMM.Agendamento = fopen(cadMM.medico_agendado, "w");
									
									if(cadMM.Agendamento == NULL)
									{
										printf("Erro ao criar o arquivo!");
										return 1;
									}
									else
									{
										printf("\nDigite o valor da consulta do Medico(em numeros inteiros): ");
										scanf("%d", &cadM.preco);
									
										fprintf(cadMM.cadMedico, "R$%d\n", cadM.preco);
										fprintf(cadMM.cadMedico,"%s\n", cadM.clinica);
										fprintf(cadMM.cadMedico,"%s\n", cadMM.turno);
										fprintf(cadMM.cadMedico,"Dia que trabalha: Seguna a Sexta");
										fprintf(cadMM.Agendamento,"			-Semana 1-\n");
										fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Segunda);
										fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Terca);
										fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Quarta);
										fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Quinta);
										fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Sexta);
										fprintf(cadMM.Agendamento,"			-Semana 2-\n");
										fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Segunda);
										fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Terca);
										fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Quarta);
										fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Quinta);
										fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Sexta);
										
										fclose(cadMM.cadMedico);
									
										cadMM.cadMedico = fopen("\\Cadastros_Medicos\\cadastro.txt", "w");		
										strcpy(cadMM.velho,"Cadastros_Medicos\\cadastro.txt");
										strcpy(cadMM.novo,"Cadastros_Medicos\\");
										strcpy(cadMM.aux, cadM.CRM);
										strcat(cadMM.novo, cadMM.aux);
										strcat(cadMM.novo, cadMM.txt);
										cadMM.ret = rename(cadMM.velho, cadMM.novo);
										
											
										fclose(cadMM.cadMedico);
										fprintf(cadMM.Agendamento,"\n");
										fprintf(cadMM.Agendamento,"Nome do medico: %s\n", cadM.nome);
										fprintf(cadMM.Agendamento,"Especialidade: %s\n", cadM.especialidade);
										fprintf(cadMM.Agendamento,"CPF: %s\n",cadM.cpf);
										fprintf(cadMM.Agendamento,"CRM: %s\n",cadM.CRM);
										fprintf(cadMM.Agendamento,"Clinica onde reside: %s\n", cadM.clinica);
										fprintf(cadMM.Agendamento,"Preco da consulta: R$%d\n", cadM.preco);
										fprintf(cadMM.Agendamento,"Dia que trabalha: Segunda a Sexta\n");
										fprintf(cadMM.Agendamento,"Turno: %s\n",cadMM.turno);
										fprintf(cadMM.Agendamento,"			-Semana 1-\n");
										fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Segunda);
										fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Terca);
										fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Quarta);
										fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Quinta);
										fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Sexta);
										fprintf(cadMM.Agendamento,"			-Semana 2-\n");
										fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Segunda);
										fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Terca);
										fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Quarta);
										fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Quinta);
										fprintf(cadMM.Agendamento,"%s\n", cadM.horario.Sexta);
										fprintf(cadMM.Agendamento,"--------------------------------------------------------------------------------");
										
										fclose(cadMM.Agendamento);
										
										system("cls");
									}
						
									printf("Escolha uma das opcoes a baixo\n");
									printf("[1]-Voltar cadastro de medicos\n");
									printf("[2]-Voltar para o Menu\n");
									printf("[3]-Encerrar Programa\n");
									printf("Digito escolhido: ");
									scanf("%d", &cadMM.comeco);
									system("cls");
									if(cadMM.comeco == 2){
										menu.menu_loop = 1;
									}
									if(cadMM.comeco == 3){
										return 0;
									
									
									}
									}
									}
									else{
										cadMM.comeco = 1;
										system("cls");
									}
								}
								break;
							
							case 2:
								menu.menu_loop = 1;
								break;
						}	
					}while(cadMM.comeco == 1);
			
		           	break; 
		           	
			case 4: 
						
						printf("\n\n\n\n\n\n\n\n\n\n\n\n");
						carregando("Carregando (Gerador de relatorios)",15);
						layout_modulo("Gerador de relatorios");
						system("cls");
						ge_rel.voltar = 1;
						
						while (ge_rel.voltar == 1){
						 				
						layout_modulo("Gerador de Relatorios");
						printf("   __________________________________________________________________________\n");
						printf("  |Digite o relatorio que deseja emitir:                                     |\n\n");                                                  
						printf("    - Faturamento por unidade(0)                                              \n");
						printf("    - Relatorio de paciente por unidade(1)                                    \n");                                            
						printf("    - Relatorio de medicos cadastrados(2)                                     \n");
						printf("    - Relatorio de usuarios cadastrados(3)                                    \n");
						printf("    - Relatorio de total de agendamentos(4)                                   \n");
						printf("    - Voltar ao menu principal(5)                                             \n");
						fflush(stdin); // limpa saidas
						printf("   \nResposta:");
						scanf("%i",&ge_rel.escolha); 
						printf("  |__________________________________________________________________________|\n");
					
										
						switch (ge_rel.escolha){
						
						case 0:
					
									
									do
									{
										system("cls");
										rede.loop = 0;
										
									 	printf("---------------Unidade de Rede---------------\n\n");
									 	printf("[1]-Unidade de rede que mais atende\n");
									 	printf("[2]-Totalizacao Diaria e mensal do faturamento por unidade de rede\n");
									 	printf("[3]-Totalizacao Diaria e mensal do faturamento por total de rede\n");
									 	printf("[4]-Voltar modulo Gerador de Relatorios\n");
									 	printf("Resposta: ");
									 	scanf("%d", &rede.escolha);
								
									
										switch(rede.escolha)
										{
											case 1:
												rede.redeMaisAtende = fopen("ClinicaMaisAtende//Clinica_A.txt", "r");
												fscanf(rede.redeMaisAtende,"%s",rede.mais);
												
												rede.maisA = atoi(rede.mais); // atoi transforma string em int, precisa da biblioteca <conio.h>
												
												
												fclose(rede.redeMaisAtende);
												/////////////////////////////////
												rede.redeMaisAtende = fopen("ClinicaMaisAtende//Clinica_B.txt", "r");
												fscanf(rede.redeMaisAtende,"%s",rede.mais);
												
												rede.maisB = atoi(rede.mais);
												
												
												fclose(rede.redeMaisAtende);
												/////////////////////////////////				
												rede.redeMaisAtende = fopen("ClinicaMaisAtende//Clinica_C.txt", "r");
												fscanf(rede.redeMaisAtende,"%s",rede.mais);
												
												rede.maisC = atoi(rede.mais);
												
												
												fclose(rede.redeMaisAtende);
												
												system("cls");
												printf("---------------Unidade de rede que mais atende---------------\n\n");
												
												
												if ((rede.maisA == rede.maisB) && (rede.maisA == rede.maisC))
												{
													printf("As 3 clinicas tiverem %d numeros de atendimento\n", rede.maisA);
													return 0;
												}
												else
												{
													if ((rede.maisA > rede.maisB) && (rede.maisA > rede.maisC))
													{
														rede.Maior = rede.maisA;
														strcpy(rede.clinicaMaior,"Clinica A");
													}
													else if ((rede.maisB > rede.maisA) && (rede.maisB > rede.maisC))
													{
														rede.Maior = rede.maisB;
														strcpy(rede.clinicaMaior,"Clinica B");
													}
													else if ((rede.maisC > rede.maisA) && (rede.maisC > rede.maisB))
													{
														rede.Maior = rede.maisC;
														strcpy(rede.clinicaMaior,"Clinica C");
													}
													else if((rede.maisB == rede.maisA))
													{
														rede.Maior = rede.maisB;
														strcpy(rede.clinicaMaior,"Clinica B e Clinica A");
													}
													else if ((rede.maisC == rede.maisA))
													{
														rede.Maior = rede.maisA;
														strcpy(rede.clinicaMaior,"Clinica C e Clinica A");
													}
													else
													{
														rede.Maior = rede.maisC;
														strcpy(rede.clinicaMaior,"Clinica B e Clinica C");
													}
												}
												
												printf("A unidade que teve o mairo numero de atendimento(s) foi:\n%s com %d atendimento(s)!\n\n",rede.clinicaMaior,rede.Maior);
												
												printf("Gostaria de voltar para o menu de Unidade de Redes?\n");
												printf("[1]-SIM\n");
												printf("[2]-NAO\n");
												printf("Resposta: ");
												scanf("%d", &rede.loop);
												
												if(rede.loop == 2)
												{
													return 0;
												}
												
											break;
											
											case 2:
												printf("----------Totalizacao Diaria e mensal do faturamento por unidade de rede---------\n\n");
												printf("Qual rede voce gostaria de consultar?\n");
												printf("[1]-Clinica A\n");
												printf("[2]-Clinica B\n");
												printf("[3]-Clinica C\n");
												printf("Resposta: ");
												scanf("%d", &rede.unidadeEscolha);
												
												switch(rede.unidadeEscolha)
												{
													case 1:
														strcpy(rede.unidadeEscolhida,"Clinica_A\\");
													break;
													case 2:
														strcpy(rede.unidadeEscolhida,"Clinica_B\\");
													break;
													case 3:
														strcpy(rede.unidadeEscolhida,"Clinica_C\\");
													break;
												}
												printf("\nQual mes voce gostaria de consultar?\n");
												printf("[1]-Janeiro\n");
												printf("[2]-Fevereiro\n");
												printf("[3]-Marco\n");
												printf("[4]-Abril\n");
												printf("[5]-Maio\n");
												printf("[6]-Junho\n");
												printf("[7]-Julho\n");
												printf("[8]-Agosto\n");
												printf("[9]-Setembro\n");
												printf("[10]-Outubro\n");
												printf("[11]-Novembro\n");
												printf("[12]-Dezembro\n");
												printf("Resposta: ");
												scanf("%d", &rede.mesFaturamento);
												
												switch(rede.mesFaturamento)
												{
													case 1:
														strcpy(rede.mesEscolhido,"Janeiro\\");
														strcpy(rede.mesEscolhido1,"Janeiro");
													break;
													case 2:
														strcpy(rede.mesEscolhido,"Fevereiro\\");
														strcpy(rede.mesEscolhido1,"Fevereiro");
													break;	
													case 3:
														strcpy(rede.mesEscolhido,"Marco\\");
														strcpy(rede.mesEscolhido1,"Marco");
													break;	
													case 4:
														strcpy(rede.mesEscolhido,"Abril\\");
														strcpy(rede.mesEscolhido1,"Abril");
													break;	
													case 5:
														strcpy(rede.mesEscolhido,"Maio\\");
														strcpy(rede.mesEscolhido1,"Maio");
													break;	
													case 6:
														strcpy(rede.mesEscolhido,"Junho\\");
														strcpy(rede.mesEscolhido1,"Junho");
													break;	
													case 7:
														strcpy(rede.mesEscolhido,"Julho\\");
														strcpy(rede.mesEscolhido1,"Julho");
													break;	
													case 8:
														strcpy(rede.mesEscolhido,"Agosto\\");
														strcpy(rede.mesEscolhido1,"Agosto");
													break;	
													case 9:
														strcpy(rede.mesEscolhido,"Setembro\\");
														strcpy(rede.mesEscolhido1,"Setembro");
													break;	
													case 10:
														strcpy(rede.mesEscolhido,"Outubro\\");
														strcpy(rede.mesEscolhido1,"Outubro");
													break;	
													case 11:
														strcpy(rede.mesEscolhido,"Novembro\\");
														strcpy(rede.mesEscolhido1,"Novembro");
													break;	
													case 12:
														strcpy(rede.mesEscolhido,"Dezembro\\");
														strcpy(rede.mesEscolhido1,"Dezembro");
													break;	
													default:
														
													break;	
												}
												
									
												strcpy(rede.primeiro,"");
											    strcpy(rede.primeiro,"Dinheiro\\");	
											    strcat(rede.primeiro,rede.unidadeEscolhida);
											    strcat(rede.primeiro,rede.mesEscolhido);
											
											    rede.dir = opendir(rede.primeiro);
												
											    while ( ( rede.lsdir = readdir(rede.dir) ) != NULL )
											    {
													strcpy(rede.terceiro,rede.primeiro);
													char segundo[30];
													 
												 	strcpy(segundo, rede.lsdir->d_name);
												 if((strcmp(segundo,".")==0) || (strcmp(segundo,"..")==0))
												 {	
												 	system("cls");
												 	printf("------%s------\n",rede.mesEscolhido1);
												 	
												 }
													
													strcat(rede.terceiro,segundo);
							
													rede.unidadeDeRede = fopen(rede.terceiro,"r");
													char puxarTUDO[8];
													while(fgets(puxarTUDO, 8, rede.unidadeDeRede) != NULL)
													{
														int tamanho = strlen(segundo);
													    char *token = strtok(segundo, ".txt");
													    for (int i = 0; i < tamanho; i++)
													    
													    while(token != NULL) 
														{	
													    	printf("Dia %s: R$%s\n",token,puxarTUDO);
													        token = strtok(NULL, ".txt");
													    }
													}
													
													strcpy(segundo,"");	
												}
												fclose(rede.unidadeDeRede);
											    closedir(rede.dir);
												
												strcat(rede.primeiro,"Total\\Total.txt");
												
												rede.unidadeDeRede = fopen(rede.primeiro,"r");
												
												fscanf(rede.unidadeDeRede,"%s",rede.totalMesUnidade);
												
												printf("Total do mes: R$%s\n",rede.totalMesUnidade);
												
												fclose(rede.unidadeDeRede);	
												
												printf("Gostaria de voltar para o menu de Unidade de Redes?\n");
												printf("[1]-SIM\n");
												printf("[2]-NAO\n");
												printf("Resposta: ");
												scanf("%d", &rede.loop);
												
												if(rede.loop == 2)
												{
													return 0;
												}	
											break;
											
											case 3:
												printf("----------Totalizacao Diaria e mensal do faturamento por total de rede---------\n\n");
												
												
												strcpy(rede.unidadeEscolhida,"Total\\");
													
												printf("\nQual mes voce gostaria de consultar?\n");
												printf("[1]-Janeiro\n");
												printf("[2]-Fevereiro\n");
												printf("[3]-Marco\n");
												printf("[4]-Abril\n");
												printf("[5]-Maio\n");
												printf("[6]-Junho\n");
												printf("[7]-Julho\n");
												printf("[8]-Agosto\n");
												printf("[9]-Setembro\n");
												printf("[10]-Outubro\n");
												printf("[11]-Novembro\n");
												printf("[12]-Dezembro\n");
												printf("Resposta: ");
												scanf("%d", &rede.mesFaturamento);
												
												switch(rede.mesFaturamento)
												{
													case 1:
														strcpy(rede.mesEscolhido,"Janeiro\\");
														strcpy(rede.mesEscolhido1,"Janeiro");
													break;
													case 2:
														strcpy(rede.mesEscolhido,"Fevereiro\\");
														strcpy(rede.mesEscolhido1,"Fevereiro");
													break;	
													case 3:
														strcpy(rede.mesEscolhido,"Marco\\");
														strcpy(rede.mesEscolhido1,"Marco");
													break;	
													case 4:
														strcpy(rede.mesEscolhido,"Abril\\");
														strcpy(rede.mesEscolhido1,"Abril");
													break;	
													case 5:
														strcpy(rede.mesEscolhido,"Maio\\");
														strcpy(rede.mesEscolhido1,"Maio");
													break;	
													case 6:
														strcpy(rede.mesEscolhido,"Junho\\");
														strcpy(rede.mesEscolhido1,"Junho");
													break;	
													case 7:
														strcpy(rede.mesEscolhido,"Julho\\");
														strcpy(rede.mesEscolhido1,"Julho");
													break;	
													case 8:
														strcpy(rede.mesEscolhido,"Agosto\\");
														strcpy(rede.mesEscolhido1,"Agosto");
													break;	
													case 9:
														strcpy(rede.mesEscolhido,"Setembro\\");
														strcpy(rede.mesEscolhido1,"Setembro");
													break;	
													case 10:
														strcpy(rede.mesEscolhido,"Outubro\\");
														strcpy(rede.mesEscolhido1,"Outubro");
													break;	
													case 11:
														strcpy(rede.mesEscolhido,"Novembro\\");
														strcpy(rede.mesEscolhido1,"Novembro");
													break;	
													case 12:
														strcpy(rede.mesEscolhido,"Dezembro\\");
														strcpy(rede.mesEscolhido1,"Dezembro");
													break;	
													default:
														
													break;	
												}
												
												strcpy(rede.primeiro,"");
											    strcpy(rede.primeiro,"Dinheiro\\");	
											    strcat(rede.primeiro,rede.unidadeEscolhida);
											    strcat(rede.primeiro,rede.mesEscolhido);
											
											    rede.dir = opendir(rede.primeiro);
												
											    while ( ( rede.lsdir = readdir(rede.dir) ) != NULL )
											    {
													strcpy(rede.terceiro,rede.primeiro);
													char segundo[30];
													 
												 	strcpy(segundo, rede.lsdir->d_name);
												 if((strcmp(segundo,".")==0) || (strcmp(segundo,"..")==0))
												 {	
												 	system("cls");
												 	printf("------%s------\n",rede.mesEscolhido1);
												 }
												 	
													strcat(rede.terceiro,segundo);
												
													rede.totalDeRede = fopen(rede.terceiro,"r");
													char puxarTUDO[8];
													while(fgets(puxarTUDO, 8, rede.totalDeRede) != NULL)
													{
														int tamanho = strlen(segundo);
													    char *token = strtok(segundo, ".txt");
													    for (int i = 0; i < tamanho; i++)
													    
													    while(token != NULL) 
														{	
													    	printf("Dia %s: R$%s\n",token,puxarTUDO);
													        token = strtok(NULL, ".txt");
													    }
													}
													
													strcpy(segundo,"");	
												}
												fclose(rede.totalDeRede);
											    closedir(rede.dir);
												
												strcat(rede.primeiro,"Total\\Total.txt");
												
												rede.totalDeRede = fopen(rede.primeiro,"r");
												
												fscanf(rede.totalDeRede,"%s",rede.totalMesUnidade);
												
												printf("Total do mes: R$%s\n",rede.totalMesUnidade);
												
												fclose(rede.totalDeRede);
												
												printf("Gostaria de voltar para o menu de Unidade de Redes?\n");
												printf("[1]-SIM\n");
												printf("[2]-NAO\n");
												printf("Resposta: ");
												scanf("%d", &rede.loop);
												
												if(rede.loop == 2)
												{
													return 0;
												}		
												
											break;
											
											default:
												rede.loop = 1;
											break;
										case 4:
											rede.loop = 0;
											ge_rel.voltar = 1;
											break;
										}
								 	}while(rede.loop == 1);
								
									
								break;	
							
									
						
							case 1:
									system("cls");
									printf(" =============================================================================\n");
									printf("                        Relatorios - Paciente por Clinica                          \n");
									printf(" =============================================================================\n\n");
									printf("   __________________________________________________________________________\n");
									printf("  |Digite o filtro que desejar:                                              |\n\n");                                                  
									printf("    [0] - Total de Pacientes Cadastrados                                      \n");
									printf("    [1] - Total de Pacientes da Clinica A                                     \n");                                            
									printf("    [2] - Total de Pacientes da Clinica B                                     \n");
									printf("    [3] - Total de Pacientes da Clinica C                                     \n");
									fflush(stdin); // limpa saidas
									printf("   \n      Resposta:");
									scanf("%d",&Re_pac.escolha); 
									printf("  |__________________________________________________________________________|\n");
								   
								   
								   
								   switch (Re_pac.escolha){
								   	case 0:
								   			Re_pac.total = 0;
								   			system("cls");
								   			printf("             ======================================================           \n");
											printf("                          Total de Pacientes Cadastrados                      \n");
								  			printf("             ======================================================           \n\n\n\n");
										   	printf("     Prontuario          Nome do Paciente  \n");
											printf("    ____________         ________________");
										    Re_pac.pasta = opendir("Prontuarios\\Geral\\");
										    while ( ( Re_pac.lsdir = readdir(Re_pac.pasta) ) != NULL )
										    {
										    
								
										    	strcpy(Re_pac.copia, Re_pac.lsdir->d_name);
										
												 if((strcmp(Re_pac.copia,".")==0) || (strcmp(Re_pac.copia,"..")==0))
												    {
													printf("\n");
											    	}
												else
												{
														
										    	char contat[] = "Prontuarios\\Geral\\";
										    	strcat(contat,Re_pac.copia);
										    	
										    	Re_pac.abrirpront = fopen(contat,"r");
										    	
										    	fgets(Re_pac.nome, 200, Re_pac.abrirpront);
												fgets(Re_pac.pront, 100, Re_pac.abrirpront);
												fgets(Re_pac.cpf, 30, Re_pac.abrirpront);
												Re_pac.cpf[strcspn(Re_pac.cpf, "\n")] = '\0'; // a função strspn que procura uma string dentro de outra. No caso você quer procurar pelo \n para colocar o \0 que determina o fim da string
												printf("     %s     |   %s",Re_pac.cpf,Re_pac.nome);
										        fclose(Re_pac.abrirpront);
												}
												Re_pac.total = Re_pac.total + 1;
										    }
										    closedir(Re_pac.pasta);
										    printf("\n\n  Total de pacientes cadastrados: %d",Re_pac.total - 2);
										    printf("\n========================================================================");
										   	printf("\n\nDeseja voltar ao Gerador de Relatorios?\n");
									    	printf("(S)Sim \n(N)Nao\n\n");
									    	printf("Resposta: ");
									    	fflush(stdin);
									    	scanf("%c",&Re_pac.voltar_menu);
									    	
									    	
									    	if ((Re_pac.voltar_menu == 's') || (Re_pac.voltar_menu == 'S')){
									    		ge_rel.voltar = 1;
									    		
											}
								   		
								   		break;
								   		case 1:
								   			Re_pac.total = 0;
								   			system("cls");
								   			printf("             ======================================================           \n");
											printf("                          Total de Pacientes da Clinica A                     \n");
								  			printf("             ======================================================           \n\n\n\n");
										   	printf("     Prontuario          Nome do Paciente  \n");
											printf("    ____________         ________________");
										    Re_pac.pasta = opendir("Prontuarios\\ClinicaA\\");
										    while ( ( Re_pac.lsdir = readdir(Re_pac.pasta) ) != NULL )
										    {
										    
										    	char copia[20];
										    	strcpy(copia, Re_pac.lsdir->d_name);
										
												 if((strcmp(copia,".")==0) || (strcmp(copia,"..")==0))
												    {
													printf("\n");
											    	}
												else
												{
														
										    	char contat[] = "Prontuarios\\ClinicaA\\";
										    	strcat(contat,copia);
										    	
										    	Re_pac.abrirpront = fopen(contat,"r");
										    	
										    	fgets(Re_pac.nome, 200, Re_pac.abrirpront);
												fgets(Re_pac.pront, 100, Re_pac.abrirpront);
												fgets(Re_pac.cpf, 30, Re_pac.abrirpront);
												Re_pac.cpf[strcspn(Re_pac.cpf, "\n")] = '\0'; // a função strspn que procura uma string dentro de outra. No caso você quer procurar pelo \n para colocar o \0 que determina o fim da string
												printf("     %s     |   %s",Re_pac.cpf,Re_pac.nome);
										        fclose(Re_pac.abrirpront);
												}
											
										  	    Re_pac.total = Re_pac.total + 1;
										    }
										    printf("\n\n  Total de pacientes cadastrados na clinica A: %d",Re_pac.total - 2);
										    printf("\n========================================================================");
										    closedir(Re_pac.pasta);
										    printf("\n\nDeseja voltar ao Gerador de Relatorios?\n");
									    	printf("(S)Sim \n(N)Nao\n\n");
									    	printf("Resposta: ");
									    	fflush(stdin);
									    	scanf("%c",&Re_pac.voltar_menu);
									    	
									    	
									    	if ((Re_pac.voltar_menu == 's') || (Re_pac.voltar_menu == 'S')){
									    		ge_rel.voltar = 1;
									    		
											}
								   		
								   		break;
								   		case 2:
								   			Re_pac.total = 0;
								   			system("cls");
								   			printf("             ======================================================           \n");
											printf("                          Total de Pacientes da Clinica B                     \n");
								  			printf("             ======================================================           \n\n\n\n");
										   	printf("     Prontuario          Nome do Paciente  \n");
											printf("    ____________         ________________");
										    Re_pac.pasta = opendir("Prontuarios\\ClinicaB\\");
										    while ( ( Re_pac.lsdir = readdir(Re_pac.pasta) ) != NULL )
										    {
										    
										    	char copia[20];
										    	strcpy(copia, Re_pac.lsdir->d_name);
										
												 if((strcmp(copia,".")==0) || (strcmp(copia,"..")==0))
												    {
													printf("\n");
											    	}
												else
												{
														
										    	char contat[] = "Prontuarios\\ClinicaB\\";
										    	strcat(contat,copia);
										    	
										    	Re_pac.abrirpront = fopen(contat,"r");
										    	
										    	fgets(Re_pac.nome, 200, Re_pac.abrirpront);
												fgets(Re_pac.pront, 100, Re_pac.abrirpront);
												fgets(Re_pac.cpf, 30, Re_pac.abrirpront);
												Re_pac.cpf[strcspn(Re_pac.cpf, "\n")] = '\0'; // a função strspn que procura uma string dentro de outra. No caso você quer procurar pelo \n para colocar o \0 que determina o fim da string
												printf("     %s     |   %s",Re_pac.cpf,Re_pac.nome);
										        fclose(Re_pac.abrirpront);
												}
												Re_pac.total = Re_pac.total + 1;
										    }
										    printf("\n\n  Total de pacientes cadastrados na clinica B: %d",Re_pac.total - 2);
										    printf("\n========================================================================");
										    closedir(Re_pac.pasta);
								   			printf("\n\nDeseja voltar ao Gerador de Relatorios?\n");
									    	printf("(S)Sim \n(N)Nao\n\n");
									    	printf("Resposta: ");
									    	fflush(stdin);
									    	scanf("%c",&Re_pac.voltar_menu);
									    	
									    	
									    	if ((Re_pac.voltar_menu == 's') || (Re_pac.voltar_menu == 'S')){
									    		ge_rel.voltar = 1;
									    		
											}
								   		break;
								   		case 3:
								   			Re_pac.total = 0;
								   			system("cls");
								   			printf("             ======================================================           \n");
											printf("                          Total de Pacientes da Clinica C                     \n");
								  			printf("             ======================================================           \n\n\n\n");
										   	printf("     Prontuario          Nome do Paciente  \n");
											printf("    ____________         ________________");
										    Re_pac.pasta = opendir("Prontuarios\\ClinicaC\\");
										    while ( ( Re_pac.lsdir = readdir(Re_pac.pasta) ) != NULL )
										    {
										    
										    	char copia[20];
										    	strcpy(copia, Re_pac.lsdir->d_name);
										
												 if((strcmp(copia,".")==0) || (strcmp(copia,"..")==0))
												    {
													printf("\n");
											    	}
												else
												{
														
										    	char contat[] = "Prontuarios\\ClinicaC\\";
										    	strcat(contat,copia);
										    	
										    	Re_pac.abrirpront = fopen(contat,"r");
										    	
										    	fgets(Re_pac.nome, 200, Re_pac.abrirpront);
												fgets(Re_pac.pront, 100, Re_pac.abrirpront);
												fgets(Re_pac.cpf, 30, Re_pac.abrirpront);
												Re_pac.cpf[strcspn(Re_pac.cpf, "\n")] = '\0'; // a função strspn que procura uma string dentro de outra. No caso você quer procurar pelo \n para colocar o \0 que determina o fim da string
												printf("     %s     |   %s",Re_pac.cpf,Re_pac.nome);
										        fclose(Re_pac.abrirpront);
												}
												Re_pac.total = Re_pac.total + 1;
										    }
										    printf("\n\n  Total de pacientes cadastrados na clinca C: %d",Re_pac.total - 2);
										    printf("\n========================================================================");
										    closedir(Re_pac.pasta);
								   			printf("\n\nDeseja voltar ao Gerador de Relatorios?\n");
									    	printf("(S)Sim \n(N)Nao\n\n");
									    	printf("Resposta: ");
									    	fflush(stdin);
									    	scanf("%c",&Re_pac.voltar_menu);
									    	
									    	
									    	if ((Re_pac.voltar_menu == 's') || (Re_pac.voltar_menu == 'S')){
									    		ge_rel.voltar = 1;
									    		
											}
								   		break;
					   } 
								
								break;
								
							case 2:
										relMed.total = 0;
							   			system("cls");
							   			printf("             ======================================================           \n");
										printf("                          Total de Medicos Cadastrados                        \n");
							  			printf("             ======================================================           \n\n\n\n");
									   	printf("                     |     Nome do Dr(a). \n");
									   	printf("          CPF        |  (CRM - Especialidade)\n");
									    printf("=============================================================================\n");
							
									    relMed.pasta = opendir("Cadastros_Medicos\\");
									    while ( ( relMed.lsdir = readdir(relMed.pasta) ) != NULL )
									    {
									    
									    	strcpy(relMed.copia, relMed.lsdir->d_name);
									
											 if((strcmp(relMed.copia,".")==0) || (strcmp(relMed.copia,"..")==0))
											    {
												printf(" ");
										    	}
											else
											{
													
									    	char contat[] = "Cadastros_Medicos\\";
									    	strcat(contat,relMed.copia);
									    	
									    	relMed.abrirpront = fopen(contat,"r");
									    	
									    	fgets(relMed.nome, 200, relMed.abrirpront);
											fscanf(relMed.abrirpront, "%s", relMed.cpf);
											fscanf(relMed.abrirpront, "%s",	relMed.crm);
											fscanf(relMed.abrirpront, "%s", relMed.email);
											fscanf(relMed.abrirpront, "%s", relMed.nasci);
											fscanf(relMed.abrirpront, "%s", relMed.especialidade);
											
											relMed.cpf[strcspn(relMed.cpf, "\n")] = '\0'; // a função strspn que procura uma string dentro de outra. No caso você quer procurar pelo \n para colocar o \0 que determina o fim da string
											relMed.nome[strcspn(relMed.nome, "\n")] = '\0'; // aqui eu faço a mesma coisa com a variavel nome e crm
											relMed.especialidade[strcspn(relMed.especialidade, "\n")] = '\0';
											relMed.crm[strcspn(relMed.crm, "\n")] = '\0';
											printf("\n                     |   %s ",relMed.nome); 
											printf("\n        %s  |  (CRM: %s - %s)",relMed.cpf,relMed.crm,relMed.especialidade);
											printf("\n    _________________|_______________________________________________________");
									        fclose(relMed.abrirpront);
											}	
											relMed.total = relMed.total + 1;
											
									    }
									    	printf("\n\n  Total de medicos cadastrados: %d",relMed.total - 2);
									  	    printf("\n=============================================================================");
									    	printf("\n\nDeseja voltar ao Gerador de Relatorios?\n");
									    	printf("(S)Sim \n(N)Nao\n\n");
									    	printf("Resposta: ");
									    	fflush(stdin);
									    	scanf("%c",&relMed.voltar_menu);
									    	
									    	
									    	if ((relMed.voltar_menu == 's') || (relMed.voltar_menu == 'S')){
									    		ge_rel.voltar = 1;
									    		
											}
									   		else{
									   			
									   			system("pause");
									   			return 0;
									   			
											   }
								break;
								
								case 3:
								relUs.total = 0;
					   			system("cls");
					   			printf("             ======================================================           \n");
								printf("                          Total de Usuarios Cadastrados                        \n");
					  			printf("             ======================================================           \n\n\n\n");
							   	printf("         CPF         |   Nome do(a) Colaborador(a) \n");
							    printf("  ___________________|____________________________________________________________\n");
					
							    relUs.pasta = opendir("Cadastros\\");
							    while ( ( relUs.lsdir = readdir(relUs.pasta) ) != NULL )
							    {
							    
							    	
							    	strcpy(relUs.copia, relUs.lsdir->d_name);
							
									 if((strcmp(relUs.copia,".")==0) || (strcmp(relUs.copia,"..")==0))
									    {
										printf(" ");
								    	}
									else
									{
											
							    	char contat[] = "Cadastros\\";
							    	strcat(contat,relUs.copia);
							    	
							    	relUs.abrirpront = fopen(contat,"r");
							    	
							    	fgets(relUs.nome, 200, relUs.abrirpront);
									fgets(relUs.cpf, 30, relUs.abrirpront);
									relUs.cpf[strcspn(relUs.cpf, "\n")] = '\0'; // a função strspn que procura uma string dentro de outra. No caso você quer procurar pelo \n para colocar o \0 que determina o fim da string
									relUs.nome[strcspn(relUs.nome, "\n")] = '\0'; // aqui eu faço a mesma coisa com a variavel nome e especialidade
									printf("\n     %s     |   %s  ",relUs.cpf,relUs.nome);
							        fclose(relUs.abrirpront);
									}	
									relUs.total = relUs.total + 1;
									
							    }
							    	printf("\n\n  Total de usuarios cadastrados: %d",relUs.total - 2);
							  	    printf("\n=============================================================================");
							    	printf("\n\nDeseja voltar ao Gerador de relatorios?\n");
							    	printf("(S)Sim \n(N)Nao\n\n");
							    	printf("Resposta: ");
							    	fflush(stdin);
							    	scanf("%c",&relUs.voltar_menu);
							    	
							    	
							    	if ((relUs.voltar_menu == 's') || (relUs.voltar_menu == 'S')){
										ge_rel.voltar = 1;
							    		
									}
					
									
									break;
								case 4:
									
								relAgend.total = 0;
					   			system("cls");
					   			printf("             ======================================================           \n");
								printf("                                Total de Agendamentos                       \n");
					  			printf("             ======================================================           \n\n\n\n");

					
							    relAgend.pasta = opendir("Agendamentos\\");
							    while ( ( relAgend.lsdir = readdir(relAgend.pasta) ) != NULL )
							    {
							    
							    	
							    	strcpy(relAgend.copia, relAgend.lsdir->d_name);
							
									 if((strcmp(relAgend.copia,".")==0) || (strcmp(relAgend.copia,"..")==0))
									    {
										printf(" ");
								    	}
									else
									{
											
							    	char contat[] = "Agendamentos\\";
							    	strcat(contat,relAgend.copia);
							    	
							    	relAgend.abrirpront = fopen(contat,"r");
							    	
							
									fgets(relAgend.nome, 200, relAgend.abrirpront);
									fgets(relAgend.cpf, 30, relAgend.abrirpront);
									fgets(relAgend.cartao,50,relAgend.abrirpront);
									fgets(relAgend.responsavel,50,relAgend.abrirpront);
									fgets(relAgend.medico,50,relAgend.abrirpront);
									fgets(relAgend.cpf2,50,relAgend.abrirpront);
									fgets(relAgend.crm,50,relAgend.abrirpront);
									fgets(relAgend.especialidade,50,relAgend.abrirpront);
									fgets(relAgend.clin,50,relAgend.abrirpront);
									fgets(relAgend.preco,50,relAgend.abrirpront);
									fgets(relAgend.data,50,relAgend.abrirpront);
									fgets(relAgend.hora,50,relAgend.abrirpront);
							
			
									
									relAgend.cpf[strcspn(relAgend.cpf, "\n")] = '\0'; // a função strspn que procura uma string dentro de outra. No caso você quer procurar pelo \n para colocar o \0 que determina o fim da string
									relAgend.nome[strcspn(relAgend.nome, "\n")] = '\0'; // aqui eu faço a mesma coisa com a variavel nome e especialidade
									relAgend.cartao[strcspn(relAgend.cartao, "\n")] = '\0';
									relAgend.medico[strcspn(relAgend.medico, "\n")] = '\0';
						
									relAgend.cpf2[strcspn(relAgend.cpf, "C")] = ' ';
									relAgend.cpf2[strcspn(relAgend.cpf, "P")] = ' ';
									relAgend.cpf2[strcspn(relAgend.cpf, "F")] = ' ';
									relAgend.cpf2[strcspn(relAgend.cpf2, "\n")] = '\0';
									
									relAgend.crm[strcspn(relAgend.crm, "\n")] = '\0';
									relAgend.especialidade[strcspn(relAgend.especialidade, "\n")] = '\0';
									relAgend.preco[strcspn(relAgend.preco, "\n")] = '\0';
									relAgend.data[strcspn(relAgend.data, "\n")] = '\0';
									relAgend.hora[strcspn(relAgend.hora, "\n")] = '\0';
									
									printf("\n ==========| Prontuario\\%s |=========",relAgend.cpf);
									printf("\n%s\n%s\n%s\n%s\n\n\n\n\n",relAgend.data,relAgend.hora,relAgend.nome,relAgend.medico);
							        fclose(relAgend.abrirpront);
									}	
									relAgend.total = relAgend.total + 1;
									
							    }
							    	printf("\n\n  Total Agendamentos: %d",relAgend.total - 2);
							  	    printf("\n=============================================================================");
							    	printf("\n\nDeseja voltar ao Gerador de relatorios?\n");
							    	printf("(S)Sim \n(N)Nao\n\n");
							    	printf("Resposta: ");
							    	fflush(stdin);
							    	scanf("%c",&relAgend.voltar_menu);
							    	
							    	
							    	if ((relAgend.voltar_menu == 's') || (relAgend.voltar_menu == 'S')){
										ge_rel.voltar = 1;
							    		

									}
									break;
								case 5:
									system("cls");
									ge_rel.voltar = 0;
									menu.menu_loop = 1;
									break;	
								default:
									system("cls");
									printf(" \n         Digito incorreto :( \n\n\n         Digite qualquer tecla para voltar para o Gerador de Relatorios\n\n");
									system("pause");
									ge_rel.voltar = 1;
									break;
						}
						
					
					}


			        break;
			        
			case 5: 
					printf("\n\n\n\n\n\n\n\n\n\n\n\n");

					carregando("Carregando (Cancelamento de consultas/Confirmar consulta)",15);
					layout_modulo("Cancelamento de consultas/Confirmar consulta");
					
					do
					{
						do
						{
							system("cls");
							printf("Digite o CPF do paciente: ");
							scanf("%s", CCC.buscarCPF);
									
							strcpy(CCC.Agendamentos,"Agendamentos\\");
							strcat(CCC.Agendamentos,CCC.buscarCPF);
							strcat(CCC.Agendamentos,".txt");
									
								
							CCC.agendamentosCC = fopen(CCC.Agendamentos, "r");
							
							printf("----------Paciente----------\n");		
							fgets(CCC.nomePaciente, 100, CCC.agendamentosCC);
							printf("%s", CCC.nomePaciente);
							fgets(CCC.cpfPaciente, 25, CCC.agendamentosCC);
							printf("%s", CCC.cpfPaciente);
							fgets(CCC.cartaoPaciente, 100, CCC.agendamentosCC);
							printf("%s", CCC.cartaoPaciente);
							fgets(CCC.responsavelPaciente, 100, CCC.agendamentosCC);
							printf("%s", CCC.responsavelPaciente);
							printf("----------Medico----------\n");	
							fgets(CCC.nomeMedico, 100, CCC.agendamentosCC);
							printf("%s", CCC.nomeMedico);
							fscanf(CCC.agendamentosCC,"%s %s\n", CCC.cpfMedico, CCC.cpfBuscar);
							printf("%s %s\n", CCC.cpfMedico, CCC.cpfBuscar);
							fscanf(CCC.agendamentosCC,"%s %s\n", CCC.CRMpuxar, CCC.CRM);
							printf("%s %s\n", CCC.CRMpuxar, CCC.CRM);
							fscanf(CCC.agendamentosCC,"%s %s\n", CCC.especialidade, CCC.especialidadeBuscar);
							printf("%s %s\n", CCC.especialidade, CCC.especialidadeBuscar);
							fgets(CCC.clinica, 50, CCC.agendamentosCC);
							printf("%s", CCC.clinica);
							fgets(CCC.preco, 35, CCC.agendamentosCC);
							printf("%s", CCC.preco);
							fgets(CCC.dia, 35, CCC.agendamentosCC);
							printf("%s", CCC.dia);
							fgets(CCC.horas, 35, CCC.agendamentosCC);
							printf("%s\n\n", CCC.horas);
						
							
							fclose(CCC.agendamentosCC);
							
							printf("Paciente correto? \n\n");
							printf("[1]-SIM\n");
							printf("[2]-NAO\n");
							printf("Resposta: ");
							scanf("%d", &CCC.escolha);
						}while(CCC.escolha == 2);
					
					
						system("cls");
								
						
						strcpy(CCC.buscarHorario,"Especialidades\\");
						strcat(CCC.buscarHorario,CCC.especialidadeBuscar);
						strcat(CCC.buscarHorario,"\\");
						strcat(CCC.buscarHorario,CCC.CRM);
						strcat(CCC.buscarHorario,".txt");
								
						CCC.confirmarAgendamento = fopen(CCC.buscarHorario,"r");
								
						
						while(fgets(CCC.puxarDados, 10, CCC.confirmarAgendamento) != NULL)
						{
								
							printf("%s", CCC.puxarDados);
						}
								
						fclose(CCC.confirmarAgendamento);
								
						CCC.confirmarAgendamento = fopen(CCC.buscarHorario,"r");
								
						fgets(agendH.puxarVazio, 50, CCC.confirmarAgendamento);
						fgets(agendH.puxarNome, 50, CCC.confirmarAgendamento);
						fgets(agendH.puxarEspecialidade, 50, CCC.confirmarAgendamento);
						fgets(agendH.puxarCPF, 50, CCC.confirmarAgendamento);
						fgets(agendH.puxarCRM,30, CCC.confirmarAgendamento);
						fgets(agendH.puxarClinica, 50, CCC.confirmarAgendamento);
						fgets(agendH.puxarPreco, 50, CCC.confirmarAgendamento);
						fgets(agendH.puxarDia, 50, CCC.confirmarAgendamento);
						fgets(agendH.puxarHorario, 50, CCC.confirmarAgendamento);
						fgets(agendH.semana1, 20, CCC.confirmarAgendamento);
						fscanf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s",agendH.segunda, SS.segunda.h1, SS.segunda.h2, SS.segunda.h3, SS.segunda.lanche, SS.segunda.h4, SS.segunda.h5, SS.segunda.h6, SS.segunda.h7);
						fscanf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s",agendH.terca, SS.terca.h1, SS.terca.h2, SS.terca.h3, SS.terca.lanche, SS.terca.h4, SS.terca.h5, SS.terca.h6, SS.terca.h7);
						fscanf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s",agendH.quarta, SS.quarta.h1, SS.quarta.h2, SS.quarta.h3, SS.quarta.lanche, SS.quarta.h4, SS.quarta.h5, SS.quarta.h6, SS.quarta.h7);
						fscanf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s",agendH.quinta, SS.quinta.h1, SS.quinta.h2, SS.quinta.h3, SS.quinta.lanche, SS.quinta.h4, SS.quinta.h5, SS.quinta.h6, SS.quinta.h7);
						fscanf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s",agendH.sexta, SS.sexta.h1, SS.sexta.h2, SS.sexta.h3, SS.sexta.lanche, SS.sexta.h4, SS.sexta.h5, SS.sexta.h6, SS.sexta.h7);
						char fscanf1[10];
						char fscanf2[10];
						fscanf(CCC.confirmarAgendamento,"%s",fscanf1);
						fscanf(CCC.confirmarAgendamento,"%s",fscanf2);
						fscanf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s",ssegunda, SSS.segunda1.h11, SSS.segunda1.h22, SSS.segunda1.h33, SSS.segunda1.lanche2, SSS.segunda1.h44, SSS.segunda1.h55, SSS.segunda1.h66, SSS.segunda1.h77);
						fscanf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s",tterca, SSS.terca1.h11, SSS.terca1.h22, SSS.terca1.h33, SSS.terca1.lanche2, SSS.terca1.h44, SSS.terca1.h55, SSS.terca1.h66, SSS.terca1.h77);
						fscanf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s",qquarta, SSS.quarta1.h11, SSS.quarta1.h22, SSS.quarta1.h33, SSS.quarta1.lanche2, SSS.quarta1.h44, SSS.quarta1.h55, SSS.quarta1.h66, SSS.quarta1.h77);
						fscanf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s",qquinta, SSS.quinta1.h11, SSS.quinta1.h22, SSS.quinta1.h33, SSS.quinta1.lanche2, SSS.quinta1.h44, SSS.quinta1.h55, SSS.quinta1.h66, SSS.quinta1.h77);
						fscanf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s",ssexta, SSS.sexta1.h11, SSS.sexta1.h22, SSS.sexta1.h33, SSS.sexta1.lanche2, SSS.sexta1.h44, SSS.sexta1.h55, SSS.sexta1.h66, SSS.sexta1.h77);

						printf("\n\n--Turno do medico--\n");
						printf("[1]-Manha\n");
						printf("[2]-Tarde\n");
						printf("[3]-Noite\n");
						printf("Digite o turno do medico: ");
						scanf("%d",&CCC.escolha_horario_escolha);
						
						printf("\n--Semana que deseja marcar como concluido/cancelado--\n");
						printf("[1]-Semana 1\n");
						printf("[2]-Semana 2\n");
						printf("Digite o numero da semana: ");
						scanf("%d",&semanaHoje);
									
						printf("\n--Dia que deseja marcar como concluido/cancelado--\n");
						printf("[1]-Segunda\n");
						printf("[2]-Terca\n");
						printf("[3]-Quarta\n");
						printf("[4]-Quinta\n");
						printf("[5]-Sexta\n");
						printf("Digite o numero do dia: ");
						scanf("%d",&diaSemana);
						
						if((semanaHoje == 1) && (diaSemana == 1))
						{
							strcpy(agendH.h1,SS.segunda.h1);
							strcpy(agendH.h2,SS.segunda.h2);
							strcpy(agendH.h3,SS.segunda.h3);
					 		strcpy(agendH.h4,SS.segunda.h4);
							strcpy(agendH.h5,SS.segunda.h5);
							strcpy(agendH.h6,SS.segunda.h6);
							strcpy(agendH.h7,SS.segunda.h7);
							strcpy(diaDaSemana,"Segunda");
							diaHoje = segunda1;
									
							}
							if((semanaHoje == 1) && (diaSemana == 2))
							{
								strcpy(agendH.h1,SS.terca.h1);
								strcpy(agendH.h2,SS.terca.h2);
								strcpy(agendH.h3,SS.terca.h3);
								strcpy(agendH.h4,SS.terca.h4);
								strcpy(agendH.h5,SS.terca.h5);
								strcpy(agendH.h6,SS.terca.h6);
								strcpy(agendH.h7,SS.terca.h7);
								strcpy(diaDaSemana,"Terca");
								diaHoje = terca1;
									
							}
							if((semanaHoje == 1) && (diaSemana == 3))
							{
								strcpy(agendH.h1,SS.quarta.h1);
								strcpy(agendH.h2,SS.quarta.h2);
								strcpy(agendH.h3,SS.quarta.h3);
								strcpy(agendH.h4,SS.quarta.h4);
								strcpy(agendH.h5,SS.quarta.h5);
								strcpy(agendH.h6,SS.quarta.h6);
								strcpy(agendH.h7,SS.quarta.h7);
								strcpy(diaDaSemana,"Quarta");
								diaHoje = quarta1;
									
							}
							if((semanaHoje == 1) && (diaSemana == 4))
							{
								strcpy(agendH.h1,SS.quinta.h1);
								strcpy(agendH.h2,SS.quinta.h2);
								strcpy(agendH.h3,SS.quinta.h3);
								strcpy(agendH.h4,SS.quinta.h4);
								strcpy(agendH.h5,SS.quinta.h5);
								strcpy(agendH.h6,SS.quinta.h6);
								strcpy(agendH.h7,SS.quinta.h7);
								strcpy(diaDaSemana,"Quinta");
								diaHoje = quinta1;
							}
							if((semanaHoje == 1) && (diaSemana == 5))
							{
								strcpy(agendH.h1,SS.sexta.h1);
								strcpy(agendH.h2,SS.sexta.h2);
								strcpy(agendH.h3,SS.sexta.h3);
								strcpy(agendH.h4,SS.sexta.h4);
								strcpy(agendH.h5,SS.sexta.h5);
								strcpy(agendH.h6,SS.sexta.h6);
								strcpy(agendH.h7,SS.sexta.h7);
								strcpy(diaDaSemana,"Sexta");
								diaHoje = sexta1;
							}
							// semana 2
							if((semanaHoje == 2) && (diaSemana == 1))
							{
								strcpy(agendH.h1,SSS.segunda1.h11);
								strcpy(agendH.h2,SSS.segunda1.h22);
								strcpy(agendH.h3,SSS.segunda1.h33);
								strcpy(agendH.h4,SSS.segunda1.h44);
								strcpy(agendH.h5,SSS.segunda1.h55);
								strcpy(agendH.h6,SSS.segunda1.h66);
								strcpy(agendH.h7,SSS.segunda1.h77);
								strcpy(diaDaSemana,"Segunda");
								diaHoje = segunda2;
							}
							if((semanaHoje == 2) && (diaSemana == 2))
							{
								strcpy(agendH.h1,SSS.terca1.h11);
								strcpy(agendH.h2,SSS.terca1.h22);
								strcpy(agendH.h3,SSS.terca1.h33);
								strcpy(agendH.h4,SSS.terca1.h44);
								strcpy(agendH.h5,SSS.terca1.h55);
								strcpy(agendH.h6,SSS.terca1.h66);
								strcpy(agendH.h7,SSS.terca1.h77);
								strcpy(diaDaSemana,"Terca");
								diaHoje = terca2;
							}
							if((semanaHoje == 2) && (diaSemana == 3))
							{
								strcpy(agendH.h1,SSS.quarta1.h11);
								strcpy(agendH.h2,SSS.quarta1.h22);
								strcpy(agendH.h3,SSS.quarta1.h33);
								strcpy(agendH.h4,SSS.quarta1.h44);
								strcpy(agendH.h5,SSS.quarta1.h55);
								strcpy(agendH.h6,SSS.quarta1.h66);
								strcpy(agendH.h7,SSS.quarta1.h77);
								strcpy(diaDaSemana,"Quarta");
								diaHoje = quarta2;
							}
							if((semanaHoje == 2) && (diaSemana == 4))
							{
								strcpy(agendH.h1,SSS.quinta1.h11);
								strcpy(agendH.h2,SSS.quinta1.h22);
								strcpy(agendH.h3,SSS.quinta1.h33);
								strcpy(agendH.h4,SSS.quinta1.h44);
								strcpy(agendH.h5,SSS.quinta1.h55);
								strcpy(agendH.h6,SSS.quinta1.h66);
								strcpy(agendH.h7,SSS.quinta1.h77);
								strcpy(diaDaSemana,"Quinta");
								diaHoje = quinta2;
							}
							if((semanaHoje == 2) && (diaSemana == 5))
							{
								strcpy(agendH.h1,SSS.sexta1.h11);
								strcpy(agendH.h2,SSS.sexta1.h22);
								strcpy(agendH.h3,SSS.sexta1.h33);
								strcpy(agendH.h4,SSS.sexta1.h44);
								strcpy(agendH.h5,SSS.sexta1.h55);
								strcpy(agendH.h6,SSS.sexta1.h66);
								strcpy(agendH.h7,SSS.sexta1.h77);
								strcpy(diaDaSemana,"Sexta");
								diaHoje = sexta2;
							}
						switch(CCC.escolha_horario_escolha)
						{
							case 1:
								do
								{	
									
									printf("\nDigite o numero do horario que deseja marcar como concluido\n");
									printf("[1]-%s (6:00am)\n",agendH.h1);
									printf("[2]-%s (7:00am)\n",agendH.h2);
									printf("[3]-%s (8:00am)\n",agendH.h3);
									printf("[4]-%s (10:00am)\n",agendH.h4);
									printf("[5]-%s (11:00am)\n",agendH.h5);
									printf("[6]-%s (12:00)\n",agendH.h6);
									printf("[7]-%s (1:00pm)\n",agendH.h7);
									printf("Resposta: ");
									scanf("%d", &CCC.concluido);
									
									strcpy(CCC.h1,agendH.h1);
									strcpy(CCC.h2,agendH.h2);
									strcpy(CCC.h3,agendH.h3);
									strcpy(CCC.h4,agendH.h4);
									strcpy(CCC.h5,agendH.h5);
									strcpy(CCC.h6,agendH.h6);
									strcpy(CCC.h7,agendH.h7);
							
									switch(CCC.concluido)
									{
										case 1:
											strcpy(CCC.h1,"6:00am");
										break;
												
										case 2:
											strcpy(CCC.h2,"7:00am");
										break;
													
										case 3:
											strcpy(CCC.h3,"8:00am");
										break;
													
										case 4:
											strcpy(CCC.h4,"10:00am");
										break;
											
										case 5:
											strcpy(CCC.h5,"11:00am");
										break;
											
										case 6:
											strcpy(CCC.h6,"12:00");					
										break;
													
										case 7:
											strcpy(CCC.h7,"1:00pm");
										break;
										
										default:
											CCC.concluido = 10;
										break;
									}
								}while(CCC.concluido == 10);
								
							break;	
							case 2:
								do
								{
									printf("\nDigite o numero do horario que deseja marcar como concluido\n");
									printf("[1]-%s (2:00pm)\n",agendH.h1);
									printf("[2]-%s (3:00pm)\n",agendH.h2);
									printf("[3]-%s (4:00pm)\n",agendH.h3);
									printf("[4]-%s (6:00pm)\n",agendH.h4);
									printf("[5]-%s (7:00pm)\n",agendH.h5);
									printf("[6]-%s (8:00pm)\n",agendH.h6);
									printf("[7]-%s (9:00pm)\n",agendH.h7);
									printf("Resposta: ");
									scanf("%d", &CCC.concluido);
									
									strcpy(CCC.h1,agendH.h1);
									strcpy(CCC.h2,agendH.h2);
									strcpy(CCC.h3,agendH.h3);
									strcpy(CCC.h4,agendH.h4);
									strcpy(CCC.h5,agendH.h5);
									strcpy(CCC.h6,agendH.h6);
									strcpy(CCC.h7,agendH.h7);		
											
									switch(CCC.concluido)
									{
										case 1:
											strcpy(CCC.h1,"2:00pm");
										break;
													
										case 2:
											strcpy(CCC.h2,"3:00pm");
										break;
													
										case 3:
											strcpy(CCC.h3,"4:00pm");
										break;
													
										case 4:
											strcpy(CCC.h4,"6:00pm");
										break;
													
										case 5:
											strcpy(CCC.h5,"7:00pm");
										break;
													
										case 6:
											strcpy(CCC.h6,"8:00pm");
										break;
													
										case 7:
											strcpy(CCC.h7,"9:00pm");
										break;
												
										default:
											CCC.concluido = 10;
										break;
									}
								}while(CCC.concluido == 10);
							break;
							case 3:	
								do
								{
									printf("\nDigite o numero do horario que deseja marcar como concluido\n");
									printf("[1]-%s (10:00pm)\n",agendH.h1);
									printf("[2]-%s (11:00pm)\n",agendH.h2);
									printf("[3]-%s (12:00)\n",agendH.h3);
									printf("[4]-%s (2:00am)\n",agendH.h4);
									printf("[5]-%s (3:00am)\n",agendH.h5);
									printf("[6]-%s (4:00am)\n",agendH.h6);
									printf("[7]-%s (5:00am)\n",agendH.h7);
									printf("Resposta: ");
									scanf("%d", &CCC.concluido);
									
									strcpy(CCC.h1,agendH.h1);
									strcpy(CCC.h2,agendH.h2);
									strcpy(CCC.h3,agendH.h3);
									strcpy(CCC.h4,agendH.h4);
									strcpy(CCC.h5,agendH.h5);
									strcpy(CCC.h6,agendH.h6);
									strcpy(CCC.h7,agendH.h7);
									strcpy(CCC.lanche, agendH.lanche);
											
									switch(CCC.concluido)
									{
										case 1:
		
											strcpy(CCC.h1,"10:00pm");
										break;
													
										case 2:
											
											strcpy(CCC.h2,"11:00pm");
										break;
													
										case 3:
											
											strcpy(CCC.h3,"12:00");
										break;
													
										case 4:
											
											strcpy(CCC.h4,"2:00am");
										break;
													
										case 5:
											strcpy(CCC.h5,"3:00am");
										break;
													
										case 6:
											strcpy(CCC.h6,"4:00am");
										break;
													
										case 7:
											strcpy(CCC.h7,"5:00am");
										break;
												
										default:
											CCC.concluido = 10;
										break;
									}
								}while(CCC.concluido == 10);
								
							break;	
							default:
									printf("Horario não encontrado!\n");	
							break;
						}
						fclose(CCC.confirmarAgendamento);
											
						CCC.confirmarAgendamento = fopen(CCC.buscarHorario,"w");
						
						if((semanaHoje == 1) && (diaSemana == 1))
							{
								fprintf(CCC.confirmarAgendamento,"\n");
								fprintf(CCC.confirmarAgendamento,"%s", agendH.puxarNome);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarEspecialidade);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarCPF);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarCRM);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarClinica);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarPreco);
								fprintf(CCC.confirmarAgendamento,"Dia que trabalha: Segunda a Sexta\n");
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarTurno);
								
								fprintf(CCC.confirmarAgendamento,"%s",agendH.semana1);
								
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s lanche %s %s %s %s\n",agendH.segunda, CCC.h1, CCC.h2, CCC.h3, CCC.h4, CCC.h5, CCC.h6, CCC.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.terca, SS.terca.h1, SS.terca.h2, SS.terca.h3, SS.terca.lanche, SS.terca.h4, SS.terca.h5, SS.terca.h6, SS.terca.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quarta, SS.quarta.h1, SS.quarta.h2, SS.quarta.h3, SS.quarta.lanche, SS.quarta.h4, SS.quarta.h5, SS.quarta.h6, SS.quarta.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quinta, SS.quinta.h1, SS.quinta.h2, SS.quinta.h3, SS.quinta.lanche, SS.quinta.h4, SS.quinta.h5, SS.quinta.h6, SS.quinta.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.sexta, SS.sexta.h1, SS.sexta.h2, SS.sexta.h3, SS.sexta.lanche, SS.sexta.h4, SS.sexta.h5, SS.sexta.h6, SS.sexta.h7);
								
								fprintf(CCC.confirmarAgendamento,"			-Semana 2-\n");
								
								fprintf(CCC.confirmarAgendamento,"Segunda: %s %s %s %s %s %s %s %s\n",SSS.segunda1.h11, SSS.segunda1.h22, SSS.segunda1.h33, SSS.segunda1.lanche2, SSS.segunda1.h44, SSS.segunda1.h55, SSS.segunda1.h66, SSS.segunda1.h77);
								fprintf(CCC.confirmarAgendamento,"Terca: %s %s %s %s %s %s %s %s\n",SSS.terca1.h11, SSS.terca1.h22, SSS.terca1.h33, SSS.terca1.lanche2, SSS.terca1.h44, SSS.terca1.h55, SSS.terca1.h66, SSS.terca1.h77);
								fprintf(CCC.confirmarAgendamento,"Quarta: %s %s %s %s %s %s %s %s\n",SSS.quarta1.h11, SSS.quarta1.h22, SSS.quarta1.h33, SSS.quarta1.lanche2, SSS.quarta1.h44, SSS.quarta1.h55, SSS.quarta1.h66, SSS.quarta1.h77);
								fprintf(CCC.confirmarAgendamento,"Quinta: %s %s %s %s %s %s %s %s\n",SSS.quinta1.h11, SSS.quinta1.h22, SSS.quinta1.h33, SSS.quinta1.lanche2, SSS.quinta1.h44, SSS.quinta1.h55, SSS.quinta1.h66, SSS.quinta1.h77);
								fprintf(CCC.confirmarAgendamento,"Sexta: %s %s %s %s %s %s %s %s\n",SSS.sexta1.h11, SSS.sexta1.h22, SSS.sexta1.h33, SSS.sexta1.lanche2, SSS.sexta1.h44, SSS.sexta1.h55, SSS.sexta1.h66, SSS.sexta1.h77);
								fprintf(CCC.confirmarAgendamento,"--------------------------------------------------------------------------------");
								
							}
							if((semanaHoje == 1) && (diaSemana == 2))
							{
								fprintf(CCC.confirmarAgendamento,"\n");
								fprintf(CCC.confirmarAgendamento,"%s", agendH.puxarNome);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarEspecialidade);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarCPF);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarCRM);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarClinica);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarPreco);
								fprintf(CCC.confirmarAgendamento,"Dia que trabalha: Segunda a Sexta\n");
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarTurno);
								
								fprintf(CCC.confirmarAgendamento,"%s",agendH.semana1);
								
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.segunda, SS.segunda.h1, SS.segunda.h2, SS.segunda.h3, SS.segunda.lanche, SS.segunda.h4, SS.segunda.h5, SS.segunda.h6, SS.segunda.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s lanche %s %s %s %s\n",agendH.terca, CCC.h1, CCC.h2, CCC.h3, CCC.h4, CCC.h5, CCC.h6, CCC.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quarta, SS.quarta.h1, SS.quarta.h2, SS.quarta.h3, SS.quarta.lanche, SS.quarta.h4, SS.quarta.h5, SS.quarta.h6, SS.quarta.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quinta, SS.quinta.h1, SS.quinta.h2, SS.quinta.h3, SS.quinta.lanche, SS.quinta.h4, SS.quinta.h5, SS.quinta.h6, SS.quinta.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.sexta, SS.sexta.h1, SS.sexta.h2, SS.sexta.h3, SS.sexta.lanche, SS.sexta.h4, SS.sexta.h5, SS.sexta.h6, SS.sexta.h7);
								
								fprintf(CCC.confirmarAgendamento,"			-Semana 2-\n");
								
								fprintf(CCC.confirmarAgendamento,"Segunda: %s %s %s %s %s %s %s %s\n",SSS.segunda1.h11, SSS.segunda1.h22, SSS.segunda1.h33, SSS.segunda1.lanche2, SSS.segunda1.h44, SSS.segunda1.h55, SSS.segunda1.h66, SSS.segunda1.h77);
								fprintf(CCC.confirmarAgendamento,"Terca: %s %s %s %s %s %s %s %s\n",SSS.terca1.h11, SSS.terca1.h22, SSS.terca1.h33, SSS.terca1.lanche2, SSS.terca1.h44, SSS.terca1.h55, SSS.terca1.h66, SSS.terca1.h77);
								fprintf(CCC.confirmarAgendamento,"Quarta: %s %s %s %s %s %s %s %s\n",SSS.quarta1.h11, SSS.quarta1.h22, SSS.quarta1.h33, SSS.quarta1.lanche2, SSS.quarta1.h44, SSS.quarta1.h55, SSS.quarta1.h66, SSS.quarta1.h77);
								fprintf(CCC.confirmarAgendamento,"Quinta: %s %s %s %s %s %s %s %s\n",SSS.quinta1.h11, SSS.quinta1.h22, SSS.quinta1.h33, SSS.quinta1.lanche2, SSS.quinta1.h44, SSS.quinta1.h55, SSS.quinta1.h66, SSS.quinta1.h77);
								fprintf(CCC.confirmarAgendamento,"Sexta: %s %s %s %s %s %s %s %s\n",SSS.sexta1.h11, SSS.sexta1.h22, SSS.sexta1.h33, SSS.sexta1.lanche2, SSS.sexta1.h44, SSS.sexta1.h55, SSS.sexta1.h66, SSS.sexta1.h77);
								fprintf(CCC.confirmarAgendamento,"--------------------------------------------------------------------------------");
							}
							if((semanaHoje == 1) && (diaSemana == 3))
							{
								fprintf(CCC.confirmarAgendamento,"\n");
								fprintf(CCC.confirmarAgendamento,"%s", agendH.puxarNome);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarEspecialidade);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarCPF);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarCRM);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarClinica);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarPreco);
								fprintf(CCC.confirmarAgendamento,"Dia que trabalha: Segunda a Sexta\n");
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarTurno);
								
								fprintf(CCC.confirmarAgendamento,"%s",agendH.semana1);
								
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.segunda, SS.segunda.h1, SS.segunda.h2, SS.segunda.h3, SS.segunda.lanche, SS.segunda.h4, SS.segunda.h5, SS.segunda.h6, SS.segunda.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.terca, SS.terca.h1, SS.terca.h2, SS.terca.h3, SS.terca.lanche, SS.terca.h4, SS.terca.h5, SS.terca.h6, SS.terca.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s lanche %s %s %s %s\n",agendH.quarta, CCC.h1, CCC.h2, CCC.h3,CCC.h4, CCC.h5, CCC.h6, CCC.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quinta, SS.quinta.h1, SS.quinta.h2, SS.quinta.h3, SS.quinta.lanche, SS.quinta.h4, SS.quinta.h5, SS.quinta.h6, SS.quinta.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.sexta, SS.sexta.h1, SS.sexta.h2, SS.sexta.h3, SS.sexta.lanche, SS.sexta.h4, SS.sexta.h5, SS.sexta.h6, SS.sexta.h7);
								
								fprintf(CCC.confirmarAgendamento,"			-Semana 2-\n");
								
								fprintf(CCC.confirmarAgendamento,"Segunda: %s %s %s %s %s %s %s %s\n",SSS.segunda1.h11, SSS.segunda1.h22, SSS.segunda1.h33, SSS.segunda1.lanche2, SSS.segunda1.h44, SSS.segunda1.h55, SSS.segunda1.h66, SSS.segunda1.h77);
								fprintf(CCC.confirmarAgendamento,"Terca: %s %s %s %s %s %s %s %s\n",SSS.terca1.h11, SSS.terca1.h22, SSS.terca1.h33, SSS.terca1.lanche2, SSS.terca1.h44, SSS.terca1.h55, SSS.terca1.h66, SSS.terca1.h77);
								fprintf(CCC.confirmarAgendamento,"Quarta: %s %s %s %s %s %s %s %s\n",SSS.quarta1.h11, SSS.quarta1.h22, SSS.quarta1.h33, SSS.quarta1.lanche2, SSS.quarta1.h44, SSS.quarta1.h55, SSS.quarta1.h66, SSS.quarta1.h77);
								fprintf(CCC.confirmarAgendamento,"Quinta: %s %s %s %s %s %s %s %s\n",SSS.quinta1.h11, SSS.quinta1.h22, SSS.quinta1.h33, SSS.quinta1.lanche2, SSS.quinta1.h44, SSS.quinta1.h55, SSS.quinta1.h66, SSS.quinta1.h77);
								fprintf(CCC.confirmarAgendamento,"Sexta: %s %s %s %s %s %s %s %s\n",SSS.sexta1.h11, SSS.sexta1.h22, SSS.sexta1.h33, SSS.sexta1.lanche2, SSS.sexta1.h44, SSS.sexta1.h55, SSS.sexta1.h66, SSS.sexta1.h77);
								fprintf(CCC.confirmarAgendamento,"--------------------------------------------------------------------------------");
							}
							if((semanaHoje == 1) && (diaSemana == 4))
							{
								fprintf(CCC.confirmarAgendamento,"\n");
								fprintf(CCC.confirmarAgendamento,"%s", agendH.puxarNome);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarEspecialidade);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarCPF);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarCRM);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarClinica);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarPreco);
								fprintf(CCC.confirmarAgendamento,"Dia que trabalha: Segunda a Sexta\n");
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarTurno);
								
								fprintf(CCC.confirmarAgendamento,"%s",agendH.semana1);
								
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.segunda, SS.segunda.h1, SS.segunda.h2, SS.segunda.h3, SS.segunda.lanche, SS.segunda.h4, SS.segunda.h5, SS.segunda.h6, SS.segunda.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.terca, SS.terca.h1, SS.terca.h2, SS.terca.h3, SS.terca.lanche, SS.terca.h4, SS.terca.h5, SS.terca.h6, SS.terca.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quarta, SS.quarta.h1, SS.quarta.h2, SS.quarta.h3, SS.quarta.lanche, SS.quarta.h4, SS.quarta.h5, SS.quarta.h6, SS.quarta.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s lanche %s %s %s %s\n",agendH.quinta, CCC.h1, CCC.h2, CCC.h3, CCC.h4, CCC.h5, CCC.h6, CCC.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.sexta, SS.sexta.h1, SS.sexta.h2, SS.sexta.h3, SS.sexta.lanche, SS.sexta.h4, SS.sexta.h5, SS.sexta.h6, SS.sexta.h7);
								
								fprintf(CCC.confirmarAgendamento,"			-Semana 2-\n");
								
								fprintf(CCC.confirmarAgendamento,"Segunda: %s %s %s %s %s %s %s %s\n",SSS.segunda1.h11, SSS.segunda1.h22, SSS.segunda1.h33, SSS.segunda1.lanche2, SSS.segunda1.h44, SSS.segunda1.h55, SSS.segunda1.h66, SSS.segunda1.h77);
								fprintf(CCC.confirmarAgendamento,"Terca: %s %s %s %s %s %s %s %s\n",SSS.terca1.h11, SSS.terca1.h22, SSS.terca1.h33, SSS.terca1.lanche2, SSS.terca1.h44, SSS.terca1.h55, SSS.terca1.h66, SSS.terca1.h77);
								fprintf(CCC.confirmarAgendamento,"Quarta: %s %s %s %s %s %s %s %s\n",SSS.quarta1.h11, SSS.quarta1.h22, SSS.quarta1.h33, SSS.quarta1.lanche2, SSS.quarta1.h44, SSS.quarta1.h55, SSS.quarta1.h66, SSS.quarta1.h77);
								fprintf(CCC.confirmarAgendamento,"Quinta: %s %s %s %s %s %s %s %s\n",SSS.quinta1.h11, SSS.quinta1.h22, SSS.quinta1.h33, SSS.quinta1.lanche2, SSS.quinta1.h44, SSS.quinta1.h55, SSS.quinta1.h66, SSS.quinta1.h77);
								fprintf(CCC.confirmarAgendamento,"Sexta: %s %s %s %s %s %s %s %s\n",SSS.sexta1.h11, SSS.sexta1.h22, SSS.sexta1.h33, SSS.sexta1.lanche2, SSS.sexta1.h44, SSS.sexta1.h55, SSS.sexta1.h66, SSS.sexta1.h77);
								fprintf(CCC.confirmarAgendamento,"--------------------------------------------------------------------------------");
							}
							if((semanaHoje == 1) && (diaSemana == 5))
							{
								fprintf(CCC.confirmarAgendamento,"\n");
								fprintf(CCC.confirmarAgendamento,"%s", agendH.puxarNome);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarEspecialidade);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarCPF);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarCRM);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarClinica);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarPreco);
								fprintf(CCC.confirmarAgendamento,"Dia que trabalha: Segunda a Sexta\n");
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarTurno);
								
								fprintf(CCC.confirmarAgendamento,"%s",agendH.semana1);
								
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.segunda, SS.segunda.h1, SS.segunda.h2, SS.segunda.h3, SS.segunda.lanche, SS.segunda.h4, SS.segunda.h5, SS.segunda.h6, SS.segunda.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.terca, SS.terca.h1, SS.terca.h2, SS.terca.h3, SS.terca.lanche, SS.terca.h4, SS.terca.h5, SS.terca.h6, SS.terca.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quarta, SS.quarta.h1, SS.quarta.h2, SS.quarta.h3, SS.quarta.lanche, SS.quarta.h4, SS.quarta.h5, SS.quarta.h6, SS.quarta.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quinta, SS.quinta.h1, SS.quinta.h2, SS.quinta.h3, SS.quinta.lanche, SS.quinta.h4, SS.quinta.h5, SS.quinta.h6, SS.quinta.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s lanche %s %s %s %s\n",agendH.sexta, CCC.h1, CCC.h2, CCC.h3, CCC.h4, CCC.h5, CCC.h6, CCC.h7);
								
								fprintf(CCC.confirmarAgendamento,"			-Semana 2-\n");
								
								fprintf(CCC.confirmarAgendamento,"Segunda: %s %s %s %s %s %s %s %s\n",SSS.segunda1.h11, SSS.segunda1.h22, SSS.segunda1.h33, SSS.segunda1.lanche2, SSS.segunda1.h44, SSS.segunda1.h55, SSS.segunda1.h66, SSS.segunda1.h77);
								fprintf(CCC.confirmarAgendamento,"Terca: %s %s %s %s %s %s %s %s\n",SSS.terca1.h11, SSS.terca1.h22, SSS.terca1.h33, SSS.terca1.lanche2, SSS.terca1.h44, SSS.terca1.h55, SSS.terca1.h66, SSS.terca1.h77);
								fprintf(CCC.confirmarAgendamento,"Quarta: %s %s %s %s %s %s %s %s\n",SSS.quarta1.h11, SSS.quarta1.h22, SSS.quarta1.h33, SSS.quarta1.lanche2, SSS.quarta1.h44, SSS.quarta1.h55, SSS.quarta1.h66, SSS.quarta1.h77);
								fprintf(CCC.confirmarAgendamento,"Quinta: %s %s %s %s %s %s %s %s\n",SSS.quinta1.h11, SSS.quinta1.h22, SSS.quinta1.h33, SSS.quinta1.lanche2, SSS.quinta1.h44, SSS.quinta1.h55, SSS.quinta1.h66, SSS.quinta1.h77);
								fprintf(CCC.confirmarAgendamento,"Sexta: %s %s %s %s %s %s %s %s\n",SSS.sexta1.h11, SSS.sexta1.h22, SSS.sexta1.h33, SSS.sexta1.lanche2, SSS.sexta1.h44, SSS.sexta1.h55, SSS.sexta1.h66, SSS.sexta1.h77);
								fprintf(CCC.confirmarAgendamento,"--------------------------------------------------------------------------------");
							}
							// semana 2
								if((semanaHoje == 2) && (diaSemana == 1))
							{
								fprintf(CCC.confirmarAgendamento,"\n");
								fprintf(CCC.confirmarAgendamento,"%s", agendH.puxarNome);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarEspecialidade);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarCPF);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarCRM);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarClinica);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarPreco);
								fprintf(CCC.confirmarAgendamento,"Dia que trabalha: Segunda a Sexta\n");
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarTurno);
								
								fprintf(CCC.confirmarAgendamento,"%s",agendH.semana1);
								
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.segunda, SS.segunda.h1, SS.segunda.h2, SS.segunda.h3, SS.segunda.lanche, SS.segunda.h4, SS.segunda.h5, SS.segunda.h6, SS.segunda.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.terca, SS.terca.h1, SS.terca.h2, SS.terca.h3, SS.terca.lanche, SS.terca.h4, SS.terca.h5, SS.terca.h6, SS.terca.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quarta, SS.quarta.h1, SS.quarta.h2, SS.quarta.h3, SS.quarta.lanche, SS.quarta.h4, SS.quarta.h5, SS.quarta.h6, SS.quarta.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quinta, SS.quinta.h1, SS.quinta.h2, SS.quinta.h3, SS.quinta.lanche, SS.quinta.h4, SS.quinta.h5, SS.quinta.h6, SS.quinta.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.sexta, SS.sexta.h1, SS.sexta.h2, SS.sexta.h3, SS.sexta.lanche, SS.sexta.h4, SS.sexta.h5, SS.sexta.h6, SS.sexta.h7);
								
								fprintf(CCC.confirmarAgendamento,"			-Semana 2-\n");
								
								fprintf(CCC.confirmarAgendamento,"Segunda: %s %s %s lanche %s %s %s %s\n",CCC.h1, CCC.h2, CCC.h3, CCC.h4, CCC.h5, CCC.h6, CCC.h7);
								fprintf(CCC.confirmarAgendamento,"Terca: %s %s %s %s %s %s %s %s\n",SSS.terca1.h11, SSS.terca1.h22, SSS.terca1.h33, SSS.terca1.lanche2, SSS.terca1.h44, SSS.terca1.h55, SSS.terca1.h66, SSS.terca1.h77);
								fprintf(CCC.confirmarAgendamento,"Quarta: %s %s %s %s %s %s %s %s\n",SSS.quarta1.h11, SSS.quarta1.h22, SSS.quarta1.h33, SSS.quarta1.lanche2, SSS.quarta1.h44, SSS.quarta1.h55, SSS.quarta1.h66, SSS.quarta1.h77);
								fprintf(CCC.confirmarAgendamento,"Quinta: %s %s %s %s %s %s %s %s\n",SSS.quinta1.h11, SSS.quinta1.h22, SSS.quinta1.h33, SSS.quinta1.lanche2, SSS.quinta1.h44, SSS.quinta1.h55, SSS.quinta1.h66, SSS.quinta1.h77);
								fprintf(CCC.confirmarAgendamento,"Sexta: %s %s %s %s %s %s %s %s\n",SSS.sexta1.h11, SSS.sexta1.h22, SSS.sexta1.h33, SSS.sexta1.lanche2, SSS.sexta1.h44, SSS.sexta1.h55, SSS.sexta1.h66, SSS.sexta1.h77);
								fprintf(CCC.confirmarAgendamento,"--------------------------------------------------------------------------------");
							}
							if((semanaHoje == 2) && (diaSemana == 2))
							{
								fprintf(CCC.confirmarAgendamento,"\n");
								fprintf(CCC.confirmarAgendamento,"%s", agendH.puxarNome);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarEspecialidade);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarCPF);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarCRM);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarClinica);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarPreco);
								fprintf(CCC.confirmarAgendamento,"Dia que trabalha: Segunda a Sexta\n");
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarTurno);
								
								fprintf(CCC.confirmarAgendamento,"%s",agendH.semana1);
								
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.segunda, SS.segunda.h1, SS.segunda.h2, SS.segunda.h3, SS.segunda.lanche, SS.segunda.h4, SS.segunda.h5, SS.segunda.h6, SS.segunda.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.terca, SS.terca.h1, SS.terca.h2, SS.terca.h3, SS.terca.lanche, SS.terca.h4, SS.terca.h5, SS.terca.h6, SS.terca.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quarta, SS.quarta.h1, SS.quarta.h2, SS.quarta.h3, SS.quarta.lanche, SS.quarta.h4, SS.quarta.h5, SS.quarta.h6, SS.quarta.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quinta, SS.quinta.h1, SS.quinta.h2, SS.quinta.h3, SS.quinta.lanche, SS.quinta.h4, SS.quinta.h5, SS.quinta.h6, SS.quinta.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.sexta, SS.sexta.h1, SS.sexta.h2, SS.sexta.h3, SS.sexta.lanche, SS.sexta.h4, SS.sexta.h5, SS.sexta.h6, SS.sexta.h7);
								
								fprintf(CCC.confirmarAgendamento,"			-Semana 2-\n");
								
								fprintf(CCC.confirmarAgendamento,"Segunda: %s %s %s %s %s %s %s %s\n",SSS.segunda1.h11, SSS.segunda1.h22, SSS.segunda1.h33, SSS.segunda1.lanche2, SSS.segunda1.h44, SSS.segunda1.h55, SSS.segunda1.h66, SSS.segunda1.h77);
								fprintf(CCC.confirmarAgendamento,"Terca: %s %s %s lanche %s %s %s %s\n",CCC.h1, CCC.h2, CCC.h3, CCC.h4, CCC.h5, CCC.h6, CCC.h7);
								fprintf(CCC.confirmarAgendamento,"Quarta: %s %s %s %s %s %s %s %s\n",SSS.quarta1.h11, SSS.quarta1.h22, SSS.quarta1.h33, SSS.quarta1.lanche2, SSS.quarta1.h44, SSS.quarta1.h55, SSS.quarta1.h66, SSS.quarta1.h77);
								fprintf(CCC.confirmarAgendamento,"Quinta: %s %s %s %s %s %s %s %s\n",SSS.quinta1.h11, SSS.quinta1.h22, SSS.quinta1.h33, SSS.quinta1.lanche2, SSS.quinta1.h44, SSS.quinta1.h55, SSS.quinta1.h66, SSS.quinta1.h77);
								fprintf(CCC.confirmarAgendamento,"Sexta: %s %s %s %s %s %s %s %s\n",SSS.sexta1.h11, SSS.sexta1.h22, SSS.sexta1.h33, SSS.sexta1.lanche2, SSS.sexta1.h44, SSS.sexta1.h55, SSS.sexta1.h66, SSS.sexta1.h77);
								fprintf(CCC.confirmarAgendamento,"--------------------------------------------------------------------------------");
							}
							if((semanaHoje == 2) && (diaSemana == 3))
							{
								fprintf(CCC.confirmarAgendamento,"\n");
								fprintf(CCC.confirmarAgendamento,"%s", agendH.puxarNome);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarEspecialidade);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarCPF);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarCRM);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarClinica);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarPreco);
								fprintf(CCC.confirmarAgendamento,"Dia que trabalha: Segunda a Sexta\n");
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarTurno);
								
								fprintf(CCC.confirmarAgendamento,"%s",agendH.semana1);
								
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.segunda, SS.segunda.h1, SS.segunda.h2, SS.segunda.h3, SS.segunda.lanche, SS.segunda.h4, SS.segunda.h5, SS.segunda.h6, SS.segunda.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.terca, SS.terca.h1, SS.terca.h2, SS.terca.h3, SS.terca.lanche, SS.terca.h4, SS.terca.h5, SS.terca.h6, SS.terca.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quarta, SS.quarta.h1, SS.quarta.h2, SS.quarta.h3, SS.quarta.lanche, SS.quarta.h4, SS.quarta.h5, SS.quarta.h6, SS.quarta.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quinta, SS.quinta.h1, SS.quinta.h2, SS.quinta.h3, SS.quinta.lanche, SS.quinta.h4, SS.quinta.h5, SS.quinta.h6, SS.quinta.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.sexta, SS.sexta.h1, SS.sexta.h2, SS.sexta.h3, SS.sexta.lanche, SS.sexta.h4, SS.sexta.h5, SS.sexta.h6, SS.sexta.h7);
								
								fprintf(CCC.confirmarAgendamento,"			-Semana 2-\n");
								
								fprintf(CCC.confirmarAgendamento,"Segunda: %s %s %s %s %s %s %s %s\n",SSS.segunda1.h11, SSS.segunda1.h22, SSS.segunda1.h33, SSS.segunda1.lanche2, SSS.segunda1.h44, SSS.segunda1.h55, SSS.segunda1.h66, SSS.segunda1.h77);
								fprintf(CCC.confirmarAgendamento,"Terca: %s %s %s %s %s %s %s %s\n",SSS.terca1.h11, SSS.terca1.h22, SSS.terca1.h33, SSS.terca1.lanche2, SSS.terca1.h44, SSS.terca1.h55, SSS.terca1.h66, SSS.terca1.h77);
								fprintf(CCC.confirmarAgendamento,"Quarta: %s %s %s lanche %s %s %s %s\n",CCC.h1, CCC.h2, CCC.h3, CCC.h4, CCC.h5, CCC.h6, CCC.h7);
								fprintf(CCC.confirmarAgendamento,"Quinta: %s %s %s %s %s %s %s %s\n",SSS.quinta1.h11, SSS.quinta1.h22, SSS.quinta1.h33, SSS.quinta1.lanche2, SSS.quinta1.h44, SSS.quinta1.h55, SSS.quinta1.h66, SSS.quinta1.h77);
								fprintf(CCC.confirmarAgendamento,"Sexta: %s %s %s %s %s %s %s %s\n",SSS.sexta1.h11, SSS.sexta1.h22, SSS.sexta1.h33, SSS.sexta1.lanche2, SSS.sexta1.h44, SSS.sexta1.h55, SSS.sexta1.h66, SSS.sexta1.h77);
								fprintf(CCC.confirmarAgendamento,"--------------------------------------------------------------------------------");
							}
							if((semanaHoje == 2) && (diaSemana == 4))
							{
								fprintf(CCC.confirmarAgendamento,"\n");
								fprintf(CCC.confirmarAgendamento,"%s", agendH.puxarNome);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarEspecialidade);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarCPF);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarCRM);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarClinica);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarPreco);
								fprintf(CCC.confirmarAgendamento,"Dia que trabalha: Segunda a Sexta\n");
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarTurno);
								
								fprintf(CCC.confirmarAgendamento,"%s",agendH.semana1);
								
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.segunda, SS.segunda.h1, SS.segunda.h2, SS.segunda.h3, SS.segunda.lanche, SS.segunda.h4, SS.segunda.h5, SS.segunda.h6, SS.segunda.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.terca, SS.terca.h1, SS.terca.h2, SS.terca.h3, SS.terca.lanche, SS.terca.h4, SS.terca.h5, SS.terca.h6, SS.terca.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quarta, SS.quarta.h1, SS.quarta.h2, SS.quarta.h3, SS.quarta.lanche, SS.quarta.h4, SS.quarta.h5, SS.quarta.h6, SS.quarta.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quinta, SS.quinta.h1, SS.quinta.h2, SS.quinta.h3, SS.quinta.lanche, SS.quinta.h4, SS.quinta.h5, SS.quinta.h6, SS.quinta.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.sexta, SS.sexta.h1, SS.sexta.h2, SS.sexta.h3, SS.sexta.lanche, SS.sexta.h4, SS.sexta.h5, SS.sexta.h6, SS.sexta.h7);
								
								fprintf(CCC.confirmarAgendamento,"			-Semana 2-\n");
								
								fprintf(CCC.confirmarAgendamento,"Segunda: %s %s %s %s %s %s %s %s\n",SSS.segunda1.h11, SSS.segunda1.h22, SSS.segunda1.h33, SSS.segunda1.lanche2, SSS.segunda1.h44, SSS.segunda1.h55, SSS.segunda1.h66, SSS.segunda1.h77);
								fprintf(CCC.confirmarAgendamento,"Terca: %s %s %s %s %s %s %s %s\n",SSS.terca1.h11, SSS.terca1.h22, SSS.terca1.h33, SSS.terca1.lanche2, SSS.terca1.h44, SSS.terca1.h55, SSS.terca1.h66, SSS.terca1.h77);
								fprintf(CCC.confirmarAgendamento,"Quarta: %s %s %s %s %s %s %s %s\n",SSS.quarta1.h11, SSS.quarta1.h22, SSS.quarta1.h33, SSS.quarta1.lanche2, SSS.quarta1.h44, SSS.quarta1.h55, SSS.quarta1.h66, SSS.quarta1.h77);
								fprintf(CCC.confirmarAgendamento,"Quinta: %s %s %s lanche %s %s %s %s\n",CCC.h1, CCC.h2, CCC.h3, CCC.h4, CCC.h5, CCC.h6, CCC.h7);
								fprintf(CCC.confirmarAgendamento,"Sexta: %s %s %s %s %s %s %s %s\n",SSS.sexta1.h11, SSS.sexta1.h22, SSS.sexta1.h33, SSS.sexta1.lanche2, SSS.sexta1.h44, SSS.sexta1.h55, SSS.sexta1.h66, SSS.sexta1.h77);
								fprintf(CCC.confirmarAgendamento,"--------------------------------------------------------------------------------");
							}
							if((semanaHoje == 2) && (diaSemana == 5))
							{
								fprintf(CCC.confirmarAgendamento,"\n");
								fprintf(CCC.confirmarAgendamento,"%s", agendH.puxarNome);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarEspecialidade);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarCPF);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarCRM);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarClinica);
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarPreco);
								fprintf(CCC.confirmarAgendamento,"Dia que trabalha: Segunda a Sexta\n");
								fprintf(CCC.confirmarAgendamento,"%s",agendH.puxarTurno);
								
								fprintf(CCC.confirmarAgendamento,"%s",agendH.semana1);
								
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.segunda, SS.segunda.h1, SS.segunda.h2, SS.segunda.h3, SS.segunda.lanche, SS.segunda.h4, SS.segunda.h5, SS.segunda.h6, SS.segunda.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.terca, SS.terca.h1, SS.terca.h2, SS.terca.h3, SS.terca.lanche, SS.terca.h4, SS.terca.h5, SS.terca.h6, SS.terca.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quarta, SS.quarta.h1, SS.quarta.h2, SS.quarta.h3, SS.quarta.lanche, SS.quarta.h4, SS.quarta.h5, SS.quarta.h6, SS.quarta.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.quinta, SS.quinta.h1, SS.quinta.h2, SS.quinta.h3, SS.quinta.lanche, SS.quinta.h4, SS.quinta.h5, SS.quinta.h6, SS.quinta.h7);
								fprintf(CCC.confirmarAgendamento,"%s %s %s %s %s %s %s %s %s\n",agendH.sexta, SS.sexta.h1, SS.sexta.h2, SS.sexta.h3, SS.sexta.lanche, SS.sexta.h4, SS.sexta.h5, SS.sexta.h6, SS.sexta.h7);
								
								fprintf(CCC.confirmarAgendamento,"			-Semana 2-");
								
								fprintf(CCC.confirmarAgendamento,"Segunda: %s %s %s %s %s %s %s %s\n",SSS.segunda1.h11, SSS.segunda1.h22, SSS.segunda1.h33, SSS.segunda1.lanche2, SSS.segunda1.h44, SSS.segunda1.h55, SSS.segunda1.h66, SSS.segunda1.h77);
								fprintf(CCC.confirmarAgendamento,"Terca: %s %s %s %s %s %s %s %s\n",SSS.terca1.h11, SSS.terca1.h22, SSS.terca1.h33, SSS.terca1.lanche2, SSS.terca1.h44, SSS.terca1.h55, SSS.terca1.h66, SSS.terca1.h77);
								fprintf(CCC.confirmarAgendamento,"Quarta: %s %s %s %s %s %s %s %s\n",SSS.quarta1.h11, SSS.quarta1.h22, SSS.quarta1.h33, SSS.quarta1.lanche2, SSS.quarta1.h44, SSS.quarta1.h55, SSS.quarta1.h66, SSS.quarta1.h77);
								fprintf(CCC.confirmarAgendamento,"Quinta: %s %s %s %s %s %s %s %s\n",SSS.quinta1.h11, SSS.quinta1.h22, SSS.quinta1.h33, SSS.quinta1.lanche2, SSS.quinta1.h44, SSS.quinta1.h55, SSS.quinta1.h66, SSS.quinta1.h77);
								fprintf(CCC.confirmarAgendamento,"Sexta: %s %s %s lanche %s %s %s %s\n",CCC.h1, CCC.h2, CCC.h3, CCC.h4, CCC.h5, CCC.h6, CCC.h7);
								fprintf(CCC.confirmarAgendamento,"--------------------------------------------------------------------------------");
							}
							
									
						
									
						CCC.remover = remove(CCC.Agendamentos);
						fclose(CCC.confirmarAgendamento);	
						
						
						if(strncmp(agendH.puxarClinica,"Clinica onde reside: Clinica A",30)==0)
						{		
							strcpy(CCC.moneyClinic,"Dinheiro\\Clinica_A\\");
							strcpy(CCC.clinicaDinheiroTotal,"Dinheiro\\Clinica_A\\");
							strcpy(CCC.unidadeQueAtendeMais,"ClinicaMaisAtende\\Clinica_A.txt");
						}
								
						if(strncmp(agendH.puxarClinica,"Clinica onde reside: Clinica B",30)==0)
						{		
							strcpy(CCC.moneyClinic,"Dinheiro\\Clinica_B\\");
							strcpy(CCC.clinicaDinheiroTotal,"Dinheiro\\Clinica_B\\");
							strcpy(CCC.unidadeQueAtendeMais,"ClinicaMaisAtende\\Clinica_B.txt");
						}
								
						if(strncmp(agendH.puxarClinica,"Clinica onde reside: Clinica C",30)==0)
						{	
							strcpy(CCC.moneyClinic,"Dinheiro\\Clinica_C\\");
							strcpy(CCC.clinicaDinheiroTotal,"Dinheiro\\Clinica_C\\");
							strcpy(CCC.unidadeQueAtendeMais,"ClinicaMaisAtende\\Clinica_C.txt");
						}
						
						do
						{
							printf("\n-----Mes da consulta-----\n\n");
							printf("[1]-Janeiro\n");
							printf("[2]-Fevereiro\n");
							printf("[3]-Marco\n");
							printf("[4]-Abril\n");
							printf("[5]-Maio\n");
							printf("[6]-Junho\n");
							printf("[7]-Julho\n");
							printf("[8]-Agosto\n");
							printf("[9]-Setembro\n");
							printf("[10]-Outubro\n");
							printf("[11]-Novembro\n");
							printf("[12]-Dezembro\n");
							printf("Resposta: ");
							scanf("%d", &CCC.mesConsulta);
							
							
							switch(CCC.mesConsulta)
							{
								case 1:
									strcat(CCC.moneyClinic,"Janeiro\\");
									strcpy(CCC.totalMes,"Janeiro\\");
									strcat(CCC.clinicaDinheiroTotal,"Janeiro\\Total\\Total.txt");
									strcpy(CCC.totalTotalMes,"Janeiro\\Total\\Total.txt");
								break;
								case 2:
									strcat(CCC.moneyClinic,"Fevereiro\\");
									strcpy(CCC.totalMes,"Fevereiro\\");
									strcat(CCC.clinicaDinheiroTotal,"Fevereiro\\Total\\Total.txt");
									strcpy(CCC.totalTotalMes,"Fevereiro\\Total\\Total.txt");
						
								break;	
								case 3:
									strcat(CCC.moneyClinic,"Marco\\");
									strcpy(CCC.totalMes,"Marco\\");
									strcat(CCC.clinicaDinheiroTotal,"Marco\\Total\\Total.txt");
									strcpy(CCC.totalTotalMes,"Marco\\Total\\Total.txt");
								break;	
								case 4:
									strcat(CCC.moneyClinic,"Abril\\");
									strcpy(CCC.totalMes,"Abril\\");
									strcat(CCC.clinicaDinheiroTotal,"Abril\\Total\\Total.txt");
									strcpy(CCC.totalTotalMes,"Abril\\Total\\Total.txt");
								break;	
								case 5:
									strcat(CCC.moneyClinic,"Maio\\");
									strcpy(CCC.totalMes,"Maio\\");
									strcat(CCC.clinicaDinheiroTotal,"Maio\\Total\\Total.txt");
									strcpy(CCC.totalTotalMes,"Maio\\Total\\Total.txt");
								break;	
								case 6:
									strcat(CCC.moneyClinic,"Junho\\");
									strcpy(CCC.totalMes,"Junho\\");
									strcat(CCC.clinicaDinheiroTotal,"Junho\\Total\\Total.txt");
									strcpy(CCC.totalTotalMes,"Junho\\Total\\Total.txt");
								break;	
								case 7:
									strcat(CCC.moneyClinic,"Julho\\");
									strcpy(CCC.totalMes,"Julho\\");
									strcat(CCC.clinicaDinheiroTotal,"Julho\\Total\\Total.txt");
									strcpy(CCC.totalTotalMes,"Julho\\Total\\Total.txt");
								break;	
								case 8:
									strcat(CCC.moneyClinic,"Agosto\\");
									strcpy(CCC.totalMes,"Agosto\\");
									strcat(CCC.clinicaDinheiroTotal,"Agosto\\Total\\Total.txt");
									strcpy(CCC.totalTotalMes,"Agosto\\Total\\Total.txt");
								break;	
								case 9:
									strcat(CCC.moneyClinic,"Setembro\\");
									strcpy(CCC.totalMes,"Setembro\\");
									strcat(CCC.clinicaDinheiroTotal,"Setembro\\Total\\Total.txt");
									strcpy(CCC.totalTotalMes,"Setembro\\Total\\Total.txt");
								break;	
								case 10:
									strcat(CCC.moneyClinic,"Outubro\\");
									strcpy(CCC.totalMes,"Outubro\\");
									strcat(CCC.clinicaDinheiroTotal,"Outubro\\Total\\Total.txt");
									strcpy(CCC.totalTotalMes,"Outubro\\Total\\Total.txt");
								break;	
								case 11:
									strcat(CCC.moneyClinic,"Novembro\\");
									strcpy(CCC.totalMes,"Novembro\\");
									strcat(CCC.clinicaDinheiroTotal,"Novembro\\Total\\Total.txt");
									strcpy(CCC.totalTotalMes,"Novembro\\Total\\Total.txt");
								break;	
								case 12:
									strcat(CCC.moneyClinic,"Dezembro\\");
									strcpy(CCC.totalMes,"Dezembro\\");
									strcat(CCC.clinicaDinheiroTotal,"Dezembro\\Total\\Total.txt");
									strcpy(CCC.totalTotalMes,"Dezembro\\Total\\Total.txt");
								break;	
								
								default:
									CCC.mesConsulta = 100;
								break;		
							}
						}while(CCC.mesConsulta == 100);
						
						
						printf("Digite o dia da consulta em numeros(Dia de hoje): ");
						scanf("%s", CCC.diaEmNumeros);
					
						strcat(CCC.diaEmNumeros,".txt");
						strcat(CCC.totalMes,CCC.diaEmNumeros);
						strcat(CCC.moneyClinic,CCC.diaEmNumeros);	
						
					
						///////////////////////////////////////////////////////////////
						// Ele salva o dinheiro da clinixa X do mes X do dia X	
						CCC.dinheiro = fopen(CCC.moneyClinic,"a");
						fclose(CCC.dinheiro);
						
						CCC.Atendido = 1;
						
						printf("\nPaciente cancelou a consulta?\n");
						printf("[1]-NAO\n");
						printf("[2]-SIM\n");
						printf("Resposta: ");
						scanf("%d",&CCC.escolha);
						
						printf("\nDigite o preco da consulta(somente numeros): ");
						scanf("%d", &CCC.valorConsulta);
						
						if(CCC.escolha == 2)
						{
							CCC.valorConsulta = CCC.valorConsulta / 5;
							CCC.Atendido = 0 ;
						}	
						
						CCC.dinheiro = fopen(CCC.moneyClinic,"r+");
								
						fscanf(CCC.dinheiro,"%s",CCC.n1);
								
						CCC.soma = CCC.valorConsulta + atoi(CCC.n1);
								
						fclose(CCC.dinheiro);
									
						CCC.dinheiro = fopen(CCC.moneyClinic,"w");
								
						fprintf(CCC.dinheiro,"%d",CCC.soma);
								
						fclose(CCC.dinheiro);
								
						CCC.soma = 0;
						///////////////////////////////////////////////////////////////
					     // não importa a clinica ou a especialidade, todo dinheiro conseguido no dia 10 do 4 (exemplo de dia) vai ir para essa pasta.
					   
					    strcpy(CCC.dinheiroTotal,"Dinheiro\\Total\\");
					    strcat(CCC.dinheiroTotal,CCC.totalMes);
					 	
						CCC.dinheiro = fopen(CCC.dinheiroTotal, "a");
						fclose(CCC.dinheiro);
					
						CCC.dinheiro = fopen(CCC.dinheiroTotal, "r+");
						fscanf(CCC.dinheiro,"%s",CCC.n1);
					
						CCC.soma = CCC.valorConsulta + atoi(CCC.n1);
						fclose(CCC.dinheiro);
					
						CCC.dinheiro = fopen(CCC.dinheiroTotal,"w");
						fprintf(CCC.dinheiro,"%d",CCC.soma);
					
						fclose(CCC.dinheiro);
					
						CCC.soma = 0;
						///////////////////////////////////////////////////////////////
						//Salva o total do mes de todas as clinicas //não importa a clinica ou a especialidade, todo dinheiro conseguido no mes  4 (exemplo de mes) vai ir para essa pasta.
						
					    strcpy(CCC.dinheiroTotalTotal,"Dinheiro\\Total\\");
					    strcat(CCC.dinheiroTotalTotal,CCC.totalTotalMes);
					    
					
						CCC.dinheiro = fopen(CCC.dinheiroTotalTotal, "a");
						fclose(CCC.dinheiro);
					
						CCC.dinheiro = fopen(CCC.dinheiroTotalTotal, "r+");
						fscanf(CCC.dinheiro,"%s",CCC.n1);
					
						CCC.soma = CCC.valorConsulta + atoi(CCC.n1);
						fclose(CCC.dinheiro);
					
						CCC.dinheiro = fopen(CCC.dinheiroTotalTotal,"w");
						fprintf(CCC.dinheiro,"%d",CCC.soma);
					
						fclose(CCC.dinheiro);
					
						CCC.soma = 0;
						
						///////////////////////////////////////////////////////////////
						 // salva o dinheiro total da clinica X do mes X 
					
						CCC.mesDinheiro = fopen(CCC.clinicaDinheiroTotal, "a");
						fclose(CCC.mesDinheiro);
								
						CCC.mesDinheiro = fopen(CCC.clinicaDinheiroTotal, "r+");
						fscanf(CCC.mesDinheiro,"%s",CCC.n2);
						
						CCC.soma = CCC.valorConsulta + atoi(CCC.n2);
					
						fclose(CCC.mesDinheiro);
								
						CCC.mesDinheiro = fopen(CCC.clinicaDinheiroTotal,"w");
						fprintf(CCC.mesDinheiro,"%d",CCC.soma);
								
						fclose(CCC.mesDinheiro);
						
						fclose(CCC.confirmarAgendamento);
						/////////////////////////////////////////////////////////// Contador para Unidade de Rede que mais Atende
						
						// Salva "1 ponto"  para clinica que realizou um atendimento
						
						if(CCC.Atendido == 1)
						{	
							CCC.soma = 0;
							strcpy(CCC.n2,"0");
					
							CCC.unidadeRedeQueMaisAtende = fopen(CCC.unidadeQueAtendeMais, "a");
							fclose(CCC.unidadeRedeQueMaisAtende);
								
							CCC.unidadeRedeQueMaisAtende = fopen(CCC.unidadeQueAtendeMais, "r+");
							fscanf(CCC.unidadeRedeQueMaisAtende,"%s",CCC.n2);
						
						
							CCC.soma = CCC.Atendido + atoi(CCC.n2);
						
							fclose(CCC.unidadeRedeQueMaisAtende);
								
							CCC.unidadeRedeQueMaisAtende = fopen(CCC.unidadeQueAtendeMais,"w");
							fprintf(CCC.unidadeRedeQueMaisAtende,"%d",CCC.soma);
								
							fclose(CCC.unidadeRedeQueMaisAtende);
						}
						
						system("pause");
						
						system("cls");
						
						printf("Escolha uma das opcoes a baixo\n");
						printf("[1]-Confirmar/Cancelar outro horario\n");
						printf("[2]-Voltar para o Menu\n");
						printf("[3]-Encerrar Programa\n");
						printf("Digito escolhido: ");
						scanf("%d", &CCC.comeco);
						if(CCC.comeco == 2){
							menu.menu_loop = 1;
						}
						if(CCC.comeco == 3){
							return 0;
						}
					}while(CCC.comeco == 1);
	
			        break;
					     
				case 6:
					
					musica_sair();
					
					return 0;
					break;	     
					    
			default:
					system("cls");
					printf("    ___________________________________________________________________________   \n");
					printf("   |                                                                           |  \n");
					printf("                                 DIGITO INCORRETO!!! :(                           \n\n");
					printf("                              Digite apenas os valores:                           \n\n");
					printf("           [1]- Cadastro do paciente                                              \n");
					printf("           [2]- Agendamento de consulta                                           \n");
					printf("           [3]- Cadastro de medicos		                                          \n");
					printf("           [4]- Gerador de relatorios                                             \n");
					printf("           [5]- Cancelamento de consultas/Confirmar consulta                      \n");
					printf("   |___________________________________________________________________________|  \n");
					system("pause");
					
					menu.menu_loop = 1;
					break;
					
			         
			}

		}while(menu.menu_loop == 1);
		
	
	return 0;
}

