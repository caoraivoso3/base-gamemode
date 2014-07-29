/*

	main.h
	
	criador: BlueX
	descri��o: Este ficheiro serve para a defini��o de constantes, enumera��es e
	variaveis globais.

*/

new
	const
	C_MAX_PLAYERS = 500, //altere de acordo com o m�ximo de slots existentes.
	C_IP_LEN = 16 //tamanho da string do ip
;

//enumera��o
enum ENUM_PLAYER_INFO
{
	//identifica��o
	player_id,
	player_name[MAX_PLAYER_NAME],
	player_ip[C_IP_LEN],

	//servidor
	player_level,
	player_kills,
	player_deaths
};

new
	gPlayerInfo[C_MAX_PLAYERS][ENUM_PLAYER_INFO];
