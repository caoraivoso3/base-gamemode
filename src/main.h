/*

	main.h
	
	criador: BlueX
	descrição: Este ficheiro serve para a definição de constantes, enumerações e
	variaveis globais.

*/

new
	const
	C_MAX_PLAYERS = 500, //altere de acordo com o máximo de slots existentes.
	C_IP_LEN = 16 //tamanho da string do ip
;

//enumeração
enum ENUM_PLAYER_INFO
{
	//identificação
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
