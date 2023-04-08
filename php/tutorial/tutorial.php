#!/usr/bin/php
<?PHP

function add_numbers($p1, $p2)
{
	return $p1 + $p2;
}

$my_var = 42;
$my_string = "Hello world!\n";
$my_array = array("goarga", "jfazakas", "azaha");
$my_keys = array("key1" => "oarga", "key2" => "jfazakas", "key3" => "azaha");

$result = add_numbers(22, 20);

echo $result."\n";

if ($my_array[1] == "jfazakas")
	echo "jfazakas\n";
else
	echo "nem jo\n";

echo "There are $argc arguments\n";

foreach($argv as $elem)
	echo "$elem\n";

?>
