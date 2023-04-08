#!/usr/bin/php
<?PHP

function check_if_odd_even($var)
{
	if ($var % 2 == 0)
		echo "Le chiffre $var est Pair".PHP_EOL;
	else
		echo "Le chiffre $var est Impair".PHP_EOL;
}

echo "Entrez un nombre: ";
while (is_string($input = fgets(STDIN)) != false)
{
	$copy = trim($input, "\n");
	if (is_numeric($copy))
		check_if_odd_even($copy);
	else
		echo "'$copy' n'est pas un chiffre".PHP_EOL;
	echo "Entrez un nombre: ";
}
echo PHP_EOL;
