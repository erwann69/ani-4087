Comparaison des résultats : Mode Debug vs Mode Release
| Caractéristique | Mode Debug | Mode Release |
| :--- | :--- | :--- |
| **Fichier cible généré** | `Build\Bin\Debug-Windows\MaSalle\MaSalle.exe` | `Build\Bin\Release-Windows\MaSalle\MaSalle.exe` |
| **Taille de l'exécutable** | 59 735 octets (~59,7 Ko) | 59 735 octets (~59,7 Ko) |
| **Temps de construction** | **0.65 secondes** | **0.20 secondes** |
| **Statut final** | ✓ SUCCESS | ✓ SUCCESS |

Quatre nombres demandés
Taille Debug : 59 735 octets
Taille Release : 59 735 octets
Temps Debug : 0.65 secondes
Temps Release : 0.20 secondes
Analyse

Bien que les deux exécutables aient exactement la même taille sur le disque pour ce projet minimal, le mode Release s'est construit plus de trois fois plus vite (0.20s contre 0.65s).

Le compilateur en Release a pu sauter les étapes de génération des tables de symboles lourdes nécessaires à l'analyse pas-à-pas du débogueur. Pour un code plus complexe, la taille Release serait significativement plus petite et plus optimisée.
