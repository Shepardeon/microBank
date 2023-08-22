all: app

account.o: src/account.c
	gcc -c src/account.c -o obj/account.o

bank.o: src/bank.c
	gcc -c src/bank.c -o obj/bank.o

app: src/app.c account.o bank.o
	gcc obj/*.o src/app.c -o bin/app.exe

clean:
	del /S /Q .\obj\*
	del /S /Q .\bin\*