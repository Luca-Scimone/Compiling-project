Le projet a été commencé début décembre :
- Nous avons d'abord écrit la grammaire en lex.
- commencé à créer le yacc (le squelette au moins)
- création d'un .c pour stocker les variables intermédiaires.
- création d'un .c pour détecter les variables et les programmes etc..
- création des instructions à mettre dans le yacc ( en francais )

ident : pas plus de 20 caractères

# Contenu du projet :

* Analyseur lexical analyzer_lex.lex
* Analyseur syntaxique projet.y
* Table des symboles contenue dans tab_symboles.c
* Table des fonctions contenue dans tab_fct.c
* gencode.c qui va générer le fichier.s
* parser.c qui gère l'entrée dans le terminal (et récupère les flags des options)
* option.c gère l'affichage de la table des symbole et le renommage de fichier.
* numero_boucle.c qui affecte à chaque boucle un numéro et permet donc d'avoir
	plusieurs boucles dans un même programme.
* dossier test contenant le fichier test.sh et différente série de test.

# Comment utiliser notre compilateur

* Makefile : Création de notre programme scalpa, notre compilateur simplifié :
`~/projet-de-compilation-incroyable$ make`
* Compilation d'un fichier scalpa de la manière suivante :
`~/projet-de-compilation-incroyable$ ./scalpa [fichier_a_compiler.txt] [flags]`
* Sans le flag `-o`, le nom du fichier de sortie (par default) est : result.s
* Le `fichier_a_compiler` n'est pas obligatoire, et dans le cas où il n'est pas spécifié,
	il faut rentrer les instructions à la main dans le terminal
	Le `fichier_a_compiler` et les `flags` peuvent être mis dans n'importe quel ordre
Rajouter le flag -version permet d'avoir des informations concernant les créateurs de ce compilateur.
Rajouter le flag -tos permet d'avoir d'afficher le contenue de la table des symboles
Rajouter le flag -o permet de préciser le nom de fichier de sortie du compilateur.

* On peut aussi effectuer un test sur tout les fichier test avec la commande :
`~/projet-de-compilation-incroyable$ sh /test/test.sh [flags]`
* Sans flags on obtient tout les fichier .s et on sait si leur construction à échoué ou pas
Rajouter le flag -mips permet pour chaque fichier.txt de le load dans mips.
De base, cela fait appel à qtspim. Si vous n'utilisez pas qtspim comme simulateur,
changez la ligne correspondante dans le test.sh (ligne 16)

* Dans le main de projet.y, il y a 4 lignes mises en commentaire : il est possible
d'enlever les `//` afin de faire apparaitre dans le terminal toutes les étapes
de la lecture des token.

* On peut netoyer tout les fichier inutile avec :
`~/projet-de-compilation-incroyable$ make clean`
