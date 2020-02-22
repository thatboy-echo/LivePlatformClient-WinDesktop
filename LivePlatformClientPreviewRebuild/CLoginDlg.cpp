// CLoginDlg.cpp: 实现文件
//

#include "pch.h"
#include "LivePlatformClientPreviewRebuild.h"
#include "CLoginDlg.h"
#include "afxdialogex.h"


// CLoginDlg 对话框

IMPLEMENT_DYNAMIC(CLoginDlg, CDragDialogEx)

CLoginDlg::CLoginDlg(CWnd* pParent /*=nullptr*/)
	: CDragDialogEx(IDD_LOGIN, pParent)
	, szAccount(_T(""))
	, szPassword(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDI_LIVEBLUE);
}

CLoginDlg::~CLoginDlg()
{
}

void CLoginDlg::DoDataExchange(CDataExchange* pDX)
{
	CDragDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDOK, bnLogin);
	DDX_Control(pDX, IDCLOSE, bnClose);
	DDX_Control(pDX, IDMINIMIZE, bnMiniMize);
	DDX_CBString(pDX, IDCSQ_ACCOUNT, szAccount);
	DDX_Text(pDX, IDCSQ_PASSWORD, szPassword);
	DDV_MaxChars(pDX, szPassword, 20);
}


BEGIN_MESSAGE_MAP(CLoginDlg, CDragDialogEx)
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDCLOSE, &CLoginDlg::OnBnClickedClose)
	ON_BN_CLICKED(IDMINIMIZE, &CLoginDlg::OnBnClickedMinimize)
	ON_STN_CLICKED(IDCSQ_REGISTER, &CLoginDlg::OnStnClickedRegister)
	ON_STN_CLICKED(IDCSQ_FORGETPASSWORD, &CLoginDlg::OnStnClickedForgetpassword)
	ON_BN_CLICKED(IDOK, &CLoginDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// CLoginDlg 消息处理程序


HCURSOR CLoginDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


BOOL CLoginDlg::OnInitDialog()
{
	CDragDialogEx::OnInitDialog();

	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	//test
	// CDragDialogEx dlg;
	// dlg.DoModal();

	// 加载图标
	bnLogin.LoadImagesFromResource(IDBSQ_BNLOGIN);
	bnClose.LoadImagesFromResource(IDBSQ_BNCLOSE);
	bnMiniMize.LoadImagesFromResource(IDBSQ_BNMINIMIZE);


	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}

void CLoginDlg::OnBnClickedClose()
{
	CDragDialogEx::EndDialog(IDCLOSE);
	CDragDialogEx::OnClose();
}


void CLoginDlg::OnBnClickedMinimize()
{
	CDragDialogEx::ShowWindow(SW_MINIMIZE);
}

void CLoginDlg::OnStnClickedRegister()
{
	ShellExecute(m_hWnd, NULL, _T("http://game.thatboy.info/command/echo%20This%20url%20is%20for%20register."), NULL, NULL, SW_NORMAL);
}


void CLoginDlg::OnStnClickedForgetpassword()
{
	ShellExecute(m_hWnd, NULL, _T("http://game.thatboy.info/minesweeper.html"), NULL, NULL, SW_NORMAL);
}


void CLoginDlg::OnBnClickedOk()
{
	ShellExecute(m_hWnd, NULL, _T("http://game.thatboy.info/"), NULL, NULL, SW_NORMAL);
	CDragDialogEx::OnOK();
}
