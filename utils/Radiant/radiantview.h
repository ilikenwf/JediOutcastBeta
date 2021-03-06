// RadiantView.h : interface of the CRadiantView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_RADIANTVIEW_H__330BBF10_731C_11D1_B539_00AA00A410FC__INCLUDED_)
#define AFX_RADIANTVIEW_H__330BBF10_731C_11D1_B539_00AA00A410FC__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

class CRadiantView : public CView
{
protected: // create from serialization only
	CRadiantView();
	DECLARE_DYNCREATE(CRadiantView)

// Attributes
public:
	CRadiantDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRadiantView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CRadiantView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CRadiantView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in RadiantView.cpp
inline CRadiantDoc* CRadiantView::GetDocument()
   { return (CRadiantDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RADIANTVIEW_H__330BBF10_731C_11D1_B539_00AA00A410FC__INCLUDED_)
