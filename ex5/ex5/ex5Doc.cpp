// ex5Doc.cpp : Cex5Doc ���ʵ��
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


// Cex5Doc ����/����

Cex5Doc::Cex5Doc()
{
	// TODO: �ڴ����һ���Թ������

}

Cex5Doc::~Cex5Doc()
{
}

BOOL Cex5Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// Cex5Doc ���л�

void Cex5Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}


// Cex5Doc ���

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


// Cex5Doc ����
