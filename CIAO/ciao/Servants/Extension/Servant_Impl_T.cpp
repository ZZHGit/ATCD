// $Id$

#ifndef CIAO_SERVANT_IMPL_T_C
#define CIAO_SERVANT_IMPL_T_C

namespace CIAO
{
  template <typename BASE_SKEL,
            typename EXEC,
            typename CONTEXT>
  Extension_Servant_Impl_T<BASE_SKEL, EXEC, CONTEXT>::Extension_Servant_Impl_T (
        EXEC * exe,
        Components::CCMHome_ptr home,
        const char * ins_name,
        Home_Servant_Impl_Base *home_servant,
        ::CIAO::Extension_Container_ptr c)
    : CONTEXT::svnt_base_type (home, home_servant, c),
      activated_ (false),
      configuration_completed_ (false),
      executor_ (EXEC::_duplicate (exe)),
      context_ (0),
      ins_name_ (ins_name)
  {
    ACE_NEW (this->context_,
             CONTEXT (home, c, this, ins_name));

    ::Components::ExtensionComponent_var ecom =
      ::Components::ExtensionComponent::_narrow (exe);

    if (! ::CORBA::is_nil (ecom.in ()))
      {
        ecom->set_extension_context (this->context_);
      }
    else
      {
        CIAO_DEBUG (6,
                    (LM_DEBUG, CLINFO
                     "Extension_Servant_Impl_T_T::Extension_Servant_Impl_T_T - "
                     "Couldn't set session context for %C\n",
                     ins_name));
      }
  }

  template <typename BASE_SKEL,
            typename EXEC,
            typename CONTEXT>
  Extension_Servant_Impl_T<BASE_SKEL, EXEC, CONTEXT>::~Extension_Servant_Impl_T (void)
  {
    if (this->executor_->_refcount_value () > 1)
      {
        CIAO_ERROR (1,
                    (LM_ERROR, CLINFO
                     "Extension_Servant_Impl_T_T::~Extension_Servant_Impl_T_T - "
                     "Executor object reference count is %u\n",
                     this->executor_->_refcount_value ()));
      }

    this->context_->_remove_ref ();
  }

  // Operations for CCMObject interface.
  template <typename BASE_SKEL,
            typename EXEC,
            typename CONTEXT>
  CORBA::Boolean
  Extension_Servant_Impl_T<BASE_SKEL, EXEC, CONTEXT>::same_component (
      CORBA::Object_ptr object_ref)
  {
    if (::CORBA::is_nil (object_ref))
      {
        throw ::CORBA::BAD_PARAM ();
      }

    ::CORBA::Object_var me; // @todo = this->context_->get_CCM_object ();

    if (::CORBA::is_nil (me.in ()))
      {
        throw ::CORBA::INTERNAL ();
      }

    ::CORBA::Object_var the_other = object_ref->_get_component ();

    return me->_is_equivalent (the_other.in ());

  }

  template <typename BASE_SKEL,
            typename EXEC,
            typename CONTEXT>
  ::Components::CCMHome_ptr
  Extension_Servant_Impl_T<BASE_SKEL, EXEC, CONTEXT>::get_ccm_home (void)
  {
    return this->context_->get_CCM_home ();
  }

  template <typename BASE_SKEL,
            typename EXEC,
            typename CONTEXT>
  Components::EnterpriseComponent_ptr
  Extension_Servant_Impl_T<BASE_SKEL, EXEC, CONTEXT>::get_executor (void)
  {
    return ::Components::EnterpriseComponent::_duplicate (this->executor_.in ());
  }

  template <typename BASE_SKEL,
            typename EXEC,
            typename CONTEXT>
  CORBA::Object_ptr
  Extension_Servant_Impl_T<BASE_SKEL, EXEC, CONTEXT>::_get_component (void)
  {
    ::Components::ExtensionContext_var ec =
      ::Components::ExtensionContext::_narrow (this->context_);

    if (! ::CORBA::is_nil (ec.in ()))
      {
// @todo        return sc->get_CCM_object ();
      }

    throw ::CORBA::INTERNAL ();
  }

  // CIAO-specific operations.

  template <typename BASE_SKEL,
            typename EXEC,
            typename CONTEXT>
  void
  Extension_Servant_Impl_T<BASE_SKEL, EXEC, CONTEXT>::activate_component (void)
  {
    if (this->configuration_completed_ && !this->activated_)
      {
        ::Components::ExtensionComponent_var temp =
          ::Components::ExtensionComponent::_narrow (this->executor_.in ());

        if (! ::CORBA::is_nil (temp.in ()))
          {
            // @todo temp->ccm_activate ();
            this->activated_ = true;
          }
      }
  }

  template <typename BASE_SKEL,
            typename EXEC,
            typename CONTEXT>
  void
  Extension_Servant_Impl_T<BASE_SKEL, EXEC, CONTEXT>::passivate_component (void)
  {
    if (this->activated_)
      {
        ::Components::ExtensionComponent_var temp =
          ::Components::ExtensionComponent::_narrow (this->executor_.in ());

        if (! ::CORBA::is_nil (temp.in ()))
          {
            // @todo temp->ccm_passivate ();
            this->activated_ = false;
          }
      }
  }

  template <typename BASE_SKEL,
            typename EXEC,
            typename CONTEXT>
  void
  Extension_Servant_Impl_T<BASE_SKEL, EXEC, CONTEXT>::configuration_complete (void)
  {
    if (!this->configuration_completed_)
      {
        ::Components::ExtensionComponent_var temp =
          ::Components::ExtensionComponent::_narrow (this->executor_.in ());

        if (! ::CORBA::is_nil (temp.in ()))
          {
            // @todo temp->configuration_complete ();
            this->configuration_completed_ = true;
          }
      }
  }

  template <typename BASE_SKEL,
            typename EXEC,
            typename CONTEXT>
  void
  Extension_Servant_Impl_T<BASE_SKEL, EXEC, CONTEXT>::ccm_remove (void)
  {
    ::Components::ExtensionComponent_var temp =
      ::Components::ExtensionComponent::_narrow (this->executor_.in ());

    if (! ::CORBA::is_nil (temp.in ()))
      {
        temp->ccm_remove ();
      }
    else
      {
        throw ::CORBA::INTERNAL ();
      }
  }
}

#endif /* CIAO_SERVANT_IMPL_T_C */
