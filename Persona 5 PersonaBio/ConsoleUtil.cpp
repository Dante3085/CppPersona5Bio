#include <iostream>
#include <string>
#include <windows.h>
#include <mmsystem.h>
#include <limits>
#include <chrono>
#include <thread>

#define WIN

/*Namespaces*/
namespace conFX {

	/*Functions*/
	void sleepFor() {
		std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::seconds(1));
	}

	//Sets the text's color in console.
	void setTxtColor(std::string color) {
		int colorNum;
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		if (color == "black") {
			colorNum = 0;
		}
		if (color == "blue") {
			colorNum = 1;
		}
		if (color == "green") {
			colorNum = 2;
		}
		if (color == "cyan") {
			colorNum = 3;
		}
		if (color == "red") {
			colorNum = 4;
		}
		if (color == "magenta") {
			colorNum = 5;
		}
		if (color == "brown") {
			colorNum = 6;
		}
		if (color == "lightgray") {
			colorNum = 7;
		}
		if (color == "darkgray") {
			colorNum = 8;
		}
		if (color == "lightblue") {
			colorNum = 9;
		}
		if (color == "lightgreen") {
			colorNum = 10;
		}
		if (color == "lightcyan") {
			colorNum = 11;
		}
		if (color == "lightred") {
			colorNum = 12;
		}
		if (color == "lightmagenta") {
			colorNum = 13;
		}
		if (color == "yellow") {
			colorNum = 14;
		}
		if (color == "white") {
			colorNum = 15;
		}

		SetConsoleTextAttribute(hConsole, colorNum);
	}

	//Bekommt die derzeitige Cursor Position.
	void getCursorXY(int &x, int &y) {
		CONSOLE_SCREEN_BUFFER_INFO csbi;
		if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi)) {
			x = csbi.dwCursorPosition.X;
			y = csbi.dwCursorPosition.Y;
		}
	}

	//Cursor springt zur mit x und y festgelegten Position in der Konsole.
	void setCursorXY(int x, int y) {
		COORD coord;
		coord.X = x;
		coord.Y = y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	}

	//Schreibt Textzeile in geschriebener Schrift mit unterschiedlichem Tempo. Zusätzlich erklingt im Hintergrund ein beliebiger Sound im Format "wav".
	void schreibeTextzeileSound(char wav[], std::string text, double tempo) {
		PlaySound(TEXT(wav), NULL, SND_ASYNC);
		for (int i = 0; i < text.length(); i++) {
			std::cout << text[i];
			if (tempo == 0) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(0));
			}
			else if (tempo == 0.000625) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(625000));
			}
			else if (tempo == 0.001) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(1000000));
			}
			else if (tempo == 0.00125) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(1250000));
			}
			else if (tempo == 0.0025) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(2500000));
			}
			else if (tempo == 0.005) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(5000000));
			}
			else if (tempo == 0.010) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(10000000));
			}
			else if (tempo == 0.025) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(25000000));
			}
			else if (tempo == 0.040) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(40000000));
			}
			else if (tempo == 0.045) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(45000000));
			}
			else if (tempo == 0.050) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(50000000));
			}
			else if (tempo == 0.085) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(85000000));
			}
			else if (tempo == 0.17) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(170000000));
			}
			else if (tempo == 0.34) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(340000000));
			}
			else if (tempo == 1) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(1000000000));
			}
		}
		PlaySound(NULL, 0, 0);
		std::cout << std::endl;
	}

	//Schreibt Textzeile in geschriebener Schrift mit unterschiedlichem Tempo. Zusätzlich erklingt im Hintergrund ein beliebiger Sound im Format wav. Außerdem kann per x- und y-Koordinate die Position angegeben werden, wo die Textzeile geschrieben werden soll.
	void schreibeTextzeileSoundPos(char wav[], std::string text, double tempo, int x, int y) {
		setCursorXY(x, y);
		PlaySound(TEXT(wav), NULL, SND_ASYNC);
		for (int i = 0; i < text.length(); i++) {
			std::cout << text[i];
			if (tempo == 0) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(0));
			}
			else if (tempo == 0.000625) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(625000));
			}
			else if (tempo == 0.001) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(1000000));
			}
			else if (tempo == 0.00125) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(1250000));
			}
			else if (tempo == 0.0025) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(2500000));
			}
			else if (tempo == 0.005) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(5000000));
			}
			else if (tempo == 0.010) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(10000000));
			}
			else if (tempo == 0.025) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(25000000));
			}
			else if (tempo == 0.040) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(40000000));
			}
			else if (tempo == 0.045) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(45000000));
			}
			else if (tempo == 0.050) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(50000000));
			}
			else if (tempo == 0.085) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(85000000));
			}
			else if (tempo == 0.17) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(170000000));
			}
			else if (tempo == 0.34) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(340000000));
			}
			else if (tempo == 1) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(1000000000));
			}
		}
		PlaySound(NULL, 0, 0);
		std::cout << std::endl;
	}

	//Schreibt Textzeile in geschriebener Schrift mit unterschiedlichem Tempo. 
	void schreibeTextzeile(std::string text, double tempo) {
		for (int i = 0; i < text.length(); i++) {
			std::cout << text[i];
			if (tempo == 0) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(0));
			}
			else if (tempo == 0.0000390625) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(39062));
			}
			else if (tempo == 0.000078125) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(78125));
			}
			else if (tempo == 0.00015625) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(156250));
			}
			else if (tempo == 0.0003125) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(312500));
			}
			else if (tempo == 0.000625) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(625000));
			}
			else if (tempo == 0.001) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(1000000));
			}
			else if (tempo == 0.00125) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(1250000));
			}
			else if (tempo == 0.0025) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(2500000));
			}
			else if (tempo == 0.005) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(5000000));
			}
			else if (tempo == 0.010) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(10000000));
			}
			else if (tempo == 0.025) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(25000000));
			}
			else if (tempo == 0.040) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(40000000));
			}
			else if (tempo == 0.045) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(45000000));
			}
			else if (tempo == 0.050) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(50000000));
			}
			else if (tempo == 0.085) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(85000000));
			}
			else if (tempo == 0.17) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(170000000));
			}
			else if (tempo == 0.34) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(340000000));
			}
			else if (tempo == 1) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(1000000000));
			}
		}
		std::cout << std::endl;
	}

	//Schreibt Textzeile in geschriebener Schrift mit unterschiedlichem Tempo. Außerdem kann per x- und y-Koordinate die Position angegeben werden, wo die Textzeile geschrieben werden soll.
	void schreibeTextzeilePos(std::string text, double tempo, int x, int y) {
		setCursorXY(x, y);
		for (int i = 0; i < text.length(); i++) {
			std::cout << text[i];
			if (tempo == 0) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(0));
			}
			else if (tempo == 0.000625) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(625000));
			}
			else if (tempo == 0.001) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(1000000));
			}
			else if (tempo == 0.00125) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(1250000));
			}
			else if (tempo == 0.0025) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(2500000));
			}
			else if (tempo == 0.005) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(5000000));
			}
			else if (tempo == 0.010) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(10000000));
			}
			else if (tempo == 0.025) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(25000000));
			}
			else if (tempo == 0.040) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(40000000));
			}
			else if (tempo == 0.045) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(45000000));
			}
			else if (tempo == 0.050) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(50000000));
			}
			else if (tempo == 0.085) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(85000000));
			}
			else if (tempo == 0.17) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(170000000));
			}
			else if (tempo == 0.34) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(340000000));
			}
			else if (tempo == 1) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(1000000000));
			}
		}
		std::cout << std::endl;
	}

	//Pausiert Programm und wartet auf Benutzereingabe zum fortfahren. Windows Lösung und allgemeine Lösung (für Windows: "#define WIN"; für Allg.: !("#define WIN")).
	void pause() {
#ifdef WIN
		system("pause");
#endif

#ifndef WIN
		int ende;
		std::cout << "Wert + Enter zum fortfahren . . ." << std::endl;
		std::cin >> ende;
#endif
	}

	//Lässt in einem bestimmten Koordinatenbereich "Ladepunkte" zufällig auftauchen und verschwinden (mit Sound).
	void loadAnimRandSound(int anzahl, int xRange, int yRange, double tempo) {
		std::string load = ". . .";
		std::string loadLoesch = "      ";
		int x, y;
		for (int i = 0; i <= anzahl; i++) {
			x = rand() % xRange;
			y = rand() % yRange;
			schreibeTextzeileSoundPos("Typewriter_Sound_Effect.wav", load, tempo, x, y);
			schreibeTextzeileSoundPos("Typewriter_Sound_Effect.wav", loadLoesch, tempo, x, y);
			std::cout << x << " " << y;
		}
	}

	//Lässt in einem bestimmten Koordinatenbereich "Ladepunkte" zufällig auftauchen und verschwinden.
	void loadAnimRand(int anzahl, int xRange, int yRange, double tempo) {
		std::string load = ". . .";
		std::string loadLoesch = "      ";
		int x, y;
		for (int i = 1; i <= anzahl; i++) {
			x = rand() % xRange;
			y = rand() % yRange;
			schreibeTextzeilePos(load, tempo, x, y);
			schreibeTextzeilePos(loadLoesch, tempo, x, y);
		}
	}
}