#include <iostream>
#include <string>
#include "ConsoleUtil.hpp"
#include "PersonaData.hpp"
#include <windows.h>
#include <mmsystem.h>

//Variables that check if certain Sections have been accessed before.
int infoScreenCheck		   = 0;
int startSreenCheck		   = 0;
int personaListScreenCheck = 0;

int main() {

	//ConsoleSettings
	SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), CONSOLE_FULLSCREEN_MODE, 0);

	//Startscreen
	if (startSreenCheck == 0) {
		conFX::schreibeTextzeileSoundPos("Keyboard_Typing_Sound_Effect.wav", P5Data::titel, 0.0025, 0, 0);
		conFX::schreibeTextzeileSoundPos("Keyboard_Typing_Sound_Effect.wav", P5Data::inittialInstruction, 0, 0, 2);
		conFX::schreibeTextzeileSoundPos("Keyboard_Typing_Sound_Effect.wav", P5Data::inittialInstruction2, 0, 0, 3);
		conFX::schreibeTextzeileSoundPos("Keyboard_Typing_Sound_Effect.wav", P5Data::inittialInstruction3, 0, 0, 4);

		startSreenCheck = 1;
	}

	//MainLoop
	while (P5Data::controller != "end") {

		std::cin >> P5Data::controller;

		//StartScreen
		if (P5Data::controller == "start") {

			//Clean up Everything
			if (personaListScreenCheck == 1 || startSreenCheck == 1 || infoScreenCheck == 1) {
				for (int i = 2; i < 64; i++) {
					conFX::setCursorXY(0, i);
					conFX::schreibeTextzeile(P5Data::eraser, 0);
				}
			}

			conFX::schreibeTextzeileSoundPos("Keyboard_Typing_Sound_Effect.wav", P5Data::titel, 0, 0, 0);
			conFX::schreibeTextzeileSoundPos("Keyboard_Typing_Sound_Effect.wav", P5Data::inittialInstruction, 0, 0, 2);
			conFX::schreibeTextzeileSoundPos("Keyboard_Typing_Sound_Effect.wav", P5Data::inittialInstruction2, 0, 0, 3);
			conFX::schreibeTextzeileSoundPos("Keyboard_Typing_Sound_Effect.wav", P5Data::inittialInstruction3, 0, 0, 4);

			startSreenCheck = 1;
		}

		//InfoScreen
		if (P5Data::controller == "info") {

			//Clean up Everything
			if (personaListScreenCheck == 1 || startSreenCheck == 1 || infoScreenCheck == 1) {
				for (int i = 2; i < 64; i++) {
					conFX::setCursorXY(0, i);
					conFX::schreibeTextzeile(P5Data::eraser, 0);
				}
			}

			conFX::schreibeTextzeileSoundPos("Keyboard_Typing_Sound_Effect.wav", P5Data::personaListInfo, 0, 0, 2);

			infoScreenCheck = 1;
		}

		//OrobasBiographieScreen
		else if (P5Data::controller == "Orobas") {

			//Clean up Everything
			if (personaListScreenCheck == 1 || startSreenCheck == 1 || infoScreenCheck == 1) {
				for (int i = 2; i < 64; i++) {
					conFX::setCursorXY(0, i);
					conFX::schreibeTextzeile(P5Data::eraser, 0);
				}
			}

			conFX::schreibeTextzeileSoundPos("Keyboard_Typing_Sound_Effect.wav", P5Data::OrobasBio, 0, 0, 2);
		}

		//HighPixieBiographieScreen
		else if (P5Data::controller == "HighPixie") {

			//Clean up Everything
			if (personaListScreenCheck == 1 || startSreenCheck == 1 || infoScreenCheck == 1) {
				for (int i = 2; i < 64; i++) {
					conFX::setCursorXY(0, i);
					conFX::schreibeTextzeile(P5Data::eraser, 0);
				}
			}

			conFX::schreibeTextzeileSoundPos("Keyboard_Typing_Sound_Effect.wav", P5Data::HighPixieBio, 0, 0, 2);
		}

		//AngelBiographieScreen
		else if (P5Data::controller == "Angel") {

			//Clean up Everything
			if (personaListScreenCheck == 1 || startSreenCheck == 1 || infoScreenCheck == 1) {
				for (int i = 2; i < 64; i++) {
					conFX::setCursorXY(0, i);
					conFX::schreibeTextzeile(P5Data::eraser, 0);
				}
			}

			conFX::schreibeTextzeileSoundPos("Keyboard_Typing_Sound_Effect.wav", P5Data::AngelBio, 0, 0, 2);
		}

		//NekomataBiographieScreen
		else if (P5Data::controller == "Nekomata") {

			//Clean up Everything
			if (personaListScreenCheck == 1 || startSreenCheck == 1 || infoScreenCheck == 1) {
				for (int i = 2; i < 64; i++) {
					conFX::setCursorXY(0, i);
					conFX::schreibeTextzeile(P5Data::eraser, 0);
				}
			}

			conFX::schreibeTextzeileSoundPos("Keyboard_Typing_Sound_Effect.wav", P5Data::NekomataBio, 0, 0, 2);
		}

		//OniBiographieScreen
		else if (P5Data::controller == "Oni") {

			//Clean up Everything
			if (personaListScreenCheck == 1 || startSreenCheck == 1 || infoScreenCheck == 1) {
				for (int i = 2; i < 64; i++) {
					conFX::setCursorXY(0, i);
					conFX::schreibeTextzeile(P5Data::eraser, 0);
				}
			}

			conFX::schreibeTextzeileSoundPos("Keyboard_Typing_Sound_Effect.wav", P5Data::OniBio, 0, 0, 2);
		}

		//OrthrusBiographieScreen
		else if (P5Data::controller == "Orthrus") {

			//Clean up Everything
			if (personaListScreenCheck == 1 || startSreenCheck == 1 || infoScreenCheck == 1) {
				for (int i = 2; i < 64; i++) {
					conFX::setCursorXY(0, i);
					conFX::schreibeTextzeile(P5Data::eraser, 0);
				}
			}

			conFX::schreibeTextzeileSoundPos("Keyboard_Typing_Sound_Effect.wav", P5Data::OrthrusBio, 0, 0, 2);
		}

		//PersonaListScreen
		else if (P5Data::controller == "personaList") {

			//Clean up Everything
			if (personaListScreenCheck == 1 || startSreenCheck == 1 || infoScreenCheck == 1) {
				for (int i = 2; i < 64; i++) {
					conFX::setCursorXY(0, i);
					conFX::schreibeTextzeile(P5Data::eraser, 0);
				}
			}

			PlaySound(TEXT("Keyboard_Typing_Sound_Effect.wav"), NULL, SND_ASYNC);

			//Fool
			conFX::setTxtColor("red");
			conFX::schreibeTextzeilePos(P5Data::fool, 0, 0, 2);
			conFX::setTxtColor("white");

			conFX::schreibeTextzeilePos(P5Data::Arsene		 , 0, 0, 3);
			conFX::schreibeTextzeilePos(P5Data::Obariyon	 , 0, 0, 4);
			conFX::schreibeTextzeilePos(P5Data::HighPixie	 , 0, 0, 5);
			conFX::schreibeTextzeilePos(P5Data::Izanagi		 , 0, 0, 6);
			conFX::schreibeTextzeilePos(P5Data::Orpheus		 , 0, 0, 7);
			conFX::schreibeTextzeilePos(P5Data::IzanagiPicaro, 0, 0, 8);
			conFX::schreibeTextzeilePos(P5Data::OrpheusPicaro, 0, 0, 9);
			conFX::schreibeTextzeilePos(P5Data::Decarabia	 , 0, 0, 10);
			conFX::schreibeTextzeilePos(P5Data::Legion		 , 0, 0, 11);
			conFX::schreibeTextzeilePos(P5Data::Ose			 , 0, 0, 12);
			conFX::schreibeTextzeilePos(P5Data::Bugs		 , 0, 0, 13);
			conFX::schreibeTextzeilePos(P5Data::CrystalSkull , 0, 0, 14);
			conFX::schreibeTextzeilePos(P5Data::Dionysus	 , 0, 0, 15);
			conFX::schreibeTextzeilePos(P5Data::BlackFrost   , 0, 0, 16);
			conFX::schreibeTextzeilePos(P5Data::Vishnu		 , 0, 0, 17);
			conFX::schreibeTextzeilePos(P5Data::Satanael	 , 0, 0, 18);

			conFX::schreibeTextzeilePos("", 0, 0, 19);

			//Magician
			conFX::setTxtColor("lightblue");
			conFX::schreibeTextzeilePos(P5Data::magician        , 0.0125, 0, 20);
			conFX::setTxtColor("white");

			conFX::schreibeTextzeilePos(P5Data::Zoro            , 0, 0, 21);
			conFX::schreibeTextzeilePos(P5Data::Mercurius       , 0, 0, 22);
			conFX::schreibeTextzeilePos(P5Data::JackOLantern    , 0, 0, 23);
			conFX::schreibeTextzeilePos(P5Data::JackFrost       , 0, 0, 24);
			conFX::schreibeTextzeilePos(P5Data::Nekomata        , 0, 0, 25);
			conFX::schreibeTextzeilePos(P5Data::SandmaSatanaeln , 0, 0, 26);
			conFX::schreibeTextzeilePos(P5Data::Choronzon       , 0, 0, 27);
			conFX::schreibeTextzeilePos(P5Data::QueenMab		, 0, 0, 28);
			conFX::schreibeTextzeilePos(P5Data::Rangda		    , 0, 0, 29);
			conFX::schreibeTextzeilePos(P5Data::Surt		    , 0, 0, 30);
			conFX::schreibeTextzeilePos(P5Data::Futsunushi	    , 0, 0, 31);

			conFX::schreibeTextzeilePos("", 0, 0, 32);

			//Priestess
			conFX::setTxtColor("yellow");
			conFX::schreibeTextzeilePos(P5Data::priestess, 0, 0, 35);
			conFX::setTxtColor("white");

			conFX::schreibeTextzeilePos(P5Data::Johanna      , 0, 0, 36);
			conFX::schreibeTextzeilePos(P5Data::Anat         , 0, 0, 37);
			conFX::schreibeTextzeilePos(P5Data::Silky	     , 0, 0, 38);
			conFX::schreibeTextzeilePos(P5Data::Apsaras	     , 0, 0, 39);
			conFX::schreibeTextzeilePos(P5Data::KohiNoor	 , 0, 0, 40);
			conFX::schreibeTextzeilePos(P5Data::Isis	     , 0, 0, 41);
			conFX::schreibeTextzeilePos(P5Data::KikuriHime   , 0, 0, 42);
			conFX::schreibeTextzeilePos(P5Data::Scathach	 , 0, 0, 43);
			conFX::schreibeTextzeilePos(P5Data::Sarasvati	 , 0, 0, 44);
			conFX::schreibeTextzeilePos(P5Data::Skadi	     , 0, 0, 45);
			conFX::schreibeTextzeilePos(P5Data::Cybele	     , 0, 0, 46);

			//Empress
			conFX::setTxtColor("lightmagenta");
			conFX::schreibeTextzeilePos(P5Data::empress, 0, 0, 50);
			conFX::setTxtColor("white");

			conFX::schreibeTextzeilePos(P5Data::Milady		  , 0, 0, 51);
			conFX::schreibeTextzeilePos(P5Data::Astarte	      , 0, 0, 52);
			conFX::schreibeTextzeilePos(P5Data::QueensNecklace, 0, 0, 53);
			conFX::schreibeTextzeilePos(P5Data::Yaksini		  , 0, 0, 54);
			conFX::schreibeTextzeilePos(P5Data::Lamia		  , 0, 0, 55);
			conFX::schreibeTextzeilePos(P5Data::Hariti		  , 0, 0, 56);
			conFX::schreibeTextzeilePos(P5Data::Dakini		  , 0, 0, 57);
			conFX::schreibeTextzeilePos(P5Data::Titania		  , 0, 0, 58);
			conFX::schreibeTextzeilePos(P5Data::Kali		  , 0, 0, 59);
			conFX::schreibeTextzeilePos(P5Data::MotherHarlot  , 0, 0, 60);

			//Emperor
			conFX::setTxtColor("green");
			conFX::schreibeTextzeilePos(P5Data::emperor, 0, 25, 2);
			conFX::setTxtColor("white");

			conFX::schreibeTextzeilePos(P5Data::Goemon     , 0, 25, 3);
			conFX::schreibeTextzeilePos(P5Data::KamuSusanoo, 0, 25, 4);
			conFX::schreibeTextzeilePos(P5Data::Regent	   , 0, 25, 5);
			conFX::schreibeTextzeilePos(P5Data::Eligor	   , 0, 25, 6);
			conFX::schreibeTextzeilePos(P5Data::Setanta	   , 0, 25, 7);
			conFX::schreibeTextzeilePos(P5Data::Thoth	   , 0, 25, 8);
			conFX::schreibeTextzeilePos(P5Data::Okuninushi , 0, 25, 9);
			conFX::schreibeTextzeilePos(P5Data::Barong	   , 0, 25, 10);
			conFX::schreibeTextzeilePos(P5Data::KingFrost  , 0, 25, 11);
			conFX::schreibeTextzeilePos(P5Data::Oberon	   , 0, 25, 12);
			conFX::schreibeTextzeilePos(P5Data::Baal	   , 0, 25, 13);
			conFX::schreibeTextzeilePos(P5Data::Odin	   , 0, 25, 14);

			//Hierophant
			conFX::setTxtColor("lightgreen");
			conFX::schreibeTextzeilePos(P5Data::hierophant, 0, 25, 20);
			conFX::setTxtColor("white");

			conFX::schreibeTextzeilePos(P5Data::Berith	   , 0, 25, 21);
			conFX::schreibeTextzeilePos(P5Data::Orobas	   , 0, 25, 22);
			conFX::schreibeTextzeilePos(P5Data::FengHuang  , 0, 25, 23);
			conFX::schreibeTextzeilePos(P5Data::Anzu	   , 0, 25, 24);
			conFX::schreibeTextzeilePos(P5Data::Unicorn    , 0, 25, 25);
			conFX::schreibeTextzeilePos(P5Data::Daisoujou  , 0, 25, 26);
			conFX::schreibeTextzeilePos(P5Data::Forneus    , 0, 25, 27);
			conFX::schreibeTextzeilePos(P5Data::Bishamonten, 0, 25, 28);
			conFX::schreibeTextzeilePos(P5Data::Kohryu	   , 0, 25, 29);

			//Lovers
			conFX::setTxtColor("lightcyan");
			conFX::schreibeTextzeilePos(P5Data::lovers, 0, 25, 35);
			conFX::setTxtColor("white");

			conFX::schreibeTextzeilePos(P5Data::Carmen		 , 0, 25, 36);
			conFX::schreibeTextzeilePos(P5Data::Hecate	     , 0, 25, 37);
			conFX::schreibeTextzeilePos(P5Data::Pixie		 , 0, 25, 38);
			conFX::schreibeTextzeilePos(P5Data::SakiMitama	 , 0, 25, 39);
			conFX::schreibeTextzeilePos(P5Data::LeananSidhe  , 0, 25, 40);
			conFX::schreibeTextzeilePos(P5Data::AmenoUzume	 , 0, 25, 41);
			conFX::schreibeTextzeilePos(P5Data::KushinadaHime, 0, 25, 42);
			conFX::schreibeTextzeilePos(P5Data::Narcissus	 , 0, 25, 43);
			conFX::schreibeTextzeilePos(P5Data::Parvati	     , 0, 25, 44);
			conFX::schreibeTextzeilePos(P5Data::Raphael		 , 0, 25, 45);
			conFX::schreibeTextzeilePos(P5Data::Ishtar		 , 0, 25, 46);


			//Chariot
			conFX::setTxtColor("lightred");
			conFX::schreibeTextzeilePos(P5Data::chariot, 0, 25, 50);
			conFX::setTxtColor("white");

			conFX::schreibeTextzeilePos(P5Data::CaptainKidd , 0, 25, 51);
			conFX::schreibeTextzeilePos(P5Data::SeitenTaisei, 0, 25, 52);
			conFX::schreibeTextzeilePos(P5Data::Agathion	, 0, 25, 53);
			conFX::schreibeTextzeilePos(P5Data::Slime	    , 0, 25, 54);
			conFX::schreibeTextzeilePos(P5Data::Shiisaa	    , 0, 25, 55);
			conFX::schreibeTextzeilePos(P5Data::ShikiOuji	, 0, 25, 56);
			conFX::schreibeTextzeilePos(P5Data::KinKi	    , 0, 25, 57);
			conFX::schreibeTextzeilePos(P5Data::AraMitama   , 0, 25, 58);
			conFX::schreibeTextzeilePos(P5Data::WhiteRider  , 0, 25, 59);
			conFX::schreibeTextzeilePos(P5Data::Cerberus	, 0, 25, 60);
			conFX::schreibeTextzeilePos(P5Data::Thor	    , 0, 25, 61);
			conFX::schreibeTextzeilePos(P5Data::ChiYou		, 0, 25, 62);


			//Justice
			conFX::setTxtColor("magenta");
			conFX::schreibeTextzeilePos(P5Data::justice, 0, 50, 2);
			conFX::setTxtColor("white");

			conFX::schreibeTextzeilePos(P5Data::RobinHood     , 0, 50, 3);
			conFX::schreibeTextzeilePos(P5Data::Angel	      , 0, 50, 4);
			conFX::schreibeTextzeilePos(P5Data::Archangel	  , 0, 50, 5);
			conFX::schreibeTextzeilePos(P5Data::Principality  , 0, 50, 6);
			conFX::schreibeTextzeilePos(P5Data::Power		  , 0, 50, 7);
			conFX::schreibeTextzeilePos(P5Data::Melchizedek   , 0, 50, 8);
			conFX::schreibeTextzeilePos(P5Data::Dominion	  , 0, 50, 9);
			conFX::schreibeTextzeilePos(P5Data::Throne	      , 0, 50, 10);
			conFX::schreibeTextzeilePos(P5Data::Uriel		  , 0, 50, 11);
			conFX::schreibeTextzeilePos(P5Data::Metatron	  , 0, 50, 12);


			//Hermit
			conFX::setTxtColor("magenta");
			conFX::schreibeTextzeilePos(P5Data::hermit, 0, 50, 20);
			conFX::setTxtColor("white");

			conFX::schreibeTextzeilePos(P5Data::Necronomicon, 0, 50, 21);
			conFX::schreibeTextzeilePos(P5Data::Prometheus  , 0, 50, 22);
			conFX::schreibeTextzeilePos(P5Data::Bicorn      , 0, 50, 23);
			conFX::schreibeTextzeilePos(P5Data::Koropokkuru , 0, 50, 24);
			conFX::schreibeTextzeilePos(P5Data::IpponDatara , 0, 50, 25);
			conFX::schreibeTextzeilePos(P5Data::Sudama		, 0, 50, 26);
			conFX::schreibeTextzeilePos(P5Data::Naga	    , 0, 50, 27);
			conFX::schreibeTextzeilePos(P5Data::Arahabaki   , 0, 50, 28);
			conFX::schreibeTextzeilePos(P5Data::Kumbhanda	, 0, 50, 29);
			conFX::schreibeTextzeilePos(P5Data::Koumokuten  , 0, 50, 30);
			conFX::schreibeTextzeilePos(P5Data::KuramaTengu , 0, 50, 31);
			conFX::schreibeTextzeilePos(P5Data::OngyoKi     , 0, 50, 32);


			//Fortune
			conFX::setTxtColor("magenta");
			conFX::schreibeTextzeilePos(P5Data::fortune, 0, 50, 35);
			conFX::setTxtColor("white");

			conFX::schreibeTextzeilePos(P5Data::StoneofScone  , 0, 50, 36);
			conFX::schreibeTextzeilePos(P5Data::Clotho	      , 0, 50, 37);
			conFX::schreibeTextzeilePos(P5Data::Ariadne	      , 0, 50, 38);
			conFX::schreibeTextzeilePos(P5Data::Lachesis	  , 0, 50, 39);
			conFX::schreibeTextzeilePos(P5Data::Atropos	      , 0, 50, 40);
			conFX::schreibeTextzeilePos(P5Data::AriadnePicaro , 0, 50, 41);
			conFX::schreibeTextzeilePos(P5Data::Fortuna	      , 0, 50, 42);
			conFX::schreibeTextzeilePos(P5Data::Norn		  , 0, 50, 43);
			conFX::schreibeTextzeilePos(P5Data::Asterius	  , 0, 50, 44);
			conFX::schreibeTextzeilePos(P5Data::AsteriusPicaro, 0, 50, 45);
			conFX::schreibeTextzeilePos(P5Data::Lakshmi	      , 0, 50, 46);


			//Strength
			conFX::setTxtColor("magenta");
			conFX::schreibeTextzeilePos(P5Data::strength, 0, 50, 50);
			conFX::setTxtColor("white");

			conFX::schreibeTextzeilePos(P5Data::Kelpie	  , 0, 50, 51);
			conFX::schreibeTextzeilePos(P5Data::KusiMitama, 0, 50, 52);
			conFX::schreibeTextzeilePos(P5Data::Oni	      , 0, 50, 53);
			conFX::schreibeTextzeilePos(P5Data::Rakshasa  , 0, 50, 54);
			conFX::schreibeTextzeilePos(P5Data::Orlov	  , 0, 50, 55);
			conFX::schreibeTextzeilePos(P5Data::Zouchouten, 0, 50, 56);
			conFX::schreibeTextzeilePos(P5Data::Valkyrie  , 0, 50, 57);
			conFX::schreibeTextzeilePos(P5Data::Siegfried , 0, 50, 58);
			conFX::schreibeTextzeilePos(P5Data::ZaouGongen, 0, 50, 59);

			//Hanged Man
			conFX::setTxtColor("magenta");
			conFX::schreibeTextzeilePos(P5Data::hangedMan, 0, 75, 2);
			conFX::setTxtColor("white");

			conFX::schreibeTextzeilePos(P5Data::HuaPo		   , 0, 75, 3);
			conFX::schreibeTextzeilePos(P5Data::Inugami        , 0, 75, 4);
			conFX::schreibeTextzeilePos(P5Data::Orthrus        , 0, 75, 5);
			conFX::schreibeTextzeilePos(P5Data::TakeMinakata   , 0, 75, 6);
			conFX::schreibeTextzeilePos(P5Data::EmperorsAmulet , 0, 75, 7);
			conFX::schreibeTextzeilePos(P5Data::Hecatoncheir   , 0, 75, 8);
			conFX::schreibeTextzeilePos(P5Data::Moloch	       , 0, 75, 9);
			conFX::schreibeTextzeilePos(P5Data::Vasuki	       , 0, 75, 10);
			conFX::schreibeTextzeilePos(P5Data::Attis	       , 0, 75, 11);

			//Death
			conFX::setTxtColor("magenta");
			conFX::schreibeTextzeilePos(P5Data::death, 0, 75, 20);
			conFX::setTxtColor("white");

			conFX::schreibeTextzeilePos(P5Data::Mandrake	  , 0, 75, 21);
			conFX::schreibeTextzeilePos(P5Data::Mokoi	      , 0, 75, 22);
			conFX::schreibeTextzeilePos(P5Data::Matador	      , 0, 75, 23);
			conFX::schreibeTextzeilePos(P5Data::Pisaca	      , 0, 75, 24);
			conFX::schreibeTextzeilePos(P5Data::HellBiker	  , 0, 75, 25);
			conFX::schreibeTextzeilePos(P5Data::HopeDiamond	  , 0, 75, 26);
			conFX::schreibeTextzeilePos(P5Data::PaleRider	  , 0, 75, 27);
			conFX::schreibeTextzeilePos(P5Data::Chernobog	  , 0, 75, 28);
			conFX::schreibeTextzeilePos(P5Data::Thanatos	  , 0, 75, 29);
			conFX::schreibeTextzeilePos(P5Data::ThanatosPicaro, 0, 75, 30);
			conFX::schreibeTextzeilePos(P5Data::Mot	          , 0, 75, 31);
			conFX::schreibeTextzeilePos(P5Data::Alice	      , 0, 75, 32);

			//Temperance
			conFX::setTxtColor("magenta");
			conFX::schreibeTextzeilePos(P5Data::temperance, 0, 75, 35);
			conFX::setTxtColor("white");

			conFX::schreibeTextzeilePos(P5Data::Genbu		, 0, 75, 36);
			conFX::schreibeTextzeilePos(P5Data::KoppaTengu  , 0, 75, 37);
			conFX::schreibeTextzeilePos(P5Data::Makami	    , 0, 75, 38);
			conFX::schreibeTextzeilePos(P5Data::NigiMitama  , 0, 75, 39);
			conFX::schreibeTextzeilePos(P5Data::Jikokuten   , 0, 75, 40);
			conFX::schreibeTextzeilePos(P5Data::Mithra      , 0, 75, 41);
			conFX::schreibeTextzeilePos(P5Data::Byakko	    , 0, 75, 42);
			conFX::schreibeTextzeilePos(P5Data::RajaNaga	, 0, 75, 43);
			conFX::schreibeTextzeilePos(P5Data::Seiryu	    , 0, 75, 44);
			conFX::schreibeTextzeilePos(P5Data::Gabriel	    , 0, 75, 45);
			conFX::schreibeTextzeilePos(P5Data::Ardha	    , 0, 75, 46);


			//Devil
			conFX::setTxtColor("magenta");
			conFX::schreibeTextzeilePos(P5Data::devil, 0, 75, 50);
			conFX::setTxtColor("white");

			conFX::schreibeTextzeilePos(P5Data::Incubus		, 0, 75, 51);
			conFX::schreibeTextzeilePos(P5Data::Andras		, 0, 75, 52);
			conFX::schreibeTextzeilePos(P5Data::Flauros		, 0, 75, 53);
			conFX::schreibeTextzeilePos(P5Data::Lilim		, 0, 75, 54);
			conFX::schreibeTextzeilePos(P5Data::Pazuzu		, 0, 75, 55);
			conFX::schreibeTextzeilePos(P5Data::Baphomet	, 0, 75, 56);
			conFX::schreibeTextzeilePos(P5Data::Nebiros		, 0, 75, 57);
			conFX::schreibeTextzeilePos(P5Data::Belial		, 0, 75, 58);
			conFX::schreibeTextzeilePos(P5Data::Beelzebub	, 0, 75, 59);

			//Tower
			conFX::setTxtColor("magenta");
			conFX::schreibeTextzeilePos(P5Data::tower, 0, 100, 2);
			conFX::setTxtColor("white");

			conFX::schreibeTextzeilePos(P5Data::Jatayu				, 0, 100, 3);
			conFX::schreibeTextzeilePos(P5Data::Belphegor			, 0, 100, 4);
			conFX::schreibeTextzeilePos(P5Data::RedRider			, 0, 100, 5);
			conFX::schreibeTextzeilePos(P5Data::MagatsuIzanagi		, 0, 100, 6);
			conFX::schreibeTextzeilePos(P5Data::MagatsuIzanagiPicaro, 0, 100, 7);
			conFX::schreibeTextzeilePos(P5Data::Seth				, 0, 100, 8);
			conFX::schreibeTextzeilePos(P5Data::BlackRider			, 0, 100, 9);
			conFX::schreibeTextzeilePos(P5Data::Mara				, 0, 100, 10);
			conFX::schreibeTextzeilePos(P5Data::Yoshitsune			, 0, 100, 11);
			conFX::schreibeTextzeilePos(P5Data::Mada				, 0, 100, 12);


			//Star
			conFX::setTxtColor("magenta");
			conFX::schreibeTextzeilePos(P5Data::star, 0, 100, 20);
			conFX::setTxtColor("white");

			conFX::schreibeTextzeilePos(P5Data::Kodama		, 0, 100, 21);
			conFX::schreibeTextzeilePos(P5Data::FuuKi		, 0, 100, 22);
			conFX::schreibeTextzeilePos(P5Data::NekoShogun	, 0, 100, 23);
			conFX::schreibeTextzeilePos(P5Data::Kaiwan		, 0, 100, 24);
			conFX::schreibeTextzeilePos(P5Data::Ananta		, 0, 100, 25);
			conFX::schreibeTextzeilePos(P5Data::Garuda		, 0, 100, 26);
			conFX::schreibeTextzeilePos(P5Data::Hanuman		, 0, 100, 27);
			conFX::schreibeTextzeilePos(P5Data::CuChulainn	, 0, 100, 28);
			conFX::schreibeTextzeilePos(P5Data::Sraosha		, 0, 100, 29);
			conFX::schreibeTextzeilePos(P5Data::Lucifer		, 0, 100, 30);

			//Moon
			conFX::setTxtColor("magenta");
			conFX::schreibeTextzeilePos(P5Data::moon, 0, 100, 35);
			conFX::setTxtColor("white");

			conFX::schreibeTextzeilePos(P5Data::Succubus		, 0, 100, 36);
			conFX::schreibeTextzeilePos(P5Data::Onmoraki		, 0, 100, 37);
			conFX::schreibeTextzeilePos(P5Data::Kaguya			, 0, 100, 38);
			conFX::schreibeTextzeilePos(P5Data::Nue				, 0, 100, 39);
			conFX::schreibeTextzeilePos(P5Data::SuiKi			, 0, 100, 40);
			conFX::schreibeTextzeilePos(P5Data::KaguyaPicaro	, 0, 100, 41);
			conFX::schreibeTextzeilePos(P5Data::BlackOoze		, 0, 100, 42);
			conFX::schreibeTextzeilePos(P5Data::Mothman			, 0, 100, 43);
			conFX::schreibeTextzeilePos(P5Data::Girimehkala		, 0, 100, 44);
			conFX::schreibeTextzeilePos(P5Data::Tsukiyomi		, 0, 100, 45);
			conFX::schreibeTextzeilePos(P5Data::TsukiyomiPicaro	, 0, 100, 46);
			conFX::schreibeTextzeilePos(P5Data::Lilith			, 0, 100, 47);
			conFX::schreibeTextzeilePos(P5Data::Sandalphon		, 0, 100, 48);


			//Sun
			conFX::setTxtColor("magenta");
			conFX::schreibeTextzeilePos(P5Data::sun, 0, 100, 50);
			conFX::setTxtColor("white");

			conFX::schreibeTextzeilePos(P5Data::Suzaku		, 0, 100, 51);
			conFX::schreibeTextzeilePos(P5Data::Mithras		, 0, 100, 52);
			conFX::schreibeTextzeilePos(P5Data::Yurlungur	, 0, 100, 53);
			conFX::schreibeTextzeilePos(P5Data::Horus		, 0, 100, 54);
			conFX::schreibeTextzeilePos(P5Data::Ganesha		, 0, 100, 55);
			conFX::schreibeTextzeilePos(P5Data::Yatagarasu	, 0, 100, 56);
			conFX::schreibeTextzeilePos(P5Data::Quetzalcoatl, 0, 100, 57);
			conFX::schreibeTextzeilePos(P5Data::AsuraOu		, 0, 100, 58);

			//Judgement
			conFX::setTxtColor("magenta");
			conFX::schreibeTextzeilePos(P5Data::judgement, 0, 125, 2);
			conFX::setTxtColor("white");

			conFX::schreibeTextzeilePos(P5Data::Anubis			, 0, 125, 3);
			conFX::schreibeTextzeilePos(P5Data::Trumpeter		, 0, 125, 4);
			conFX::schreibeTextzeilePos(P5Data::YamatanoOrochi	, 0, 125, 5);
			conFX::schreibeTextzeilePos(P5Data::Abaddon			, 0, 125, 6);
			conFX::schreibeTextzeilePos(P5Data::Messiah			, 0, 125, 7);
			conFX::schreibeTextzeilePos(P5Data::Shiva			, 0, 125, 8);
			conFX::schreibeTextzeilePos(P5Data::Michael			, 0, 125, 9);
			conFX::schreibeTextzeilePos(P5Data::MessiahPicaro	, 0, 125, 10);
			conFX::schreibeTextzeilePos(P5Data::Satan			, 0, 125, 11);


			PlaySound(NULL, 0, 0);
			conFX::schreibeTextzeilePos("                      ", 0, 0, 63);
			conFX::setCursorXY(0, 63);

			personaListScreenCheck = 1;
		}
	}

	conFX::pause();
	return 0;
}