# Glossaire

Termes spécifiques au domaine. À étoffer au fil du projet.

## Écosystème CoD / IW4

| Terme | Définition |
|---|---|
| **IW4** | Moteur (Infinity Ward 4) de Call of Duty: Modern Warfare 2 (2009). Fork du moteur id Tech 3 fortement modifié. |
| **IW4x** | Client open-source réimplémentant le multijoueur de MW2. https://github.com/iw4x/iw4x-client |
| **IW.net** | Service de matchmaking propriétaire d'Activision pour MW2. Coupé en 2014. |
| **GSC** | *Game Script* — langage de script propriétaire d'Infinity Ward, hérité d'id Tech. Style C/JS. Décrit la logique gameplay (IA, modes de jeu, événements de map). |
| **CSC** | *Client Script* — version client-side du GSC. |
| **IWD** | Format de pack de ressources MW2 (zip renommé). Contient assets, GSC compilés, cartes. |
| **FastFile (.ff)** | Format de bundle compilé contenant assets binaires + GSC compilé. |
| **DVAR** | *Dynamic Variable* — variable de configuration runtime (équivalent des cvars Quake). |
| **Plutonium** | Autre client communautaire pour MW2/MW3/BO2. Concurrent d'IW4x. |

## Reverse engineering — bases

| Terme | Définition |
|---|---|
| **PE / PE32** | *Portable Executable* — format de binaire Windows. PE32 = 32-bit. |
| **ELF** | Format de binaire Unix/Linux. |
| **ImageBase** | Adresse virtuelle préférée d'un PE (déclarée dans son header). Sous ASLR, le module est mappé ailleurs. |
| **ASLR** | *Address Space Layout Randomization* — randomisation des adresses de mapping à chaque exécution. |
| **RTTI** | *Run-Time Type Information* — métadonnées C++ permettant `dynamic_cast` et l'identification de classes au runtime. Donne souvent les noms de classes. |
| **VTable** | Table virtuelle — pointeurs vers les méthodes virtuelles d'une classe C++. Premier `void*` d'un objet C++ avec méthodes virtuelles. |
| **Pointer chain** | Suite `[base + off1] + off2 + ...` permettant de retrouver une adresse stable entre exécutions. |
| **Hooking** | Détourner l'exécution d'une fonction pour exécuter du code arbitraire avant/après/à la place. |
| **Trampoline** | Hook qui sauvegarde les premières instructions de la fonction pour pouvoir l'appeler malgré l'interception. |

## Wine / Linux

| Terme | Définition |
|---|---|
| **Préfixe Wine** | Dossier émulant un `C:\` Windows (`drive_c/`, `dosdevices/`, `system.reg`). |
| **wineserver** | Démon Wine gérant les objets noyau Windows (handles, threads, etc.). |
| **`/proc/<pid>/maps`** | Pseudo-fichier Linux listant tous les mappings mémoire d'un processus. |
| **`process_vm_readv` / `_writev`** | Syscalls Linux pour lire/écrire la mémoire d'un autre processus sans ptrace. |
| **`ptrace`** | Syscall classique de debugging — permet attache, lecture/écriture mémoire, contrôle des registres. |
