
# Exercice 14 : Le filtre Android

## 1. Ajout du filtre Android

```python
with filter("system:Android"):
    defines(["NK_PLATFORM_ANDROID"])
    links(["android", "log", "egl", "GLESv3"])
```

## 2. Constat avec `jenga info`

La commande `jenga info` ne permet pas de savoir si le filtre Android s'active ou non. 
Sa sortie reste strictement identique, que la condition du filtre soit vraie ou fausse, 
car elle affiche la configuration générale du projet sans appliquer les filtres spécifiques 
à une plateforme cible non demandée.

## 3. Comment vérifier l'activation du filtre

Pour vérifier que le filtre s'active correctement pour Android, il faut exécuter :

```bash
jenga info --platform android
```

ou

```bash
jenga build --platform android
```

Cela forcera la plateforme cible et appliquera le filtre Android.
