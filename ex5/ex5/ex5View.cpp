// ex5View.cpp : Cex5View ���ʵ��
//

#include "stdafx.h"
#include "ex5.h"

#include "ex5Doc.h"
#include "ex5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cex5View

IMPLEMENT_DYNCREATE(Cex5View, CView)

BEGIN_MESSAGE_MAP(Cex5View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// Cex5View ����/����

Cex5View::Cex5View()
{
	// TODO: �ڴ˴���ӹ������

}

Cex5View::~Cex5View()
{
}

BOOL Cex5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cex5View ����

void Cex5View::OnDraw(CDC* pDC)
{
	Cex5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CPen pen(PS_SOLID,1,RGB(0,0,255));
	pDC->SelectObject(&pen);
	CBrush brush(RGB(255,0,0));
	pDC->SelectObject(brush);
	pDC->Ellipse(50,50,150,150);
	pDC->Rectangle(200,50,280,100);
	pDC->SetTextColor(RGB(0,255,0));
	pDC->TextOutW(100,200,L"�Ͼ�����ѧԺ",6);
}


// Cex5View ��ӡ

BOOL Cex5View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void Cex5View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void Cex5View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// Cex5View ���

#ifdef _DEBUG
void Cex5View::AssertValid() const
{
	CView::AssertValid();
}

void Cex5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cex5Doc* Cex5View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cex5Doc)));
	return (Cex5Doc*)m_pDocument;
}
#endif //_DEBUG


// Cex5View ��Ϣ�������
