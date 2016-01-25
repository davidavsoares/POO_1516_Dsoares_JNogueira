#include "Nave.h"


Nave::Nave()
{
	string name;
	///////////////ADICIONA A TRIPULACAO INICIAL///////////////
	conta_tripulantes = 0;
	for (int i = 97; i < 100;i++)
	{
		name = (char)i;
		 Memb_Trip tripulantes(name); 
	}

	escudo = 100;
	estado_escudo = true;
	//tripulantes.  //(char)i  i=141

	//cout << tripulante.getOndeEstou()

}
void Nave::DesenhaNave(int x, int y, int tamanho)
{

	pos_x = x;
	pos_y = y;
	Tamanho = tamanho;
	int i, sala = 1, k, perc = 0;
	Consola c;

	c.setTextSize(20,20);
	c.setScreenSize(55, 85);  // linhas colunas. valores grandes pode nao dar
	c.setBackgroundColor(c.PRETO);  // favor consultar o .h para ver as constantes
	c.setTextColor(c.BRANCO_CLARO);
	c.clrscr();

	for (k = 0; k < 3; k++)
	{
		for (i = 0; i < 4; i++, perc++)
		{
			if (k != 1)
			{
				Quadrado(x + i * tamanho, y + k * tamanho/2, c, sala, tamanho);
				c.gotoxy(1 + x + i * tamanho,1 + y + k * tamanho / 2);
				salas[perc]->toStatus(c, 1 + x + i * tamanho, 1 + y + k * tamanho / 2);
			}
			else
			{
				Quadrado(x + (i + 1) * tamanho, y + k * tamanho / 2, c, sala, tamanho);
				c.gotoxy(1 + x + (i + 1) * tamanho, 1 + y + k * tamanho / 2);
				salas[perc]->toStatus(c, 1 + x + (i + 1) * tamanho, 1 + y + k * tamanho / 2);
			}
			sala++;
		}
	}

	DesenhaLog(c);
}
Nave::~Nave()
{
	for (unsigned int i = 0; i < salas.size(); i++)
		salas[i]->~Sala();

	salas.clear();
}
void Nave::Quadrado(int x,int y, Consola c, int sala,int tamanho) // CASO SEJA NECESSÀRIO: pode se criar a classe Sala que cria um quadrado, havendo um vector de salas na NAVE!
{
	//Consola c;  //passar por referencia, o prof so quer um por programa

	int tamx = tamanho, tamy = tamanho/2;
	
	int i = 0;

	if (sala == 1 || sala == 9)
	{
		c.gotoxy(x, y);	//Superior esquerdo
		cout << (char)201 << '\n';

		c.gotoxy(x, y + tamy);	//Inferior esquerdo
		cout << (char)200 << '\n';
	}
	else if (sala == 10)
	{
		c.gotoxy(x, y);	//Superior esquerdo
		cout << (char)206 << '\n';
	}
	if (sala == 4 || sala == 8)
	{
		c.gotoxy(x + tamx, y);	//Superior direito
		cout << (char)187 << '\n';
	}
	if (sala == 8 || sala == 12)
	{
		c.gotoxy(x + tamx, y + tamy);	//Inferior direito
		cout << (char)188 << '\n';
	}
	if (sala == 1 || sala == 2 || sala == 3)
	{
		c.gotoxy(x + tamx, y);	//Superior direito
		cout << (char)203 << '\n';
	}
	if (sala == 9 || sala == 10 || sala == 11)
	{
		c.gotoxy(x + tamx, y + tamy);	//Inferior direito
		cout << (char)202 << '\n';
	}
	if (sala == 1 || sala == 2 || sala == 3 || sala == 4 || sala == 5 || sala == 6 || sala == 7)
	{
		c.gotoxy(x + tamx, y + tamy);	//Inferior direito
		cout << (char)206 << '\n';
	}


	for (i = 1; i < tamy; i++)
	{
		c.gotoxy(x, y + i);			//Preenche a lateral esquerda
		cout << (char)186 << '\n';  //de um quadrado

		c.gotoxy(x + tamx, y + i);	//Preenche a lateral direita
		cout << (char)186 << '\n';		//de um quadrado
	}
	
	c.gotoxy(x + 1, y);							//Preenche o limite superior
	cout << Return_caracteres(205, tamx - 1);	//de um quadrado

	c.gotoxy(x + 1, y + tamy);					//Preenche o limite inferior
	cout << Return_caracteres(205, tamx - 1);	//de um quadrado
}
//void Nave::Quadrado(int x, int y, Consola c, int sala)
//{
//	//Consola c;  //passar por referencia, o prof so quer um por programa
//
//	int tamx = tamanho / 2;
//
//	int i = 0;
//
//	if (sala == 1 || sala == 9)
//	{
//		c.gotoxy(x, y);	//Superior esquerdo
//		cout << (char)201 << '\n';
//
//		c.gotoxy(x, y + tam);	//Inferior esquerdo
//		cout << (char)200 << '\n';
//	}
//	else if (sala == 10)
//	{
//		c.gotoxy(x, y);	//Superior esquerdo
//		cout << (char)206 << '\n';
//	}
//	if (sala == 4 || sala == 8)
//	{
//		c.gotoxy(x + 2 * tam, y);	//Superior direito
//		cout << (char)187 << '\n';
//	}
//	if (sala == 8 || sala == 12)
//	{
//		c.gotoxy(x + 2 * tam, y + tam);	//Inferior direito
//		cout << (char)188 << '\n';
//	}
//	if (sala == 1 || sala == 2 || sala == 3)
//	{
//		c.gotoxy(x + 2 * tam, y);	//Superior direito
//		cout << (char)203 << '\n';
//	}
//	if (sala == 9 || sala == 10 || sala == 11)
//	{
//		c.gotoxy(x + 2 * tam, y + tam);	//Inferior direito
//		cout << (char)202 << '\n';
//	}
//	if (sala == 1 || sala == 2 || sala == 3 || sala == 4 || sala == 5 || sala == 6 || sala == 7)
//	{
//		c.gotoxy(x + 2 * tam, y + tam);	//Inferior direito
//		cout << (char)206 << '\n';
//	}
//
//	//c.gotoxy(x, y);	//Superior esquerdo
//	//cout << (char)201 << '\n';
//
//	//c.gotoxy(x, y + tam);	//Inferior esquerdo
//	//cout << (char)200 << '\n';
//
//	//c.gotoxy(x + 2 * tam, y);	//Superior direito
//	//cout << (char)206 << '\n';
//
//	//c.gotoxy(x + 2 * tam, y + tam);	//Inferior direito
//	//cout << (char)206 << '\n';
//
//
//	for (i = 1; i < tam; i++)
//	{
//
//		c.gotoxy(x, y + i);			//Preenche a lateral esquerda
//		cout << (char)186 << '\n';  //de um quadrado
//
//									//if (sala == 4 || sala == 8 || sala == 12)
//									//{
//									//	c.gotoxy(x + 2 * tam, y + i);	//Preenche a lateral direita
//									//	cout << (char)186 << '\n';		//de um quadrado
//									//}
//
//		c.gotoxy(x + 2 * tam, y + i);	//Preenche a lateral direita
//		cout << (char)186 << '\n';		//de um quadrado
//	}
//	for (i = 1; i < 2 * tam; i++)
//	{
//		c.gotoxy(x + i, y);				//Preenche o limite superior
//		cout << (char)205 << '\n';		//de um quadrado
//
//										//if (sala == 1 || sala == 8 || sala == 9 || sala == 10 || sala == 11 || sala == 12)
//										//{
//										//	c.gotoxy(x + i, y + tam);		//Preenche o limite inferior
//										//	cout << (char)205 << '\n';		//de um quadrado
//										//}
//
//		c.gotoxy(x + i, y + tam);		//Preenche o limite inferior
//		cout << (char)205 << '\n';		//de um quadrado
//	}
//
//	//// lateral esquerda
//	//c.gotoxy(x, y);
//	//cout << (char)201 << '\n';
//	//c.gotoxy(x, y + 1);
//	//cout << (char)186 << '\n';
//	//c.gotoxy(x, y + 2);
//	//cout << (char)186 << '\n';
//	//c.gotoxy(x, y + 3);
//	//cout << (char)186 << '\n';
//	//c.gotoxy(x, y + 4);
//	//cout << (char)186 << '\n';
//	//c.gotoxy(x, y + 5);
//	//cout << (char)200 << '\n';
//
//	//// lateral direita
//	//c.gotoxy(x + konst, y);
//	//cout << (char)203 << '\n';
//	//c.gotoxy(x + konst, y + 1);
//	//cout << (char)186 << '\n';
//	//c.gotoxy(x + konst, y + 2);
//	//cout << (char)186 << '\n';
//	//c.gotoxy(x + konst, y + 3);
//	//cout << (char)186 << '\n';
//	//c.gotoxy(x + konst, y + 4);
//	//cout << (char)186 << '\n';
//	//c.gotoxy(x + konst, y + 5);
//	//cout << (char)202 << '\n';
//
//	//// Limite superior
//
//	//c.gotoxy(9, 7);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(10, 7);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(11, 7);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(12, 7);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(13, 7);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(14, 7);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(15, 7);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(16, 7);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(17, 7);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(18, 7);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(19, 7);
//	//cout << (char)205 << '\n';
//
//	//// Limite inferior
//
//	//c.gotoxy(9, 12);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(10, 12);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(11, 12);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(12, 12);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(13, 12);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(14, 12);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(15, 12);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(16, 12);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(17, 12);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(18, 12);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(19, 12);
//	//cout << (char)205 << '\n';
//
//
//	cout << endl << endl;
//}

