#pragma once


// CDragDialogEx 对话框

class CDragDialogEx : public CDialogEx
{
	DECLARE_DYNAMIC(CDragDialogEx)

public:
	using CDialogEx::CDialogEx;

	CDragDialogEx(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CDragDialogEx();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CDragDialogEx };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg LRESULT OnNcHitTest(CPoint point);
};
