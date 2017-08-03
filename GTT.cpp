#include "GTT.h"

GTT::GTT(const wxString& title)
       : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(250, 150))
{
      WxGrid1 = new wxGrid(this, 1005, wxPoint(16, 83), wxSize(480, 289), wxRAISED_BORDER);
	WxGrid1->SetFont(wxFont(8, wxSWISS, wxNORMAL, wxNORMAL, false, wxT("Segoe UI")));
	WxGrid1->SetDefaultColSize(80);
	WxGrid1->SetDefaultRowSize(20);
	WxGrid1->SetRowLabelSize(20);
	WxGrid1->SetColLabelSize(25);
	WxGrid1->CreateGrid(12,8,wxGrid::wxGridSelectRows);
  
  Centre();
}