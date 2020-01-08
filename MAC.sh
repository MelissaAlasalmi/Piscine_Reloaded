ifconfig | grep -w "ether" | Sed  's/ether//' | cut -c 3- | rev | cut -c 2- | rev
