// ex5Doc.h : Cex5Doc ��Ľӿ�
//


#pragma once


class Cex5Doc : public CDocument
{
protected: // �������л�����
	Cex5Doc();
	DECLARE_DYNCREATE(Cex5Doc)

// ����
public:

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// ʵ��
public:
	virtual ~Cex5Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};


