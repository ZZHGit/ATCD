// $Id$

#include "ContentFilterSetting.h"
#include "dds4ccm/impl/logger/Log_Macros.h"
#include "dds4ccm/impl/dds/Utils.h"

namespace CIAO
{
  namespace DDS4CCM
  {
    CCM_DDS_ContentFilterSetting_i::CCM_DDS_ContentFilterSetting_i ()
    {
      DDS4CCM_TRACE ("CCM_DDS_ContentFilterSetting_i::CCM_DDS_ContentFilterSetting_i");
    }

    CCM_DDS_ContentFilterSetting_i::~CCM_DDS_ContentFilterSetting_i ()
    {
      DDS4CCM_TRACE ("CCM_DDS_ContentFilterSetting_i::~CCM_DDS_ContentFilterSetting_i");
    }

    ::CCM_DDS::QueryFilter *
    CCM_DDS_ContentFilterSetting_i::filter (void)
    {
      DDS4CCM_TRACE ("CCM_DDS_ContentFilterSetting_i::filter");

      return &this->filter_;
    }

    void
    CCM_DDS_ContentFilterSetting_i::filter (
      const ::CCM_DDS::QueryFilter & filter)
    {
      DDS4CCM_TRACE ("CCM_DDS_ContentFilterSetting_i::filter");

      this->filter_ = filter;
      DDS4CCM_DEBUG (6, (LM_DEBUG, CLINFO "CCM_DDS_ContentFilterSetting_i::filter - "));
      DDS4CCM_DEBUG (6, (LM_DEBUG, CLINFO "Expression : %C\t\n",
                                filter.expression.in ()));
      DDS4CCM_DEBUG (6, (LM_DEBUG, CLINFO "Parameters :\n"));
      for (::CORBA::ULong i = 0; i < filter.parameters.length (); ++i)
        {
          DDS4CCM_DEBUG (6, (LM_DEBUG, CLINFO "\t%C\n",
                                   filter.parameters[i].in ()));
        }
    }

    ::DDS::ContentFilteredTopic_ptr
    CCM_DDS_ContentFilterSetting_i::create_contentfilteredtopic (
      ::DDS::Topic_ptr topic,
      ::DDS::Subscriber_ptr subscriber)
    {
      ACE_CString name ("DDS4CCM_CFT_");
      name.append (topic->get_name (),
                   ACE_OS::strlen (topic->get_name ()));
      ::DDS::DomainParticipant_var dp = subscriber->get_participant ();
      if (CORBA::is_nil (dp.in ()))
        {
          DDS4CCM_ERROR (1, (LM_EMERGENCY, "CCM_DDS_ContentFilterSetting_i::create_contentfilteredtopic: "
                                           "Unable to get DomainParticipant.\n"));
          throw CORBA::INTERNAL ();
        }
      this->cft_ = dp->create_contentfilteredtopic (name.c_str (),
                                                    topic,
                                                    this->filter_.expression,
                                                    this->filter_.parameters);
      if (CORBA::is_nil (this->cft_.in ()))
        {
          DDS4CCM_ERROR (1, (LM_EMERGENCY, "CCM_DDS_ContentFilterSetting_i::create_contentfilteredtopic: "
                                            "Error creating ContentfilteredTopic.\n"));
          throw CORBA::INTERNAL ();
        }
      DDS4CCM_DEBUG (6, (LM_DEBUG, "CCM_DDS_ContentFilterSetting_i::create_contentfilteredtopic: "
                                   "successfully created ContentFilteredTopic\n"));

      return ::DDS::ContentFilteredTopic::_duplicate (this->cft_);
    }

    void
    CCM_DDS_ContentFilterSetting_i::set_filter_parameters (
      const ::DDS::StringSeq & parameters)
    {
      DDS4CCM_TRACE ("CCM_DDS_ContentFilterSetting_i::set_filter_parameters");

      ::DDS::ReturnCode_t retcode = this->cft_->set_expression_parameters (parameters);
      if (retcode == DDS_RETCODE_OK)
        {
          DDS4CCM_DEBUG (6, (LM_DEBUG, "CCM_DDS_ContentFilterSetting_i::set_filter_parameters: "
                                       "successfully set parameters on ContentfilteredTopic\n"));
          this->filter_.parameters = parameters;
        }
      else
        {
          DDS4CCM_ERROR (1, (LM_ERROR, "CCM_DDS_ContentFilterSetting_i::set_filter_parameters:"
                                       "Error setting filter parameters: <%C>\n",
                                       translate_retcode (retcode)));
          throw CCM_DDS::InternalError ();
        }
    }
  }
}