void Nave::adiciona(Sala *p)
{
	this->salas.push_back(p);
	salas.back()->setOndeEstou(this);
}

void Nave::adiciona(Sala *p, int posicao)
{
	this->salas.insert(salas.begin() + posicao, p);
	salas.back()->setOndeEstou(this);
}

string Nave::toString() const
{
	ostringstream oss;
	
	for (unsigned int i = 0; i < salas.size(); i++)
	oss << " Integridade: " << salas[i] -> getIntegridade() << endl << " Saude : "/* << salas[i] -> getSaude() */<< endl << " Oxigenio : " << salas[i] -> getOxigenio() << endl;
	return oss.str();
}

void Nave::incrementa_propulsores()		// Possivelmente desnecessário
{
	conta_propulsores++;
}

void Nave::MoveTripulante(string nome, int room)		//Faltam validaçoes 
{
	int salaDefi, actual, numUni;
	for (unsigned int i = 0; i < salas.size(); i++)
			{
				if (salas[i]->getId() == room)
					salaDefi = i;
				
				if(numUni = salas[i]->procura(nome) != -1)	// Procura a unidade que tem o nome passado por argumento retorna -1 se a unidade nao estiver na sala
				{
					 //salas[i]->procura(nome);
					actual = i;						// guarda o [i] da sala onde se encontra a unidade pretendida
				}
			}
	if (salas[actual]->Comunica_indecisao(nome) != 1)	// Analisa se a unidade esta indecisa
	{
		salas[salaDefi]->adiciona(salas[actual]->RetornaLocal(nome)); //deve ter um ponteiro de unidades
		salas[actual]->remove(nome);
	}
	else if(rand() % 101 > 50)		// faz um numero aleatorio entre 0 e 100, se este for maior que 50 permite que a unidade seja movida
	{
		salas[salaDefi]->adiciona(salas[actual]->RetornaLocal(nome)); //deve ter um ponteiro de unidades
		salas[actual]->remove(nome);
	}

	//salas[salaDefi]->adiciona // Adiciona a unidade á sala para onde move
	
}

