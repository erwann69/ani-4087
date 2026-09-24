
Exercice 27 : L'appareil que Jenga ne voit pas
Le montage

Un seul téléphone Android branché sur Windows avec Jenga.

Pour provoquer l'état unauthorized :

Débranchez l'appareil
Allez dans Options de développement → Révoquez les autorisations de débogage USB
Rebranchez l'appareil
Ne touchez PAS à la boîte de dialogue « Autoriser le débogage USB ? » qui apparaît

Il faut relancer le serveur adb pour que le téléphone rebranché apparaisse :

bash
adb kill-server
adb start-server
État unauthorized : Jenga vs adb
Ce que dit Jenga
jenga deploy --platform android --list-devices --detailed
No Android device connected.
Ce que dit adb
adb devices
List of devices attached
[SERIAL]     unauthorized

Jenga dit qu'il n'y a rien, mais adb voit le téléphone branché !

Après avoir accepté l'autorisation
Ce que dit Jenga
jenga deploy --platform android --list-devices --detailed
SERIAL       MARQUE   MODELE    ANDROID  ABI
[SERIAL]     [brand]  [model]   15       arm64-v8a
Ce que dit adb
adb devices
List of devices attached
[SERIAL]     device

Maintenant tout le monde voit le téléphone.

Explication et amélioration du message

Pourquoi c'est trompeur : Jenga dit « No Android device connected » alors que le téléphone EST branché et vu par adb — il n'attend qu'une autorisation sur l'écran, mais le message de Jenga ne le dit pas, ce qui pousse à chercher la panne dans le câble ou le port.

Ce que j'aurais écrit à sa place :

1 appareil branché mais inutilisable :
  [SERIAL]  unauthorized  -> acceptez « Autoriser le débogage USB ? » sur le téléphone
Aucun appareil prêt.

Cela distinguerait les trois cas :

Rien branché du tout
Branché mais pas autorisé (action requise)
Branché et autorisé (prêt à l'emploi)
