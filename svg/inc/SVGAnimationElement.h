//////////////////////////////////////////////////////////////////////////////
// Name:        SVGAnimationElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_ANIMATION_ELEMENT_H
#define WX_SVG_ANIMATION_ELEMENT_H

class wxSVGElement;

#include "SVGElement.h"
#include "SVGTests.h"
#include "SVGExternalResourcesRequired.h"
#include "ElementTimeControl.h"
#include "EventTarget.h"
#include "String_wxsvg.h"
#include "Element.h"

class wxSVGAnimationElement:
  public wxSVGElement,
  public wxSVGTests,
  public wxSVGExternalResourcesRequired,
  public wxElementTimeControl,
  public wxEventTarget
{
  protected:
    wxSVGElement* m_targetElement;

  public:
    inline wxSVGElement* GetTargetElement() const { return m_targetElement; }
    inline void SetTargetElement(wxSVGElement* n) { m_targetElement = n; }

  public:
    wxSVGAnimationElement(std::wstring tagName = _T("")):
      wxSVGElement(tagName), m_targetElement(NULL) {}
    virtual ~wxSVGAnimationElement() {}
    virtual double GetStartTime();
    virtual double GetCurrentTime();
    virtual double GetSimpleDuration();
    bool HasAttribute(const std::wstring& name);
    std::wstring GetAttribute(const std::wstring& name);
    bool SetAttribute(const std::wstring& name, const std::wstring& value);
    wxSvgXmlAttrHash GetAttributes() const;
};

#endif // WX_SVG_ANIMATION_ELEMENT_H
