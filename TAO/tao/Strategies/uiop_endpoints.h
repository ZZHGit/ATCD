/* -*- C++ -*- $Id$ */
// $Id$
//
// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO and the TAO IDL Compiler have been developed by the Center for
// Distributed Object Computing at Washington University, St. Louis.
//
// Information about TAO is available at:
//                 http://www.cs.wustl.edu/~schmidt/TAO.html

#ifndef _TAO_IDL_UIOP_ENDPOINTSC_H_
#define _TAO_IDL_UIOP_ENDPOINTSC_H_

#include /**/ "ace/pre.h"

#include "strategies_export.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/Managed_Types.h"
#include "tao/Sequence.h"
#include "tao/Any.h"
#include "tao/Typecode.h"
#include "tao/CDR.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_Strategies_Export

#if defined (TAO_EXPORT_NESTED_CLASSES)
#  if defined (TAO_EXPORT_NESTED_MACRO)
#    undef TAO_EXPORT_NESTED_MACRO
#  endif /* defined (TAO_EXPORT_NESTED_MACRO) */
#  define TAO_EXPORT_NESTED_MACRO TAO_Strategies_Export
#endif /* TAO_EXPORT_NESTED_CLASSES */

#if defined(_MSC_VER)
#if (_MSC_VER >= 1200)
#pragma warning(push)
#endif /* _MSC_VER >= 1200 */
#pragma warning(disable:4250)
#endif /* _MSC_VER */

struct TAO_UIOP_Endpoint_Info;
class TAO_UIOP_Endpoint_Info_var;

struct TAO_Strategies_Export TAO_UIOP_Endpoint_Info
{
  typedef TAO_UIOP_Endpoint_Info_var _var_type;

  static void _tao_any_destructor (void*);

  TAO_String_Manager rendezvous_point;
  CORBA::Short priority;
};

extern TAO_Strategies_Export CORBA::TypeCode_ptr  _tc_TAO_UIOP_Endpoint_Info;


#if !defined (TAO_USE_SEQUENCE_TEMPLATES)

#if !defined (__TAO_UNBOUNDED_SEQUENCE_TAO_UIOPENDPOINTSEQUENCE_CH_)
#define __TAO_UNBOUNDED_SEQUENCE_TAO_UIOPENDPOINTSEQUENCE_CH_

  class TAO_EXPORT_NESTED_MACRO _TAO_Unbounded_Sequence_TAO_UIOPEndpointSequence : public TAO_Unbounded_Base_Sequence
  {
  public:
    // = Initialization and termination methods.

    _TAO_Unbounded_Sequence_TAO_UIOPEndpointSequence (void); // Default constructor.
    _TAO_Unbounded_Sequence_TAO_UIOPEndpointSequence (CORBA::ULong maximum);
    _TAO_Unbounded_Sequence_TAO_UIOPEndpointSequence (CORBA::ULong maximum,
      CORBA::ULong length,
      TAO_UIOP_Endpoint_Info *data,
      CORBA::Boolean release = 0);
    _TAO_Unbounded_Sequence_TAO_UIOPEndpointSequence (const _TAO_Unbounded_Sequence_TAO_UIOPEndpointSequence &rhs);
    _TAO_Unbounded_Sequence_TAO_UIOPEndpointSequence &operator= (const _TAO_Unbounded_Sequence_TAO_UIOPEndpointSequence &rhs);
    virtual ~_TAO_Unbounded_Sequence_TAO_UIOPEndpointSequence (void); // Dtor.
    // = Accessors.
    TAO_UIOP_Endpoint_Info &operator[] (CORBA::ULong i);
    const TAO_UIOP_Endpoint_Info &operator[] (CORBA::ULong i) const;
    // = Static operations.
    static TAO_UIOP_Endpoint_Info *allocbuf (CORBA::ULong size);
    static void freebuf (TAO_UIOP_Endpoint_Info *buffer);
    virtual void _allocate_buffer (CORBA::ULong length);
    virtual void _deallocate_buffer (void);
    // Implement the TAO_Base_Sequence methods (see Sequence.h)

    TAO_UIOP_Endpoint_Info *get_buffer (CORBA::Boolean orphan = 0);
    const TAO_UIOP_Endpoint_Info *get_buffer (void) const;
    void replace (CORBA::ULong max,
      CORBA::ULong length,
      TAO_UIOP_Endpoint_Info *data,
      CORBA::Boolean release);
  };

#endif /* end #if !defined */


#endif /* !TAO_USE_SEQUENCE_TEMPLATES */

