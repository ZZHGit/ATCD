// $Id$
//
// ****              Code generated by the                 ****
// ****  Component Integrated ACE ORB (CIAO) CIDL Compiler ****
// CIAO has been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// CIDL Compiler has been developed by:
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about CIAO is available at:
//    http://www.dre.vanderbilt.edu/CIAO

#ifndef CIAO_SIMPLENULL_EXEC_H
#define CIAO_SIMPLENULL_EXEC_H

#include /**/ "ace/pre.h"

#include "SimpleNullEC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "SimpleNull_exec_export.h"
#include "tao/LocalObject.h"

namespace CIDL_SimpleNull_Impl
{
  class SIMPLENULL_EXEC_Export SimpleNull_exec_i
    : public virtual SimpleProvider_Exec,
      public virtual TAO_Local_RefCounted_Object
  {
    public:
    SimpleNull_exec_i (void);
    virtual ~SimpleNull_exec_i (void);

    // Supported or inherited operations.

    // Attribute operations.

    // Port operations.

    // Operations from Components::SessionComponent

    virtual void
    set_session_context (
      ::Components::SessionContext_ptr ctx);

    virtual void configuration_complete ();

    virtual void ccm_activate ();

    virtual void ccm_passivate ();

    virtual void ccm_remove ();

    private:
    ::Simple::CCM_SimpleNull_Context_var context_;
  };

  class SIMPLENULL_EXEC_Export SimpleNullHome_exec_i
    : public virtual SimpleNullHome_Exec,
      public virtual TAO_Local_RefCounted_Object
  {
    public:
    SimpleNullHome_exec_i (void);
    virtual ~SimpleNullHome_exec_i (void);

    // Supported or inherited operations.

    // Home operations.

    // Factory and finder operations.

    // Attribute operations.

    // Implicit operations.

    virtual ::Components::EnterpriseComponent_ptr
    create ();
  };

  extern "C" SIMPLENULL_EXEC_Export ::Components::HomeExecutorBase_ptr
  create_Simple_SimpleNullHome_Impl (void);
}

#include /**/ "ace/post.h"

#endif /* CIAO_SIMPLENULL_EXEC_H */