int Nave::getX()
{
	return this->pos_x;
}

int Nave::getY()
{
	return this->pos_y;
}

int Nave::getTamanho()
{
	return this->Tamanho;
}

void Nave::incrementa_tripulantes()
{
	conta_tripulantes++;
}

int Nave::GetConta_tripulantes()
{
	return conta_tripulantes;
}

string Nave::getCharTrip()// De forma a todos os tripulantes terem um nome diferente retorna o char seguinta da tabela ASCII
{

	ostringstream oss;

	oss << (char)(97 + conta_tripulantes);

	return oss.str();
}  

void Nave::actualiza_distancia()
{
	
	if (salas[7]->getOperadores() > 0)
	{
		if (salas[7]->getIntegridade() == 100 && salas[4]->getIntegridade() == 100)	
		{
			for (unsigned int i = 0; i < salas.size(); i++)
			{
				if (salas[i]->getNome() == "Propulsor")
				{
					
					distancia+=salas[i]->getIntegridade();
					/*cout <<"dist: "<< distancia;*/
				}
			}
		}
	}
}

void Nave::Adiciona_tripulante(int id)
{
	salas[id-1]->adiciona(new Memb_Trip(getCharTrip()));
	incrementa_tripulantes();
}

int Nave::getDistancia() const
{
	return distancia;
}