#if !defined (_TAO_UIOPENDPOINTSEQUENCE_CH_)
#define _TAO_UIOPENDPOINTSEQUENCE_CH_

class TAO_UIOPEndpointSequence;
class TAO_UIOPEndpointSequence_var;

// *************************************************************
// TAO_UIOPEndpointSequence
// *************************************************************

class TAO_Strategies_Export TAO_UIOPEndpointSequence : public
#if !defined (TAO_USE_SEQUENCE_TEMPLATES)
  _TAO_Unbounded_Sequence_TAO_UIOPEndpointSequence
#else /* TAO_USE_SEQUENCE_TEMPLATES */
  TAO_Unbounded_Sequence<TAO_UIOP_Endpoint_Info>
#endif /* !TAO_USE_SEQUENCE_TEMPLATES */
{
public:
  TAO_UIOPEndpointSequence (void); // default ctor
  TAO_UIOPEndpointSequence (CORBA::ULong max); // uses max size
  TAO_UIOPEndpointSequence (
    CORBA::ULong max,
    CORBA::ULong length,
    TAO_UIOP_Endpoint_Info *buffer,
    CORBA::Boolean release=0
  );
  TAO_UIOPEndpointSequence (const TAO_UIOPEndpointSequence &); // copy ctor
  ~TAO_UIOPEndpointSequence (void);
  static void _tao_any_destructor (void*);

  typedef TAO_UIOPEndpointSequence_var _var_type;
};

#endif /* end #if !defined */


#if !defined (_TAO_UIOPENDPOINTSEQUENCE___VAR_CH_)
#define _TAO_UIOPENDPOINTSEQUENCE___VAR_CH_

// *************************************************************
// class TAO_UIOPEndpointSequence_var
// *************************************************************

class TAO_Strategies_Export TAO_UIOPEndpointSequence_var
{
public:
  TAO_UIOPEndpointSequence_var (void); // default constructor
  TAO_UIOPEndpointSequence_var (TAO_UIOPEndpointSequence *);
  TAO_UIOPEndpointSequence_var (const TAO_UIOPEndpointSequence_var &); // copy constructor
  ~TAO_UIOPEndpointSequence_var (void); // destructor

  TAO_UIOPEndpointSequence_var &operator= (TAO_UIOPEndpointSequence *);
  TAO_UIOPEndpointSequence_var &operator= (const TAO_UIOPEndpointSequence_var &);
  TAO_UIOPEndpointSequence *operator-> (void);
  const TAO_UIOPEndpointSequence *operator-> (void) const;

  operator const TAO_UIOPEndpointSequence &() const;
  operator TAO_UIOPEndpointSequence &();
  operator TAO_UIOPEndpointSequence &() const;
  operator TAO_UIOPEndpointSequence *&(); // variable-size base types only

  TAO_UIOP_Endpoint_Info &operator[] (CORBA::ULong index);
  // in, inout, out, _retn
  const TAO_UIOPEndpointSequence &in (void) const;
  TAO_UIOPEndpointSequence &inout (void);
  TAO_UIOPEndpointSequence *&out (void);
  TAO_UIOPEndpointSequence *_retn (void);
  TAO_UIOPEndpointSequence *ptr (void) const;

private:
  TAO_UIOPEndpointSequence *ptr_;
};


#endif /* end #if !defined */

extern TAO_Strategies_Export CORBA::TypeCode_ptr  _tc_TAO_UIOPEndpointSequence;

#ifndef __ACE_INLINE__

TAO_Strategies_Export CORBA::Boolean operator<< (TAO_OutputCDR &, const TAO_UIOP_Endpoint_Info &);
TAO_Strategies_Export CORBA::Boolean operator>> (TAO_InputCDR &, TAO_UIOP_Endpoint_Info &);

#if !defined _TAO_CDR_OP_TAO_UIOPEndpointSequence_H_
#define _TAO_CDR_OP_TAO_UIOPEndpointSequence_H_

TAO_Strategies_Export CORBA::Boolean operator<< (
    TAO_OutputCDR &,
    const TAO_UIOPEndpointSequence &
  );
TAO_Strategies_Export CORBA::Boolean operator>> (
    TAO_InputCDR &,
    TAO_UIOPEndpointSequence &
  );

#endif /* _TAO_CDR_OP_TAO_UIOPEndpointSequence_H_ */


#endif /* __ACE_INLINE__ */


#if defined (__ACE_INLINE__)
#include "uiop_endpoints.i"
#endif /* defined INLINE */

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma warning(pop)
#endif /* _MSC_VER */

#include /**/ "ace/post.h"

#endif /* ifndef */
