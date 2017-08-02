#include "main.h"
#include "GTT.h"

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{
    GTT *gtt = new GTT(wxT("GNU Time Table"));
    gtt->Show(true);

    return true;
}