void Nave::DesenhaLog(Consola &c)
{
	int x = X_LOG, y = Y_LOG;
	

	c.gotoxy(x, y - 4);
	cout <<"------LOG DO JOGO------";
	
	c.gotoxy(x, y - 2);
	if (turno < 10)
		cout << "-----TURNO : [0" << turno << "]-----";
	else
		cout << "-----TURNO : " << turno << "--------";
	c.gotoxy(x,y);
	cout << " Distancia : [" << distancia << "]";
	int pos = 1, temp;
	for (unsigned int i = 0; i < salas.size(); i++)
	{
		temp = pos;
		if (salas[i]->getNUnidades() != 0)
		{
			c.gotoxy(x, y + 1 + i);
			pos =salas[i]->toString(c, x, y + 1 + pos);
			pos = temp + pos;
		}
		
		Sleep(75);
	}
	Bordas(X_LOG - 1, Y_LOG - 5, X_LOG + 23, Y_LOG + pos, c);
}

void Nave::Repara_salas()
{
	for (unsigned int i = 0; i < salas.size(); i++)
	{
		if (salas[i]->getIntegridade() < 100)
		{
			salas[i]->repara();
		}
	}
}

void Nave::Decrementa_oxigenio()
{
	for (unsigned int i = 0; i < salas.size(); i++)
	{
			salas[i]->Consome_oxigenio();
	}
}

void Nave::Auto_Repara()
{
	for (unsigned int i = 0; i < salas.size(); i++)
	{
		if (salas[i]->getNome() == "Auto Reparador" && salas[i]->getIntegridade() == 100)
		{

				if (i + 1 < salas.size() && salas[i + 1]->getId() != 5 && salas[i + 1]->getNome() != "Propulsor")	//Incrementa em 5 a integridade da sala seguinte
				{

					Reparador(i + 1, 5);
				}
				if (salas[i - 1]->getNome() != "Propulsor" && salas[i - 1]->getId() != 7)
				{

					Reparador(i - 1, 5);
				}
				if ((i == 1 || i == 2 || i == 3) && salas[i + 3]->getNome() != "Propulsor")
				{
					Reparador(i + 3, 5);
				}
				else if (salas[i - 5]->getNome() != "Propulsor")
					Reparador(i - 5, 5);			
		}
	}
	
}

void Nave::Reparador(int i, int soma)		//Função que repara a quantidade de integridade passada por argumento indicando na posicao i da sala no vector, 
{
	salas[i]->setIntegridade(salas[i]->getIntegridade() + soma);

	if (salas[i]->getIntegridade() > 100)
		salas[i]->setIntegridade(100);
}

