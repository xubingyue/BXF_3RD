//////////////////////////////////////////////////////////////////////////////
// Name:        SVGFETileElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_FE_TILE_ELEMENT_H
#define WX_SVG_FE_TILE_ELEMENT_H

#include "SVGElement.h"
#include "SVGFilterPrimitiveStandardAttributes.h"
#include "SVGAnimatedString.h"
#include "String_wxsvg.h"
#include "Element.h"

class wxSVGFETileElement:
  public wxSVGElement,
  public wxSVGFilterPrimitiveStandardAttributes
{
  protected:
    wxSVGAnimatedString m_in1;

  public:
    inline const wxSVGAnimatedString& GetIn1() const { return m_in1; }
    inline void SetIn1(const wxSVGAnimatedString& n) { m_in1 = n; }
    inline void SetIn1(const std::wstring& n) { m_in1.SetBaseVal(n); }

  public:
    wxSVGFETileElement(std::wstring tagName = _T("feTile")):
      wxSVGElement(tagName) {}
    virtual ~wxSVGFETileElement() {}
    wxSvgXmlNode* CloneNode(bool deep = true) { return new wxSVGFETileElement(*this); }
    bool HasAttribute(const std::wstring& name);
    std::wstring GetAttribute(const std::wstring& name);
    bool SetAttribute(const std::wstring& name, const std::wstring& value);
    wxSvgXmlAttrHash GetAttributes() const;
    virtual wxSVGDTD GetDtd() const { return wxSVG_FETILE_ELEMENT; }
};

#endif // WX_SVG_FE_TILE_ELEMENT_H
