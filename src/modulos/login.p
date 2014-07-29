/*
	login.p
	criador: BlueX
	descrição: Este é o modulo que contem o sistema de login.
*/

forward Login_OnPlayerConnect(playerid);
forward Login_OnPlayerDisconnect(playerid);
forward Login_AutoSave(playerid);

public Login_OnPlayerConnect(playerid)
{
	//procuramos se o jogador existe
	return 1;
}

public Login_OnPlayerDisconnect(playerid)
{
	//gravamos os dados do jogador.
	return 1;
}

public Login_AutoSave(playerid)
{
	//salvamos a conta do jogador automaticamente de X em X tempo.
	return 1;
}
