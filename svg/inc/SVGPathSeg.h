//////////////////////////////////////////////////////////////////////////////
// Name:        SVGPathSeg.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_PATH_SEG_H
#define WX_SVG_PATH_SEG_H

#include "String_wxsvg.h"


enum wxPATHSEG
{
  wxPATHSEG_UNKNOWN = 0,
  wxPATHSEG_CLOSEPATH = 1,
  wxPATHSEG_MOVETO_ABS = 2,
  wxPATHSEG_MOVETO_REL = 3,
  wxPATHSEG_LINETO_ABS = 4,
  wxPATHSEG_LINETO_REL = 5,
  wxPATHSEG_CURVETO_CUBIC_ABS = 6,
  wxPATHSEG_CURVETO_CUBIC_REL = 7,
  wxPATHSEG_CURVETO_QUADRATIC_ABS = 8,
  wxPATHSEG_CURVETO_QUADRATIC_REL = 9,
  wxPATHSEG_ARC_ABS = 10,
  wxPATHSEG_ARC_REL = 11,
  wxPATHSEG_LINETO_HORIZONTAL_ABS = 12,
  wxPATHSEG_LINETO_HORIZONTAL_REL = 13,
  wxPATHSEG_LINETO_VERTICAL_ABS = 14,
  wxPATHSEG_LINETO_VERTICAL_REL = 15,
  wxPATHSEG_CURVETO_CUBIC_SMOOTH_ABS = 16,
  wxPATHSEG_CURVETO_CUBIC_SMOOTH_REL = 17,
  wxPATHSEG_CURVETO_QUADRATIC_SMOOTH_ABS = 18,
  wxPATHSEG_CURVETO_QUADRATIC_SMOOTH_REL = 19
};

class wxSVGPathSeg
{
  protected:
    wxPATHSEG m_pathSegType;
    std::wstring m_pathSegTypeAsLetter;

  public:
    inline wxPATHSEG GetPathSegType() const { return m_pathSegType; }
    inline void SetPathSegType(const wxPATHSEG& n) { m_pathSegType = n; }

    inline const std::wstring& GetPathSegTypeAsLetter() const { return m_pathSegTypeAsLetter; }
    inline void SetPathSegTypeAsLetter(const std::wstring& n) { m_pathSegTypeAsLetter = n; }

  public:
    wxSVGPathSeg(wxPATHSEG type = wxPATHSEG_UNKNOWN) { m_pathSegType = type; }
    virtual ~wxSVGPathSeg() {}
};

#endif // WX_SVG_PATH_SEG_H
