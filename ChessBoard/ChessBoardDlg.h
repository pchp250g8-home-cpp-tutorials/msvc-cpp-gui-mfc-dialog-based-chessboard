// ChessBoardDlg.h : header file
//
#pragma once
// CChessBoardDlg dialog
class CChessBoardDlg : public CDialogEx
{
// Construction
public:
	CChessBoardDlg(CWnd* pParent = nullptr);	// standard constructor
// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CHESSBOARD_DIALOG };
#endif
protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
// Implementation
protected:
	HICON m_hIcon;
	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	DECLARE_MESSAGE_MAP()
private:
	D3DPRESENT_PARAMETERS d3dpp;
	CComPtr<IDirect3D9> m_d3d9;
	CComPtr<IDirect3DDevice9> m_d3d_Device;
	BOOL InitializeDirect3D();
	void DestroyDirect3D();
	void RenderScene();
};
