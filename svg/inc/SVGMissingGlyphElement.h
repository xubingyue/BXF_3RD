//////////////////////////////////////////////////////////////////////////////
// Name:        SVGMissingGlyphElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_MISSING_GLYPH_ELEMENT_H
#define WX_SVG_MISSING_GLYPH_ELEMENT_H

#include "SVGElement.h"
#include "SVGStylable.h"
#include "String_wxsvg.h"
#include "Element.h"

class wxSVGMissingGlyphElement:
  public wxSVGElement,
  public wxSVGStylable
{
  public:
    wxSVGMissingGlyphElement(std::wstring tagName = _T("missing-glyph")):
      wxSVGElement(tagName) {}
    virtual ~wxSVGMissingGlyphElement() {}
    wxSvgXmlNode* CloneNode(bool deep = true) { return new wxSVGMissingGlyphElement(*this); }
    bool HasAttribute(const std::wstring& name);
    std::wstring GetAttribute(const std::wstring& name);
    bool SetAttribute(const std::wstring& name, const std::wstring& value);
    wxSvgXmlAttrHash GetAttributes() const;
    virtual wxSVGDTD GetDtd() const { return wxSVG_MISSING_GLYPH_ELEMENT; }
};

#endif // WX_SVG_MISSING_GLYPH_ELEMENT_H
