#!/usr/bin/php
<?PHP

if ($argv[1] == "mais pourquoi cette demo ?")
{
	echo "Tout simplement pour qu'en feuilletant le sujet" . PHP_EOL;
	echo "on ne s'apercoive pas de la nature de l'exo" . PHP_EOL;
}
if ($argv[1] == "mais pourquoi cette chanson ?")
{
	echo "Parce que Kwame a des enfants" . PHP_EOL;
}
if ($argv[1] ==  "vraiment ?")
{
	if (file_exists("ok"))
	{
		echo "Nan c'est parce que c'est le premier avril" . PHP_EOL;
		unlink("ok");
	}
	else if (!file_exists("ok"))
	{
		echo "Oui il a vraiment des enfants" . PHP_EOL;
		fopen("ok", "w");
	}
}
