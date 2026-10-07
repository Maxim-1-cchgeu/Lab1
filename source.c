#include <stdio.h>
#include <locale.h>

void name();
void date();
void ship();

int main()
{
	setlocale(LC_CTYPE, "RUS.UTF-8");
	name();
	date();
	ship();
	
	return 0;
}

void name()
{
	
	puts("*******************************************");
	puts("*                                         *");
	puts("* тема: Разработка консольного приложения *");
	puts("*                                         *");
	puts("*     Выполнил Иголкин М.А.               *");
	puts("*                                         *");
	puts("*******************************************");
	puts("");
}

void date()
{
	puts("    _    _   _     _   _ ");
	puts(" |  _|  | | |_|   | | |_|");
	puts(" | |_ . |_|  _| . |_| |_|");
	puts("");

}

void ship()
{
	puts("                __");
	puts("               |__|");
	puts("                  |");
	puts("                __|__");
	puts("                \\___/");
	puts("                 /|\\");
	puts("                / | \\");
	puts("               |  |  \\");
	puts("                \\ |   \\");
	puts("   ______________\\|____\\_________|_____");
	puts("   \\                                   |");
	puts("    \\                                  |");
	puts("     \\________________________________/");
	puts("");
}