void Nave::Seguranca_Interna()		//NAO ESTA TESTADOo
{
	for (unsigned int i = 0; i < salas.size(); i++)
	{
		if (salas[i]->getNome() == "Sistena Seguranca" && salas[i]->getIntegridade() == 100)
		{
			if (salas[i]->getCombate() == 1)
			{
				salas[i]->Magoa_inimigos(1);
			}
			if (i + 1 < salas.size() && salas[i + 1]->getId() != 5 && salas[i + 1]->getCombate() == 1)	//Incrementa em 5 a integridade da sala seguinte
			{
				salas[i+1]->Magoa_inimigos(1);
				
			}
			if (salas[i - 1]->getId() != 7 && salas[i - 1]->getCombate() == 1)
			{
				salas[i-1]->Magoa_inimigos(1);
			}
			if ((i == 1 || i == 2 || i == 3) && salas[i + 3]->getCombate() == 1)
			{
				salas[i+3]->Magoa_inimigos(1);
			}
			else if(salas[i-5]->getCombate() == 1)
			{
				salas[i-5]->Magoa_inimigos(1);
			}
				
		}
	}

}



//void Nave::Analisa_Combates()
//{
//	int combate = 0;
//	for (unsigned int i = 0; i < salas.size(); i++)
//	{
//		combate = salas[i]->getCombate();
//	}
//}



void Nave::chama_regeneradores()
{
	for (unsigned int i = 0; i < salas.size(); i++)
	{
		salas[i]->Chama_regeneradores();
	}
}

void Nave::MAGOATESTE(string nome, int room)		//Faltam validaçoes 
{
	int  actual, numUni;
	for (unsigned int i = 0; i < salas.size(); i++)
	{

		if (numUni = salas[i]->procura(nome) != -1)	// Procura a unidade que tem o nome passado por argumento retorna -1 se a unidade nao estiver na sala
		{
			//salas[i]->procura(nome);
			actual = i;						// guarda o [i] da sala onde se encontra a unidade pretendida
		}
	}
	salas[actual]->Magoa_para_testes(nome, room); //deve ter um ponteiro de unidades

}

void Nave::Bordas(int X, int Y, int Xmax, int Ymax, Consola &c)
{

	c.gotoxy(X, Y);
	cout << (char)218;

	c.gotoxy(X, Ymax);
	cout << (char)192;

	c.gotoxy(Xmax, Y);
	cout << (char)191;

	c.gotoxy(Xmax, Ymax);
	cout << (char)217;
	
	for (int i = Y+1; i < Ymax; i++)
	{
		c.gotoxy(X, i);
		cout << (char)179;
		c.gotoxy(Xmax, i);
		cout << (char)179;
	}
		c.gotoxy(X+1, Y);
		cout << Return_caracteres(196, Xmax - (X+1) );
		c.gotoxy(X+1, Ymax);
		cout << Return_caracteres(196, Xmax - (X + 1));
}

void Nave::setTurno(int turno)
{
	this->turno = turno;
}

int Nave::getTurno()
{
	return this->turno;
}

string Nave::Return_caracteres(int caracter, int quantidade)
{
	ostringstream oss;
	for (int i = 0; i < quantidade; i++)
	{
		oss << (char)caracter;
	}
	return oss.str();
}

void Nave::faz_evento()
{
	static int ultimo_evento = 1;
	int evento = 0;

	turno = getTurno();

	if ((turno - ultimo_evento > 5) && (rand() % 101 < 20))
	{
		evento = (rand() % 4) + 1;
		switch (evento)
		{
		case 1: evento_meteoritos(); break;
		case 2: evento_piratas(); break;
		case 3: evento_xenomorfo(); break;
		case 4: evento_cosmico(); break;
		default: cout << "ERRO" << endl; break;
		}
		ultimo_evento = turno;
	}
	else
	{
		if ((turno - ultimo_evento) == 10)
		{
			evento = (rand() % 4) + 1;
			switch (evento)
			{
			case 1: evento_meteoritos(); break;
			case 2: evento_piratas(); break;
			case 3: evento_xenomorfo(); break;
			case 4: evento_cosmico(); break;
			default: cout << "ERRO" << endl; break;
			}
			ultimo_evento = turno;
		}
	}
}

void Nave::MutatisMutandis()
{

	for (unsigned int i = 0; i < salas.size(); i++)
	{
		if (rand() % 101 < salas[i]->Comunica_MMutandis() > 0 /*&&  salas[i]->Comunica_MMutandis()*/)
		{
			adiciona( new Auto_Reparador(*salas[i]), salas[i]->getId());
			remove(salas[i]->getId());
		}
	}
}

