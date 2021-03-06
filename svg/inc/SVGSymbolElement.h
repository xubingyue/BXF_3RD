//////////////////////////////////////////////////////////////////////////////
// Name:        SVGSymbolElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_SYMBOL_ELEMENT_H
#define WX_SVG_SYMBOL_ELEMENT_H

#include "SVGElement.h"
#include "SVGLangSpace.h"
#include "SVGExternalResourcesRequired.h"
#include "SVGStylable.h"
#include "SVGFitToViewBox.h"
#include "EventTarget.h"
#include "String_wxsvg.h"
#include "Element.h"

class wxSVGSymbolElement:
  public wxSVGElement,
  public wxSVGLangSpace,
  public wxSVGExternalResourcesRequired,
  public wxSVGStylable,
  public wxSVGFitToViewBox,
  public wxEventTarget
{
  public:
    wxSVGSymbolElement(std::wstring tagName = _T("symbol")):
      wxSVGElement(tagName) {}
    virtual ~wxSVGSymbolElement() {}
    wxSvgXmlNode* CloneNode(bool deep = true) { return new wxSVGSymbolElement(*this); }
    bool HasAttribute(const std::wstring& name);
    std::wstring GetAttribute(const std::wstring& name);
    bool SetAttribute(const std::wstring& name, const std::wstring& value);
    wxSvgXmlAttrHash GetAttributes() const;
    virtual wxSVGDTD GetDtd() const { return wxSVG_SYMBOL_ELEMENT; }
};

#endif // WX_SVG_SYMBOL_ELEMENT_H
