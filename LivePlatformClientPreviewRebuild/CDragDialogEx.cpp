// CDragDialogEx.cpp: 实现文件
//

#include "pch.h"
#include "LivePlatformClientPreviewRebuild.h"
#include "CDragDialogEx.h"
#include "afxdialogex.h"


// CDragDialogEx 对话框

IMPLEMENT_DYNAMIC(CDragDialogEx, CDialogEx)

CDragDialogEx::CDragDialogEx(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_CDragDialogEx, pParent)
{

}

CDragDialogEx::~CDragDialogEx()
{
}

void CDragDialogEx::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDragDialogEx, CDialogEx)
	ON_WM_NCHITTEST()
END_MESSAGE_MAP()


// CDragDialogEx 消息处理程序


BOOL CDragDialogEx::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


LRESULT CDragDialogEx::OnNcHitTest(CPoint point)
{
	UINT nHitTest = CDialogEx::OnNcHitTest(point);
	return (nHitTest == HTCLIENT) ? HTCAPTION : nHitTest;
}
