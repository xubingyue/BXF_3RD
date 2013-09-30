//////////////////////////////////////////////////////////////////////////////
// Name:        SVGCursorElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_CURSOR_ELEMENT_H
#define WX_SVG_CURSOR_ELEMENT_H

#include "SVGElement.h"
#include "SVGURIReference.h"
#include "SVGTests.h"
#include "SVGExternalResourcesRequired.h"
#include "SVGAnimatedLength.h"
#include "SVGSVGElement.h"
#include "String_wxsvg.h"
#include "Element.h"

class wxSVGCursorElement:
  public wxSVGElement,
  public wxSVGURIReference,
  public wxSVGTests,
  public wxSVGExternalResourcesRequired
{
  protected:
    wxSVGAnimatedLength m_x;
    wxSVGAnimatedLength m_y;

  public:
    inline const wxSVGAnimatedLength& GetX() const { WX_SVG_ANIM_LENGTH_CALC_WIDTH(m_x, GetViewportElement()); return m_x; }
    inline void SetX(const wxSVGAnimatedLength& n) { m_x = n; }
    inline void SetX(const wxSVGLength& n) { m_x.SetBaseVal(n); }

    inline const wxSVGAnimatedLength& GetY() const { WX_SVG_ANIM_LENGTH_CALC_HEIGHT(m_y, GetViewportElement()); return m_y; }
    inline void SetY(const wxSVGAnimatedLength& n) { m_y = n; }
    inline void SetY(const wxSVGLength& n) { m_y.SetBaseVal(n); }

  public:
    wxSVGCursorElement(std::wstring tagName = _T("cursor")):
      wxSVGElement(tagName) {}
    virtual ~wxSVGCursorElement() {}
    wxSvgXmlNode* CloneNode(bool deep = true) { return new wxSVGCursorElement(*this); }
    bool HasAttribute(const std::wstring& name);
    std::wstring GetAttribute(const std::wstring& name);
    bool SetAttribute(const std::wstring& name, const std::wstring& value);
    wxSvgXmlAttrHash GetAttributes() const;
    virtual wxSVGDTD GetDtd() const { return wxSVG_CURSOR_ELEMENT; }
};

#endif // WX_SVG_CURSOR_ELEMENT_H
