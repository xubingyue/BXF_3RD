//////////////////////////////////////////////////////////////////////////////
// Name:        SVGDefinitionSrcElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_DEFINITION_SRC_ELEMENT_H
#define WX_SVG_DEFINITION_SRC_ELEMENT_H

#include "SVGElement.h"
#include "String_wxsvg.h"
#include "Element.h"

class wxSVGDefinitionSrcElement:
  public wxSVGElement
{
  public:
    wxSVGDefinitionSrcElement(std::wstring tagName = _T("definition-src")):
      wxSVGElement(tagName) {}
    virtual ~wxSVGDefinitionSrcElement() {}
    wxSvgXmlNode* CloneNode(bool deep = true) { return new wxSVGDefinitionSrcElement(*this); }
    bool HasAttribute(const std::wstring& name);
    std::wstring GetAttribute(const std::wstring& name);
    bool SetAttribute(const std::wstring& name, const std::wstring& value);
    wxSvgXmlAttrHash GetAttributes() const;
    virtual wxSVGDTD GetDtd() const { return wxSVG_DEFINITION_SRC_ELEMENT; }
};

#endif // WX_SVG_DEFINITION_SRC_ELEMENT_H
