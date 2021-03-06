/*
Copyright (c) 2014 Mudafar
GPLv3
*/


#ifndef  __ADMOB_HELPER_H_
#define  __ADMOB_HELPER_H_

#include "FGeneral.h"

class AdmobHelper
{
public:
    static void hideAd();
    static void showAd();
    static bool isAdShowing;
	static void hideAdBottom();
    static void showAdBottom();
    static bool isAdBottomShowing;
	static void hideAdScreen();
    static void showAdScreen();
    static bool isAdScreenShowing;
	static void tryShareScore(int scoreToShare);
	static bool wasTryShareCalled;

};


#endif // __ADMOB_HELPER_H_