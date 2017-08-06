#include "GTT.h"

GTT::GTT(const wxString& title)
       : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(850, 150))
{
      WxGrid1 = new wxGrid(this, 1005, wxPoint(16, 83), wxSize(480, 289), wxRAISED_BORDER);
	WxGrid1->SetFont(wxFont(8, wxSWISS, wxNORMAL, wxNORMAL, false, wxT("Segoe UI")));
	WxGrid1->SetDefaultColSize(80);
	WxGrid1->SetDefaultRowSize(20);
	WxGrid1->SetRowLabelSize(80);
	WxGrid1->SetColLabelSize(25);
	WxGrid1->CreateGrid(20,7,wxGrid::wxGridSelectRows);
    //WxGrid1->SetRowLabelValue(3, "Test");  
     WxGrid1->SetRowLabelSize(0);
     WxGrid1->SetColLabelValue(0,"TIME");
     WxGrid1->SetColLabelValue(1,"MON");
     WxGrid1->SetColLabelValue(2,"TUE");
     WxGrid1->SetColLabelValue(3,"WED");
     WxGrid1->SetColLabelValue(4,"THU");
     WxGrid1->SetColLabelValue(5,"FRI");
     WxGrid1->SetColLabelValue(6,"SAT");
     
//     wxGridCellAttr *ColumnAttr = new wxGridCellAttr;// 

     
     this->Maximize();
  Centre();
}