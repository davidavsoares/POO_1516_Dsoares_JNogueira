#include "comandos.h"

int verifica = 1;

comandos::comandos()
{
}

comandos::~comandos()
{
}

void comandos::cmd(Nave & Spaceship)
{
	Consola c;
	//int tecla;
	char buffer[512];

	//c.clrscr();
	c.gotoxy(5, 40);
	//cout << "Primir C para digitar os comandos";
	//do
	//{
	//	tecla = c.getch();
	//} while (tecla != 99 );

	//c.clrscr();
	c.gotoxy(5, 40);
	cout << ">comando: ";
	cin.getline(buffer, 512);
	analisa_comandos(buffer, Spaceship);
}

void comandos::analisa_comandos(string b, Nave & Spaceship)
{
	stringstream comandos(b);
	int j = 0;
	string buffer;
	string *palavras;

	
	while (comandos >> buffer)
		j++;

	palavras = new string[j];
	j = 0;
	comandos.clear();
	comandos.seekg(0, ios::beg);

	while (comandos >> buffer)
	{
		palavras[j] = buffer;
		j++;
	}

	if (palavras[0] == "mover")
	{
		int/* l,*/ c;
		
		c = stoi(palavras[2], nullptr, 10);
		Spaceship.MoveTripulante(palavras[1], c);		//COMANDO FEITO FALTA PASSAR NAVE COMO ARGUMENTO
		Spaceship.DesenhaNave(8, 7, 20);
		
	}
	

	if (palavras[0] == "sair")
	{
		Interface ui;
		ui.sair();
	}

	if (palavras[0] == "turno")
	{
		Spaceship.actualiza_distancia();


	}
	else
		cout << "Deve indroduzir um comando válido";
}