void Nave::remove(int id)
{
	int val = this->procura(id);
	salas[val]->~Sala();
	if (val != -1)
	{
		this->salas[val]->setOndeEstou(nullptr);
		salas.erase(salas.begin() + val);
	}
}

int Nave::procura(int id) const
{
	for (unsigned int i = 0; i < salas.size(); i++) {
		if (salas[i]->getId() == id)
			return i;
	}
	return -1;
}

int Nave::procura(string nome) const
{
	for (unsigned int i = 0; i < salas.size(); i++) {
		if (salas[i]->getNome() == nome)
			return i;
	}
	return -1;
}


//----------Evento Meteoritos------------ -           FALTA TESTAR TODOS OS EVENTOS

void Nave::evento_meteoritos()		//COnsideramos raios laser 1 ou mais?

{								//FALTA ANALISAR SE O RAIO LASER ESTA A SER OPERADO USAR FUNCAO GET_OPERADORES DA SALA
	int num_meteoritos = 0;
	int percentagem = 40;
	int dano_sala;
	int sala_afectada;

	laser = false;

	if (salas[7]->getOperadores() > 0)
	{
		num_meteoritos = ((rand() % 4) + 1) + 4;
		for (int i = 0; i < salas.size(); i++)
		{
			if (salas[i]->getNome() == "Raio Laser")
			{
				if(salas[i]->getOperadores() > 0)
				{ 
					laser = true;
					percentagem += 10;
				}
				
			}
		}

		for (int i = 0; i < num_meteoritos; i++)
		{
			if (laser == false)
			{
				if (estado_escudo == true)
				{
					escudo -= 10;
					if (escudo < 0)
					{
						dano_sala = escudo * (-1);
						escudo = 0;
						estado_escudo = false;
						
						sala_afectada = rand() % 12;
						salas[sala_afectada]->setIntegridade(salas[sala_afectada]->getIntegridade() - dano_sala);
						salas[sala_afectada]->setBrecha(true);
					}
				}
				else
				{
					dano_sala = 10;

					sala_afectada = rand() % 12;
					salas[sala_afectada]->setIntegridade(salas[sala_afectada]->getIntegridade() - dano_sala);
					salas[sala_afectada]->setBrecha(true);
				}
			}
			else
			{
				if (laser == true)
				{
					if (rand() % 101 > percentagem) 
					{
						if (estado_escudo == true)
						{
							escudo -= 10;
							if (escudo < 0)
							{
								dano_sala = escudo * (-1);
								escudo = 0;
								estado_escudo = false;

								sala_afectada = rand() % 12;
								salas[sala_afectada]->setIntegridade(salas[sala_afectada]->getIntegridade() - dano_sala);
								salas[sala_afectada]->setBrecha(true);
							}
						}
						else
						{
							dano_sala = 10;

							sala_afectada = rand() % 12;
							salas[sala_afectada]->setIntegridade(salas[sala_afectada]->getIntegridade() - dano_sala);
							salas[sala_afectada]->setBrecha(true);
						}
					}
				}
			}
		}
	}
	else
	{
		num_meteoritos = ((rand() % 6) + 1) + 6;
		for (int i = 0; i < salas.size(); i++)
		{
			if (salas[i]->getNome() == "Raio Laser")
			{
				if (salas[i]->getOperadores() > 0)
				{
					laser = true;
					percentagem += 10;
				}

			}
		}

		for (int i = 0; i < num_meteoritos; i++)
		{
			if (laser == false)
			{
				if (estado_escudo == true)
				{
					escudo -= 10;
					if (escudo < 0)
					{
						dano_sala = escudo * (-1);
						escudo = 0;
						estado_escudo = false;

						sala_afectada = rand() % 12;
						salas[sala_afectada]->setIntegridade(salas[sala_afectada]->getIntegridade() - dano_sala);
						salas[sala_afectada]->setBrecha(true);
					}
				}
				else
				{
					dano_sala = 10;

					sala_afectada = rand() % 12;
					salas[sala_afectada]->setIntegridade(salas[sala_afectada]->getIntegridade() - dano_sala);
					salas[sala_afectada]->setBrecha(true);
				}
			}
			else
			{
				if (laser == true)
				{
					if (rand() % 101 > percentagem)
					{
						if (estado_escudo == true)
						{
							escudo -= 10;
							if (escudo < 0)
							{
								dano_sala = escudo * (-1);
								escudo = 0;
								estado_escudo = false;

								sala_afectada = rand() % 12;
								salas[sala_afectada]->setIntegridade(salas[sala_afectada]->getIntegridade() - dano_sala);
								salas[sala_afectada]->setBrecha(true);
							}
						}
						else
						{
							dano_sala = 10;

							sala_afectada = rand() % 12;
							salas[sala_afectada]->setIntegridade(salas[sala_afectada]->getIntegridade() - dano_sala);
							salas[sala_afectada]->setBrecha(true);
						}
					}
				}
			}
		}
	}
}

