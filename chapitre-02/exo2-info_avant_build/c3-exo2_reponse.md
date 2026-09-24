
Exercice 2 : Info avant build
Sortie de la commande jenga info
text
C:\Users\erwan\ani-4087\chapitre-02\exo1-le_projet_minimal>jenga info

╔══════════════════════════════════════════════════════════════════╗
║                                                                  ║
║                ██╗███████╗███╗   ██╗ ██████╗  █████╗             ║
║                ██║██╔════╝████╗  ██║██╔════╝ ██╔══██╗            ║
║                ██║█████╗  ██╔██╗ ██║██║  ███╗███████║            ║
║           ██   ██║██╔══╝  ██║╚██╗██║██║   ██║██╔══██║            ║
║           ╚█████╔╝███████╗██║ ╚████║╚██████╔╝██║  ██║            ║
║            ╚════╝ ╚══════╝╚═╝  ╚═══╝ ╚═════╝ ╚═╝  ╚═╝            ║
║                                                                  ║
║             Multi-platform C/C++ Build System v2.8.1             ║
║                                                                  ║
╚══════════════════════════════════════════════════════════════════╝

========================= Jenga Workspace: MaSalleWks ==========================

Location: C:\Users\erwan\ani-4087\chapitre-02\exo1-le_projet_minimal
Entry file: C:\Users\erwan\ani-4087\chapitre-02\exo1-le_projet_minimal\MaSalle.jenga
Configurations: Debug, Release
Platforms: Windows
Target OSes: 
Target Architectures: 


Projects
------------------------------------------------------------
Name      Kind          Language   Test   External
==================================================
MaSalle   WindowedApp   C++        No     No


Available Toolchains
------------------------------------------------------------
Name       Family   Target OS   Arch     Env  
==============================================
host-gcc   gcc      Windows     x86_64   mingw
mingw      gcc      Windows     x86_64   mingw


Daemon
------------------------------------------------------------
Status: Not running
Ce que jenga info nous apprend de plus
1. Structure du projet
Un seul projet nommé MaSalle de type WindowedApp (application avec fenêtre)
Écrit en C++
Pas de tests configurés (Test: No)
Pas de dépendances externes (External: No)
2. Chaînes de compilation disponibles

Deux toolchains sont disponibles pour compiler le projet :

host-gcc : GCC, cible Windows, Architecture x86_64, environnement mingw
mingw : GCC, cible Windows, Architecture x86_64, environnement mingw

Ces deux chaînes permettront le build sans erreur de compilation.

3. État du daemon
Status: Not running : Le daemon Jenga (le processus qui gère les builds en arrière-plan) n'est pas actif actuellement.

Le fichier .jenga ne dit rien sur ces détails d'exécution. jenga info les déduit en analysant le workspace et en inspectant l'environnement système.
