find . -name '*.sh' | rev | cut -c 4- | awk -F "/" '{print $1}' | rev
