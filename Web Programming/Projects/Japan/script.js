function hide(hideE, unhideE)
{
	document.getElementById(hideE+"table").style.display = "none";
	document.getElementById(unhideE+"table").style.display = "table";
	document.getElementById(hideE).className = "passive change";
	document.getElementById(unhideE).className = "active change";
}