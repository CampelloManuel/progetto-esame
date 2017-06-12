#!/bin/bash

# script per generare, partendo dalla tesina, il file README.md per il sito
# statico del progetto. Non funziona su windows.

if [[ $(gem list --local | grep word-to-markdown) ]]; then
	rm README.md
	w2m ../tesina/tesina.docx > README.md
else
	echo "word-to-markdown non è installato"
	echo "provo a installarlo, poi riavvia lo script"
	sudo gem install word-to-markdown
fi
