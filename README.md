## Progetto regolazione cogeneratore, di *Campello & Fusco*
Progetto Arduino e tesina per l'esame. Per saperne di più: [bit.ly/cogeneratore](https://bit.ly/cogeneratore)

### Come installare e usare il Simulatore
è possibile scaricare il simulatore di Arduino per windows a [questo indirizzo](https://www.sites.google.com/site/unoardusim/services).

Questo progetto fornisce anche un file di configurazione per i dispositivi simulati, per lavorare in un ambiente standardizzato.

Inserisci il file myArduPrefs.txt nella cartella del simulatore, e apri il file di configurazione dei dispositivi con il programma, dalla sezione I/O devices.


## Licenza
Gli sketch di arduino vengono distribuiti sotto licenza GNU GPL v3.
Gli altri file di testo o di configurazione sono di dominio pubblico.
Vedi file LICENSE. Puoi consultare una copia online della licenza all'indirizzo https://www.gnu.org/licenses/gpl-3.0-standalone.html

### librerie richieste
[Arduino IR remote](https://github.com/z3t0/Arduino-IRremote) : la versione compresa nell'ide di arduino non funziona

### Risorse
* __ARDUINO THE BEST__ https://www.youtube.com/channel/UCnneOHtpaSsYQQd1LTStLbg
* __PODERAK__ https://www.youtube.com/user/MartinoLutero
* __MGELETTRONICA__ https://www.youtube.com/user/MGElettronica
* http://www.mauroalfieri.it/corso-arduino-on-line.html

### Sito web del progetto
Disponibile all'indirizzo https://manulinkraft.github.io/progetto-esame/ (in fase provvisoria).  
la pagina serve un file "README.md" convertito dalla tesina in word con lo script `compila.sh` nella cartella `docs/`  
con qualche ritocco a mano, esteticamente necessario

## Collegamenti elettrici
schema di collegamento dei cavi nell'ethernet:
* scatola relè:
	* blu-bianco -> terra (0 volt)
	* verde -> segnale di comando 
	* verde-bianco -> 5 volt
* servomotore:
	* marrone -> 5volt
	* marrone-bianco -> segnale comando
	* blu -> terra (0 volt)
* alternatore:
	* arancione -> questi due cavi hanno una ddp proporzionale ai giri dell'alternatore
	* arancionebianco