//----------Evento Piratas---------------------------------------------------------------------------- -

void Nave::evento_piratas() // falta por os piratas a aparecer numa sala aleatoria
{

	int dano;
	int dano_sala;
	int sala_afectada;
	int evento_aleatorio;
	int sala_invadida;
	int num_piratas;

	laser = false;
	dano = rand() % 30 + 30;

	if (estado_escudo == true)
	{
		escudo -= dano;
		if (escudo < 0)
		{
			dano_sala = escudo *(-1);
			escudo = 0;
			estado_escudo = false;

			sala_afectada = rand() % 12;
			salas[sala_afectada]->setIntegridade(salas[sala_afectada]->getIntegridade() - dano_sala);

			evento_aleatorio = (rand() % 3) + 1;
			switch (evento_aleatorio)
			{
			case 1: salas[sala_afectada]->setBrecha(true); break;
			case 2: salas[sala_afectada]->setCurtoCircuito(true); break;
			case 3: salas[sala_afectada]->setFogo(true); break;
			default:
				break;
			}
		}
	}

	for (int i = 0; i < salas.size(); i++)
	{
		if (salas[i]->getNome() == "Raio Laser")
		{
			laser = true;
			break;
		}
	}

	if (laser == false)
	{
		sala_invadida = rand() % 12;
		num_piratas = (rand() % 3) + 3;
		
		for (int i = 0; i < num_piratas; i++)
		{
			salas[sala_invadida]->adiciona(new Pirata("P"));
		}
	}
} 

//----------Evento Xenomorfo------------ -

void Nave::evento_xenomorfo() // falta por um xenomorfo a aparecer numa sala aleatoria
{
	int sala_invadida;
	int opcao;
	ostringstream oss;
	
	sala_invadida = rand() % 12;
	opcao = (rand() % 3) + 1;

	switch (opcao)
	{
	case 1: oss << (char)(176); salas[sala_invadida]->adiciona(new Geigermorfo(oss.str())); break;
	case 2: oss << (char)(233); salas[sala_invadida]->adiciona(new Blob(oss.str())); break;
	case 3: oss << (char)(157); salas[sala_invadida]->adiciona(new Mxyzypykwi(oss.str())); break;
	default: break;
	}
	
}

//----------Evento Cosmico------------ -

void Nave::evento_cosmico()
{
	int n_salas = 0;
	int sala_danificada;

	n_salas = (rand() % 3) + 3;

	for (int i = 0; i < n_salas; i++)
	{
		sala_danificada = rand() % 12;
		salas[sala_danificada]->setIntegridade(salas[sala_danificada]->getIntegridade() - 10);
	}
}

//-------------Verifica integridade---------
void Nave::verifica_integridade()
{
	for (int i = 0; i < salas.size(); i++)
	{
		if (salas[i]->getIntegridade() <= 0)
		{
			cout << "termina o jogo" << endl;
		}
	}
}

void Nave::setDificuldade(int x)
{
	dificuldade = x;
}

void Nave::serDistanciaTotal()
{
	distancia_total = (4000 + 1000 * (dificuldade));
}

int Nave::getDificuldade()const
{
	return dificuldade;
}

int Nave::getDistanciaTotal()const
{
	return distancia_total;
}
