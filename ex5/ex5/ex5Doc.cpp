// ex5Doc.cpp : Cex5Doc 类的实现
//

#include "stdafx.h"
#include "ex5.h"

#include "ex5Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cex5Doc

IMPLEMENT_DYNCREATE(Cex5Doc, CDocument)

BEGIN_MESSAGE_MAP(Cex5Doc, CDocument)
END_MESSAGE_MAP()


// Cex5Doc 构造/析构

Cex5Doc::Cex5Doc()
{
	// TODO: 在此添加一次性构造代码

}

Cex5Doc::~Cex5Doc()
{
}

BOOL Cex5Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 在此添加重新初始化代码
	// (SDI 文档将重用该文档)

	return TRUE;
}




// Cex5Doc 序列化

void Cex5Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: 在此添加存储代码
	}
	else
	{
		// TODO: 在此添加加载代码
	}
}


// Cex5Doc 诊断

#ifdef _DEBUG
void Cex5Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void Cex5Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// Cex5Doc 命令
