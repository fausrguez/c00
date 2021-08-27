red:=\033[0;31m
yellow:=\033[0;33m
no_color:=\033[0m

test_all:
	ceedling test:all

new_module:
	@if [ "$m" = "" ]; then\
        printf "❌ ${red}[ERROR]: You need to specify the module name${no_color}\n\n";\
		printf "\t 💡 make new_module m=\"module_name\"\n\n";\
		exit 1;\
    fi
	
	@if [ -f "./src/$m.c" ]; then\
        printf "❌ ${red}[ERROR]: ./src/${m}.c exists${no_color}\n\n";\
		exit 1;\
	fi

	cp ~/templates/c-file.c ./src/$m.c
	cp ~/templates/c-header.h ./src/$m.h
	cp ~/templates/c-main.c ./tests/$m.test.c

norminette:
	~/.local/bin/norminette ./src

update_structure:
	git add .
	git commit -m 'The Time has come'
	git checkout -b master
	rm -rf test-suite tests .gitignore Makefile 
	mv src/* . && rm -rf src .gitkeep 
