
// ENDOBENCH_VS2015.h : PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号


// CENDOBENCH_VS2015App: 
// 有关此类的实现，请参阅 ENDOBENCH_VS2015.cpp
//

class CENDOBENCH_VS2015App : public CWinApp
{
public:
	CENDOBENCH_VS2015App();

// 重写
public:
	virtual BOOL InitInstance();

// 实现

	DECLARE_MESSAGE_MAP()
};

extern CENDOBENCH_VS2015App theApp;