//////////////////////////////////////////////////////////////////////////////
// Name:        SVGAnimateElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_ANIMATE_ELEMENT_H
#define WX_SVG_ANIMATE_ELEMENT_H

#include "SVGAnimationElement.h"
#include "String_wxsvg.h"
#include "Element.h"

class wxSVGAnimateElement:
  public wxSVGAnimationElement
{
  public:
    wxSVGAnimateElement(std::wstring tagName = _T("animate")):
      wxSVGAnimationElement(tagName) {}
    virtual ~wxSVGAnimateElement() {}
    wxSvgXmlNode* CloneNode(bool deep = true) { return new wxSVGAnimateElement(*this); }
    bool HasAttribute(const std::wstring& name);
    std::wstring GetAttribute(const std::wstring& name);
    bool SetAttribute(const std::wstring& name, const std::wstring& value);
    wxSvgXmlAttrHash GetAttributes() const;
    virtual wxSVGDTD GetDtd() const { return wxSVG_ANIMATE_ELEMENT; }
};

#endif // WX_SVG_ANIMATE_ELEMENT_H