//
//void comandos::analisa_comandos1(string comando,territorio *a)
//{
//	stringstream comandos(comando);
//	int j = 0;
//	string buffer;
//	string *palavras;
//
//	while (comandos >> buffer)
//		j++;
//
//	palavras = new string[j];
//	j = 0;
//	comandos.clear();
//	comandos.seekg(0, ios::beg);
//	
//	while (comandos >> buffer)
//	{
//		palavras[j] = buffer;
//		j++;
//	}
//	if (palavras[0] == "scroll")
//		desenha_mapa(a);
//	if (palavras[0] == "pop")
//	{
//		string nome;
//		nome = palavras[1];
//		a->adiciona_populacao(nome);
//		desenha_mapa(a);
//	}
//	if (palavras[0] == "sete")
//	{
//		string nome_populacao, tipo_edificio;
//		int x, z;
//		nome_populacao = palavras[1];
//		tipo_edificio = palavras[2];
//		x = stoi(palavras[3], nullptr, 10);
//		z = stoi(palavras[4], nullptr, 10);
//		
//		if (tipo_edificio == "castelo")
//		{
//			if (a->get_existe(x, z) == true)
//			{
//				cout << "Ja existe um castelo construido";
//				Sleep(2000);
//				desenha_mapa(a);
//			}
//			else
//			{
//				a->mete_castelo(x, z, nome_populacao);
//				desenha_mapa(a);
//			}
//		}
//		if (tipo_edificio == "quartel")
//		{
//			if (a->get_existe(x, z) == true)
//			{
//				cout << "Ja existe um quartel construido";
//				Sleep(2000);
//				desenha_mapa(a);
//			}
//			else
//			{
//				a->mete_quartel(x, z,nome_populacao);
//				desenha_mapa(a);
//			}
//		}
//		if (tipo_edificio=="estabulo")
//		{
//			if (a->get_existe(x,z)==true)
//			{
//				cout << "Ja existe um estabulo construido";
//				Sleep(2000);
//				desenha_mapa(a);
//			}
//			else
//			{
//				a->mete_estabulo(x, z,nome_populacao);
//				desenha_mapa(a);
//			}
//		}
//		if (tipo_edificio == "quinta")
//		{
//			a->mete_quinta(x, z, nome_populacao);
//			desenha_mapa(a);
//		}
//	}
//	if (palavras[0] == "setf")
//	{
//		string tipo_fonte=palavras[1];
//		int x, z;
//		x = stoi(palavras[2],nullptr,10);
//		z = stoi(palavras[3],nullptr,10);
//		if (tipo_fonte == "mina")
//		{
//			a->mete_mina(x, z);
//			desenha_mapa(a);
//		}
//		if (tipo_fonte=="pedreira")
//		{
//			a->mete_pedreira(x, z);
//			desenha_mapa(a);
//		}
//		if (tipo_fonte=="floresta")
//		{
//			a->mete_floresta(x, z);
//			desenha_mapa(a);
//		}
//	}
//	if (palavras[0]=="setu")
//	{
//		string tipo_unidade = palavras[1];
//		string pertence = palavras[2];
//		int c, d;
//		c = stoi(palavras[3], nullptr, 10);
//		d = stoi(palavras[4], nullptr, 10);
//		if (tipo_unidade=="camp")
//		{
//			a->mete_campones(c, d,pertence);
//			desenha_mapa(a);
//		}
//		if (tipo_unidade=="cv")
//		{
//			a->mete_campones_cavalo(c, d,pertence);
//			desenha_mapa(a);
//		}
//		if (tipo_unidade=="sold")
//		{
//			a->mete_soldado(c, d,pertence);
//			desenha_mapa(a);
//		}
//		if (tipo_unidade == "cav")
//		{
//			a->mete_cavaleiro(c, d, pertence);
//			desenha_mapa(a);
//		}
//
//
//
//		if (tipo_unidade == "sf")
//		{
//			a->mete_soldado_fraco(c, d, pertence);
//			desenha_mapa(a);
//		}
//	}
//	if (palavras[0] == "mina")
//	{
//		int id_unidade = stoi(palavras[1],nullptr,10);
//		int pos_x_unidade = stoi(palavras[2],nullptr,10);
//		int pos_y_unidade = stoi(palavras[3], nullptr, 10);
//		int pos_x_fonte = stoi(palavras[4], nullptr, 10);
//		int pos_y_fonte = stoi(palavras[5], nullptr, 10);
//		string pertence = palavras[6];
//		a->minar(id_unidade,pos_x_unidade,pos_y_unidade,pos_x_fonte,pos_y_fonte,pertence);
//		desenha_mapa(a);
//	}
//	if (palavras[0] == "mostra")
//	{
//		string nome;
//		nome = palavras[1];
//		a->mostra_info(nome);
//		Sleep(3000);
//		desenha_mapa(a);
//	}
//	if (palavras[0] == "ouro")
//	{
//		string pop_destino = palavras[1];
//		int qtd = stoi(palavras[2],nullptr,10);
//		a->adiciona_ouro_pop(qtd, pop_destino);
//	}
//	if (palavras[0]=="madeira")
//	{
//		string pop_destino = palavras[1];
//		int qtd = stoi(palavras[2],nullptr,10);
//		a->adiciona_madeira_pop(qtd, pop_destino);
//	}
//	if (palavras[0]=="pedra")
//	{
//		string pop_destino = palavras[1];
//		int qtd = stoi(palavras[2], nullptr, 10);
//		a->adiciona_pedra_pop(qtd,pop_destino);
//	}
//	if (palavras[0] == "go")
//	{
//		int pos_x_actual = stoi(palavras[1], nullptr, 10);
//		int pos_y_actual = stoi(palavras[2], nullptr, 10);
//		int qual_unidade = stoi(palavras[3],nullptr,10);
//		int delta_linha = stoi(palavras[4],nullptr,10);
//		int delta_coluna = stoi(palavras[5], nullptr, 10);
//		string dono = palavras[6];
//		a->move_unidade(pos_x_actual,pos_y_actual, qual_unidade, delta_linha, delta_coluna,dono);
//		desenha_mapa(a);
//	}
//	if (palavras[0] == "goto")
//	{
//		int pos_x_actual = stoi(palavras[1], nullptr, 10);
//		int pos_y_actual = stoi(palavras[2], nullptr, 10);
//		int qual_unidade = stoi(palavras[3], nullptr, 10);
//		int pos_x_final = stoi(palavras[4], nullptr, 10);
//		int pos_y_final = stoi(palavras[5], nullptr, 10);
//		string dono = palavras[6];
//		a->mexe_unidade(pos_x_actual, pos_y_actual,qual_unidade,pos_x_final,pos_y_final,dono);
//		desenha_mapa(a);
//
//	}
//	if (palavras[0] == "mke")
//	{
//		int id_unidade = stoi(palavras[1], nullptr, 10);
//		int pos_x_unidade = stoi(palavras[2], nullptr, 10);
//		int pos_y_unidade=stoi(palavras[3], nullptr, 10);
//		string edificio = palavras[4];
//		string populacao = palavras[5];
//		int pos_x = stoi(palavras[6], nullptr, 10);
//		int pos_y = stoi(palavras[7], nullptr, 10);
//		a->cria_edificio(id_unidade, pos_x_unidade,pos_y_unidade,edificio, populacao, pos_x, pos_y);
//		desenha_mapa(a);
//	}
//	if (palavras[0]=="mku")
//	{
//		int qual_unidade = stoi(palavras[1],nullptr,10);
//		string qual_populacao = palavras[2];
//		a->cria_unidade(qual_unidade,qual_populacao);
//		desenha_mapa(a);
//	}
//	if (palavras[0] == "conserta")
//	{
//		int uni=stoi(palavras[1],nullptr,10);
//		int posx_uni = stoi(palavras[2], nullptr, 10);
//		int posy_uni = stoi(palavras[3],nullptr,10);
//		int posx_edificio = stoi(palavras[4], nullptr, 10);
//		int posy_edificio = stoi(palavras[5], nullptr, 10);
//		string pertence = palavras[6];
//		string edificio = palavras[7];
//		a->consertar(uni,posx_uni,posy_uni,posx_edificio,posy_edificio,pertence,edificio);
//		desenha_mapa(a);
//	}
//	if (palavras[0] == "ataca")
//	{
//		int	unidade = stoi(palavras[1],nullptr,10);
//		int pos_x_atacante = stoi(palavras[2],nullptr,10);
//		int pos_y_atacante = stoi(palavras[3], nullptr, 10);
//		int pos_x_atacado = stoi(palavras[4], nullptr, 10);
//		int pos_y_atacado = stoi(palavras[5], nullptr, 10);
//		string populacao = palavras[6];
//		a->atacar(unidade,pos_x_atacante,pos_y_atacante,pos_x_atacado,pos_y_atacado,populacao);
//		desenha_mapa(a);
//	}
//	if (palavras[0] == "next")
//	{
//		if (j == 1)
//			a->set_instante();
//		else
//			a->set_instante(stoi(palavras[1], nullptr, 10));
//		desenha_mapa(a);
//	}		
//	if (palavras[0] == "sel")
//	{
//		int id_selecionado = stoi(palavras[1], nullptr, 10);
//		int pos_x = stoi(palavras[2], nullptr, 10);
//		int pos_y = stoi(palavras[3], nullptr, 10);
//		a->informacao(pos_x, pos_y, id_selecionado);
//		desenha_mapa(a);
//	}
//}
//
//void comandos::desenha_mapa(territorio *a)
//{
//	Consola c;
//	string buffer;
//	int x = 20, y = 10,tecla=0,i,j;
//	
//	c.clrscr();
//	c.gotoxy(35,5);
//	cout << "Instante: "<<a->get_instante();
//		
//	for (i = 0+a->get_x_actual(); i < 9+a->get_x_actual(); i++)
//	{
//		for ( j = 0+a->get_y_actual(); j < 9+a->get_y_actual(); j++)
//		{
//			if (a->get_blocos(i, j) == 0)
//			{
//				c.setTextColor(c.BRANCO);
//				c.gotoxy(x,y);
//				cout << (char) 176<<(char)176<<(char)176<<endl;
//				c.gotoxy(x, y+1);
//				cout << (char)176 << (char)176 << (char)176 << endl;
//				c.gotoxy(x, y+2);
//				cout << (char)176 << (char)176 << (char)176<<endl;
//			}
//			if (a->get_blocos(i, j) == 1)
//			{
//				c.setTextColor(c.ROXO);
//				c.gotoxy(x, y);
//				cout << (char)176 << (char)176 << (char)176 << endl;
//				c.gotoxy(x, y + 1);
//				cout << "CAS" <<endl;
//				c.gotoxy(x, y + 2);
//				cout << a->get_vida_castelo(i+1,j+1);
//			}
//			if (a->get_blocos(i, j) == 2)
//			{
//				c.setTextColor(c.VERMELHO);
//				c.gotoxy(x, y);
//				cout << (char)176 << (char)176 << (char)176;
//				c.gotoxy(x, y + 1);
//				cout << "QUA";
//				c.gotoxy(x, y + 2);
//				cout << a->get_vida_quartel(i + 1, j + 1);
//			}
//			if (a->get_blocos(i, j) == 3)
//			{
//				c.setTextColor(c.CINZENTO);
//				c.gotoxy(x, y);
//				cout << (char)176 << (char)176 << (char)176;
//				c.gotoxy(x, y + 1);
//				cout << "EST";
//				c.gotoxy(x, y + 2);
//				cout << a->get_vida_estabulo(i + 1, j + 1);
//			}
//			if (a->get_blocos(i, j) == 4)
//			{
//				c.setTextColor(c.CYAN);
//				c.gotoxy(x, y);
//				cout << (char)176 << (char)176 << (char)176;
//				c.gotoxy(x, y + 1);
//				cout << "F"<<a->get_num_quinta(i+1,j+1);
//				c.gotoxy(x, y + 2);
//				cout << a->get_vida_quinta(i + 1, j + 1);
//			}
//			if (a->get_blocos(i, j) == 5)
//			{
//				c.setTextColor(c.AZUL_CLARO);
//				c.gotoxy(x, y);
//				cout << (char)176 << (char)176 << (char)176;
//				c.gotoxy(x, y + 1);
//				cout << "P"<<a->get_num_campones(i+1,j+1);
//				c.gotoxy(x, y + 2);
//				cout << a->get_vida_campones(i+1, j+1);
//			}
//			if (a->get_blocos(i, j) == 6)
//			{
//				c.setTextColor(c.VERMELHO_CLARO);
//				c.gotoxy(x, y);
//				cout << (char)176 << (char)176 << (char)176;
//				c.gotoxy(x, y + 1);
//				cout << "S"<<a->get_num_soldado(i+1,j+1);
//				c.gotoxy(x, y + 2);
//				cout << a->get_vida_soldado(i + 1, y + 1);
//			}
//			if (a->get_blocos(i, j) == 7)
//			{
//				c.setTextColor(c.CYAN_CLARO);
//				c.gotoxy(x, y);
//				cout << (char)176 << (char)176 << (char)176;
//				c.gotoxy(x, y + 1);
//				cout << "K" << a->get_num_cavaleiro(i+1,j+1);
//				c.gotoxy(x, y + 2);
//				cout << a->get_vida_cavaleiro(i + 1, j + 1);
//			}
//			if (a->get_blocos(i, j) == 8)
//			{
//				c.setTextColor(c.VERDE_CLARO);
//				c.gotoxy(x, y);
//				cout << (char)176 << (char)176 << (char)176;
//				c.gotoxy(x, y + 1);
//				cout << "B"<<a->get_num_campones_cavaleiro(i+1,j+1);
//				c.gotoxy(x, y + 2);
//				cout << a->get_vida_campones_cavaleiro(i + 1, j + 1);
//			}
//			if (a->get_blocos(i, j) == 9)
//			{
//				c.setTextColor(c.AMARELO);
//				c.gotoxy(x, y);
//				cout << (char)176 << (char)176 << (char)176;
//				c.gotoxy(x, y + 1);
//				cout << "MIN";
//				c.gotoxy(x, y + 2);
//				cout << a->get_qtd_ouro_mina(i+1,j+1);
//			}
//			if (a->get_blocos(i, j) == 10)
//			{
//				c.setTextColor(c.CINZENTO);
//				c.gotoxy(x, y);
//				cout << (char)176 << (char)176 << (char)176;
//				c.gotoxy(x, y + 1);
//				cout << "PED";
//				c.gotoxy(x, y + 2);
//				cout << a->get_qtd_pedra_pedreira(i+1, j+1);
//			}
//			if (a->get_blocos(i, j) ==11)
//			{
//				c.setTextColor(c.VERDE);
//				c.gotoxy(x, y);
//				cout << (char)176 << (char)176 << (char)176;
//				c.gotoxy(x, y + 1);
//				cout << "FLO";
//				c.gotoxy(x, y + 2);
//				cout << a->get_qtd_madeira_floresta(i+1,j+1);
//			}
//			
//			
//			
//				//SOLDADO FRACO
//			if (a->get_blocos(i, j) == 20)
//			{
//				c.setTextColor(c.BRANCO_CLARO);
//				c.gotoxy(x, y);
//				cout << (char)176 << (char)176 << (char)176;
//				c.gotoxy(x, y + 1);
//				cout << "S" << a->get_num_soldado_fraco(i + 1, j + 1);
//				c.gotoxy(x, y + 2);
//				cout << a->get_vida_soldado_fraco(i + 1, y + 1);
//			}
//			x += 4;
//		}
//		y += 4;
//		x = 20;
//	}
//	
//	if (verifica != 0)
//	{
//		do
//		{
//			tecla = c.getch();
//			if (tecla == c.CIMA)
//			{
//				if (a->get_x_actual() > 0)
//				{
//					a->set_x_actual_decrementa(1);
//					desenha_mapa(a);
//				}
//			}
//			if (tecla == c.DIREITA)
//			{
//				if (a->get_y_actual() + 1 < a->get_colunas())
//				{
//					a->set_y_actual_incrementa(1);
//					desenha_mapa(a);
//				}
//			}
//			if (tecla == c.ESQUERDA)
//			{
//				if (a->get_y_actual() > 0)
//				{
//					a->set_y_actual_decrementa(1);
//					desenha_mapa(a);
//				}
//			}
//			if (tecla == c.BAIXO)
//			{
//				if (a->get_x_actual() + 1 < a->get_linhas())
//				{
//					a->set_x_actual_incrementa(1);
//					desenha_mapa(a);
//				}
//			}
//		} while (tecla != 99);
//		c.gotoxy(57, 10);
//		cout << "Madeira:" << a->get_qtd_madeira();
//		c.gotoxy(57, 11);
//		cout << "Pedra:" << a->get_qtd_pedra();
//		c.gotoxy(57, 12);
//		cout << "Ouro:" << a->get_qtd_ouro();
//
//		c.gotoxy(5, 47);
//		cout << ">comando: ";
//		getline(cin, buffer);
//		analisa_comandos1(buffer, a);
//	}
//}
//
//void comandos::carrega_ficheiro(string nome)
//{
//	territorio beta(0, 0);
//	int a = 0, b = 0;
//	int j = 0, tecla = 0;
//	Consola c;
//	string linha;
//	string buffer;
//	string *palavras;
//
//	palavras = new string[j];
//	ifstream fich(nome);
//
//	while (fich.peek() != EOF)
//	{
//		getline(fich, linha);
//		istringstream txtfich(linha);
//		string m;
//
//		txtfich >> m;
//		txtfich >> a;
//		txtfich >> b;
//
//		if (m == "mkgame")
//		{
//			territorio t(a, b);
//			beta = t;
//			verifica = 0;
//			analisa_comandos(linha);
//		}
//		else
//		{
//			analisa_comandos1(linha, &beta);
//		}
//	}
//	fich.close();
//	verifica = 1;
//	desenha_mapa(&beta);
//}