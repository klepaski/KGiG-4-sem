
// Lab3.h: основной файл заголовка для приложения Lab3
//
#pragma once

#ifndef __AFXWIN_H__
	#error "включить stdafx.h до включения этого файла в PCH"
#endif

#include "resource.h"       // основные символы


// CLab3App:
// Сведения о реализации этого класса: Lab3.cpp
//

class CLab3App : public CWinApp
{
public:
	CLab3App();


// Переопределение
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Реализация

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CLab3App theApp;
