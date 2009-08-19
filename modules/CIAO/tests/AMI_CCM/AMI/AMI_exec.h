// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler v1.7.1 ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be/be_codegen.cpp:1217

#ifndef CIAO_AMI_EXEC_H_
#define CIAO_AMI_EXEC_H_


#include "AMIEC.h"
#include "AMI_exec_export.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/LocalObject.h"

namespace CIAO_Hello_AMI_AMI_Impl
{
  class  AMI_ami_foo_exec_i
    : public virtual ::CCM_AMI::CCM_AMI_ami_foo,
      public virtual ::CORBA::LocalObject
  {
  public:
    AMI_ami_foo_exec_i (::CCM_AMI::AMI_foo_ptr foo_receiver);
    virtual ~AMI_ami_foo_exec_i (void);
    
    // Operations and attributes from ::CCM_AMI::AMI_ami_foo
    
    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:46
    
    virtual void
    sendc_asynch_foo (
      const char * in_str,
      ::CCM_AMI::AMI_foo_callback_ptr foo_callback);
  private:
    ::CCM_AMI::AMI_foo_var foo_receiver_;
  };
  
  class  AMI_exec_i
    : public virtual AMI_Exec,
      public virtual ::CORBA::LocalObject
  {
  public:
    AMI_exec_i (void);
    virtual ~AMI_exec_i (void);
    
    // Supported operations and attributes.
    
    // Component attributes.
    
    // Port operations.
    
    virtual ::CCM_AMI::CCM_AMI_ami_foo_ptr
    get_perform_asynch_foo (void);
    
    // Operations from Components::SessionComponent.
    
    virtual void
    set_session_context (
      ::Components::SessionContext_ptr ctx);
    
    virtual void configuration_complete (void);
    
    virtual void ccm_activate (void);
    virtual void ccm_passivate (void);
    virtual void ccm_remove (void);
  
  private:
    ::Hello_AMI::CCM_AMI_Context_var context_;
  };
  
  extern "C" AMI_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_Hello_AMI_AMI_Impl (void);
}

namespace CIAO_Hello_AMI_AMI_Impl
{
  class  AMIHome_exec_i
    : public virtual AMIHome_Exec,
      public virtual ::CORBA::LocalObject
  {
  public:
    AMIHome_exec_i (void);
    
    virtual ~AMIHome_exec_i (void);
    
    // All operations and attributes.
    
    // Factory operations.
    
    // Finder operations.
    
    // Implicit operations.
    
    virtual ::Components::EnterpriseComponent_ptr
    create (void);
  };
  
  extern "C" AMI_EXEC_Export ::Components::HomeExecutorBase_ptr
  create_Hello_AMI_AMIHome_Impl (void);
}

#endif /* ifndef */

