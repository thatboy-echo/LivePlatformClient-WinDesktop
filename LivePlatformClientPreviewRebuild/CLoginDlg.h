#pragma once
#include "CImageButton.h"
#include "CDragDialogEx.h"

// CLoginDlg 对话框

class CLoginDlg : public CDragDialogEx
{
	DECLARE_DYNAMIC(CLoginDlg)

public:
	CLoginDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CLoginDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LOGIN };
#endif

protected:
	HICON m_hIcon;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CImageButton bnLogin;
	CImageButton bnClose;
	CImageButton bnMiniMize;
	afx_msg void OnBnClickedClose();
	afx_msg void OnBnClickedMinimize();
	afx_msg void OnStnClickedRegister();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnStnClickedForgetpassword();
	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();
};
