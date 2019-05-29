#include <iostream>
#include <windows.h>
#include "conio.h"

using namespace std;

int main()
{
	int x;
	char a;
	
	cout << "Para se conseguir um bom queijo, deve-se empregar leite puro, fresco e filtrado." << endl;
    Sleep(2000);
    cout << "O leite passou nos teste de acidez, integridade e estado higienico?" << endl;
    cout << "Se sim, digite 1" << endl << "Se nao, digite 0" << endl;
    cin >> x;

	if(x != 1){
		cout << "O leite passa pela filtracao e outros procedimentos de limpeza..." <<endl;
		Sleep(2000);
	}
	else{}
    cout << "Para os processos abaixo, pressione ENTER para prosseguir!" <<endl;
    Sleep(2000);
    
    cout << "Fermentar?" << endl;
    a = getch();
    cout << "Fermento latico adicionado ao leite. Sendo que o fermento deve estar bem homogeneo, sem grumos de coagulo, para uma perfeita distribuição no leite." <<endl<<endl;
    Sleep(2000);
    
    cout << "Pasteurizar?" << endl;
    a = getch();
    cout << "Leite sendo pasteurizado..." << endl;
	Sleep(2000);
	cout << "Leite pasteurizado!" << endl;
	
	Sleep(2000);
    cout << "Cloreto de calcio adicionado para suprir a deficiencia de calcio soluvel, perdido na pasteurização." <<endl;
	Sleep(2000);
	
	cout << "Adicionar corante? (Alguns queijos recebem corante, como o queijo prato!)" <<endl;
	cout << "Se sim, digite 1" << endl << "Se nao, digite 0" << endl;
    cin >> x;
    if(x == 1){
    cout << "Corante adicionado!" << endl;
	}
	else{}
	cout<<endl;	
	Sleep(2000);
	
	cout << "Coagular?" << endl;
    a = getch();
    cout << "Coalho(Agente coagulante) adicionado!" << endl;
	Sleep(2000);
	
	cout << "Separar soro?" << endl;
    a = getch();
    cout << "Corte da coalhada e Mexedura feitas!" << endl;
    Sleep(2000);
    cout << "Dessoragem feita!" << endl;
    Sleep(2000);
    
    cout << "Partir para os processos finais... Pressione ENTER!" << endl;
    a = getch();
    cout << "Enformagem: A massa e colocada em formas..." << endl;
    Sleep(2000); 
    cout << "Prensagem manual: A massa e prensada para tirar o excesso de soro..." << endl;
    Sleep(2000);
	cout << "Salgando o queijo..." << endl;
    Sleep(2000);
	cout << "Maturando ..." << endl;
    Sleep(2000);
	cout << "Limpando e Sanitizando o queijo..." << endl;
	Sleep(2000);
	cout << "O queijo está pronto para ser consumido!!" << endl;
         
 	a = getch();
	return 0;
}