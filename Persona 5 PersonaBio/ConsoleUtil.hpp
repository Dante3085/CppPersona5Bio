
/*Namespaces*/
namespace conFX {
	/*Functionprototypes*/
	void setTxtColor(std::string);
	void getCursorXY(int &x, int &y);
	void setCursorXY(int, int);
	void schreibeTextzeileSound(char[], std::string, double);
	void schreibeTextzeileSoundPos(char[], std::string, double, int, int);
	void schreibeTextzeile(std::string, double);
	void schreibeTextzeilePos(std::string, double, int, int);
	void pause();
	void loadAnimRandSound(int, int, int, double);
	void loadAnimRand(int, int, int, double);
}