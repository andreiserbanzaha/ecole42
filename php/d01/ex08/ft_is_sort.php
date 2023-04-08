<?PHP

function ft_is_sort($tab)
{
	$sorted = $tab;
	sort($sorted);
	if ($tab != $sorted)
		return (false);
	return (true);
}
