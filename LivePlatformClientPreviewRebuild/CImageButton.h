#pragma once

#ifndef _IMAGEBUTTON_H_
#define _IMAGEBUTTON_H_

#ifndef _LIB
#ifdef _WIN64
#ifdef _DEBUG
#ifdef _UNICODE
#pragma comment(lib,"lib/ImageButtondu_x64.lib")
#else
#pragma comment(lib,"lib/ImageButtond_x64.lib")
#endif  // _UNICODE
#else
#ifdef _UNICODE
#pragma comment(lib,"lib/ImageButtonu_x64.lib")
#else
#pragma comment(lib,"lib/ImageButton_x64.lib")
#endif  // _UNICODE
#endif	// _DEBUG
#else
#ifdef _DEBUG
#ifdef _UNICODE
#pragma comment(lib,"lib/ImageButtondu.lib")
#else
#pragma comment(lib,"lib/ImageButtond.lib")
#endif  // _UNICODE
#else
#ifdef _UNICODE
#pragma comment(lib,"lib/ImageButtonu.lib")
#else
#pragma comment(lib,"lib/ImageButton.lib")
#endif  // _UNICODE
#endif	// _DEBUG
#endif	// _WIN64
#endif	// ImageButton_EXPORTS

// CImageButton

class CImageButton : public CButton
{
	DECLARE_DYNAMIC(CImageButton)

public:
	CImageButton();
	virtual ~CImageButton();
protected:
	DECLARE_MESSAGE_MAP()
	CImage m_bnImageU;
	CImage m_bnImageD;
	CImage m_bnImageF;
	CImage m_bnImageX;

	BOOL m_bnOver;
	BOOL m_bnTracking;

public:
	void LoadImagesFromFile(LPCTSTR pszFileName, int nImageNum = 4, BYTE cAlphaThreshold = 1);
	void LoadImagesFromResource(LPCTSTR pszResourceName, int nImageNum = 4, BYTE cAlphaThreshold = 1, LPCTSTR lpImageResType = TEXT("PNG"));
	void LoadImagesFromResource(UINT nReourceID, int nImageNum = 4, BYTE cAlphaThreshold = 1, LPCTSTR lpImageResType = TEXT("PNG"));
	void ApplyImages(const CImage& wholeImage, int nImageNum = 4, BYTE cAlphaThreshold = 1);

	virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnMouseLeave();
	afx_msg void OnMouseHover(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#endif // !_IMAGEBUTTON_H_