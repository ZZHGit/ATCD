// -*- C++ -*-
// $Id$

// ============================================================================
//
// = LIBRARY
//    TAO
//
// = FILENAME
//    UTF16_BOM_Factory.h
//
// = DESCRIPTION
//    Loader for an instance of the UTF16_BOM_Translator.
//
// = AUTHOR
//    Phil Mesnier <mesnier_p@ociweb.com>
//
// ============================================================================

#ifndef UTF16_BOM_FACTORY_H
#define UTF16_BOM_FACTORY_H

#include /**/ "ace/pre.h"
#include "ace/Service_Config.h"
#include "tao/Codeset_Translator_Factory.h"

#include "UTF16_BOM_Translator.h"

class TAO_Export UTF16_BOM_Factory : public  TAO_Codeset_Translator_Factory
{
public:
  UTF16_BOM_Factory ();
  virtual ~UTF16_BOM_Factory ();
  virtual int init (int argc, ACE_TCHAR *argv[]);

  /// ncs returns the translator's native codeset ID.
  CONV_FRAME::CodeSetId ncs () const;
  /// tcs returns the translator's transmission codeset ID.
  CONV_FRAME::CodeSetId tcs () const;

  /// Assign the translator to the input CDR. The inherited assign_i is used
  /// to assign either a char or wchar translator, depending on the base type
  /// of NCS_TO_TCS. A null input CDR is permitted, in which case assign is a
  /// no-op.
  virtual void assign (TAO_InputCDR *) const;
  /// Assign the translator to the output CDR. The inherited assign_i is used
  /// to assign either a char or wchar translator, depending on the base type
  /// of NCS_TO_TCS. A null output CDR is permitted, in which case assign is a
  /// no-op.
  virtual void assign (TAO_OutputCDR *) const;

private:
  void create_translator () const;
  int parse_one_arg (int argc, ACE_TCHAR *argv[]);

private:
  UTF16_BOM_Translator *translator_;
  bool forceBE_;    // force big endian wchar, warray, & wstring
};

ACE_STATIC_SVC_DECLARE_EXPORT (TAO, UTF16_BOM_Factory)
ACE_FACTORY_DECLARE (TAO, UTF16_BOM_Factory)

#include /**/ "ace/post.h"
#endif /* UTF16_BOM_FACTORY_H */
