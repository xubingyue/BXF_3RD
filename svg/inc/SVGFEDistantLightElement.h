//////////////////////////////////////////////////////////////////////////////
// Name:        SVGFEDistantLightElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_FE_DISTANT_LIGHT_ELEMENT_H
#define WX_SVG_FE_DISTANT_LIGHT_ELEMENT_H

#include "SVGElement.h"
#include "SVGAnimatedNumber.h"
#include "String_wxsvg.h"
#include "Element.h"

class wxSVGFEDistantLightElement:
  public wxSVGElement
{
  protected:
    wxSVGAnimatedNumber m_azimuth;
    wxSVGAnimatedNumber m_elevation;

  public:
    inline const wxSVGAnimatedNumber& GetAzimuth() const { return m_azimuth; }
    inline void SetAzimuth(const wxSVGAnimatedNumber& n) { m_azimuth = n; }
    inline void SetAzimuth(float n) { m_azimuth.SetBaseVal(n); }

    inline const wxSVGAnimatedNumber& GetElevation() const { return m_elevation; }
    inline void SetElevation(const wxSVGAnimatedNumber& n) { m_elevation = n; }
    inline void SetElevation(float n) { m_elevation.SetBaseVal(n); }

  public:
    wxSVGFEDistantLightElement(std::wstring tagName = _T("feDistantLight")):
      wxSVGElement(tagName) {}
    virtual ~wxSVGFEDistantLightElement() {}
    wxSvgXmlNode* CloneNode(bool deep = true) { return new wxSVGFEDistantLightElement(*this); }
    bool HasAttribute(const std::wstring& name);
    std::wstring GetAttribute(const std::wstring& name);
    bool SetAttribute(const std::wstring& name, const std::wstring& value);
    wxSvgXmlAttrHash GetAttributes() const;
    virtual wxSVGDTD GetDtd() const { return wxSVG_FEDISTANTLIGHT_ELEMENT; }
};

#endif // WX_SVG_FE_DISTANT_LIGHT_ELEMENT_H
