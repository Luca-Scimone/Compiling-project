# find current directory full path
DIR="$( cd "$( dirname "$0" )" && pwd )"

cd $DIR/.

# find all c test files
rm *.s
T_FILE="$(find $DIR/*.txt)"
for FILE in `echo $T_FILE`; do
	name1=${FILE##*/}
	name2=${name1%.txt}
	echo "\e[39m- "$name1":"
	# analyze each file
	../scalpa -o $name2 $FILE
	if [ "$1" = "-mips" ]; then
		qtspim -file "$name2"".s"
	fi
	if [ -e "$name2"".s" ] 
	then
		echo '\e[92m- Création du .s réussi'
        echo
	else 
		echo '\033[31m- Echec création.s'   
        echo
	fi
done

echo "\e[39m- Done."