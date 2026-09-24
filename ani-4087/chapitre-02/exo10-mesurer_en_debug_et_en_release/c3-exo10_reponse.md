
# Exercice 10 : Mesurer en Debug et en Release

## Résultats des mesures

| Configuration | Temps d'exécution |
|---------------|------------------|
| Debug | 6606.51 ms |
| Release | 6686.55 ms |

## Rapport

**Observation surprenante** : Les deux configurations affichent des temps très proches (~6600 ms), ce qui suggère que les optimisations du compilateur GCC/MinGW n'ont pas eu l'effet maximal attendu sur cette boucle particulière, ou que la mesure elle-même n'a pas pu capturer les optimisations SIMD complètes.

## Analyse VR (11 ms par image)

**Mesure Debug** : 6606.51 ms
- **Verdict** : ❌ CATASTROPHIQUE — Impossible de tenir 11 ms

**Mesure Release** : 6686.55 ms
- **Verdict** : ❌ CATASTROPHIQUE — Impossible de tenir 11 ms

## Conclusion

La mesure qui **aurait fait prendre une mauvaise décision** est celle du **mode Debug** (6606.51 ms), car elle suggère que l'algorithme est inutilisable en VR. 

Cependant, en mode Release, les performances restent similaires, ce qui montre que sur cette machine/compilateur spécifique, les optimisations n'ont pas su vectoriser suffisamment la boucle trigonométrique.

**Leçon** : Ne jamais évaluer les performances en Debug seul. Même en Release, il faut profiler correctement et considérer que GCC/MinGW peut avoir des limites d'optimisation comparé à MSVC ou Clang.
