
// ENDOBENCH_VS2015.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CENDOBENCH_VS2015App: 
// �йش����ʵ�֣������ ENDOBENCH_VS2015.cpp
//

class CENDOBENCH_VS2015App : public CWinApp
{
public:
	CENDOBENCH_VS2015App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CENDOBENCH_VS2015App theApp;