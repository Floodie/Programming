function test(msg)
{
	var log = document.getElementById("debuglog");

	if(!log){
		log = document.createElement("div");
		log.id = "debuglog";
		log.innerHTML = "<h1>Debug Log</h1>";
		document.body.appendChild(log);
	}

	var pre = document.createElement("pre");
	var text = document.createTextNode(msg);
	pre.appendChild(text);
	log.appendChild(pre);
}

function trn(RussianWord, JapanWord)
{
	words = document.createElement("div");
	words.className = "words";
	found.appendChild(words);

	var r = document.createElement("div");
	r.className = "russian";
	var text = document.createTextNode(RussianWord);
	r.appendChild(text);
	words.appendChild(r);

	var j = document.createElement("div");
	j.className = "japanese";
	var text = document.createTextNode(JapanWord);
	j.appendChild(text);
	words.appendChild(j);
}