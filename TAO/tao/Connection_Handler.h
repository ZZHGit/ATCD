/* -*- C++ -*- */

//=============================================================================
/**
 *  @file   Connection_Handler.h
 *
 *  $Id$
 *
 *  @author Bala Natarajan  <bala@cs.wustl.edu>
 */
//=============================================================================


#ifndef TAO_CONNECTION_HANDLER_H
#define TAO_CONNECTION_HANDLER_H
#include "ace/pre.h"

#include "ace/SOCK.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/Connection_Cache_Manager.h"

#if defined(_MSC_VER)
#if (_MSC_VER >= 1200)
#pragma warning(push)
#endif /* _MSC_VER >= 1200 */
#pragma warning(disable:4250)
#endif /* _MSC_VER */

class TAO_ORB_Core;
class TAO_ORB_Core_TSS_Resources;
class ACE_Reactor;
class ACE_Event_Handler;

/**
 * @class TAO_Connection_Handler
 *
 * @brief TAO_Connection_Handler
 *
 * This class is an abstraction for the connection handlers. The
 * connections handler in every protocol can derive from this
 * class as well as the ACE_Svc_Handler specialised for the
 * right protocol. This way, most of the common code for the
 * different protocls would be in this implementation. Further,
 * this class wold be of immense use in storing the handlers in
 * the Cache for TAO. This would help in purging entries which
 * is generally accompanied by closing the open handles and
 * deleting memory associated with the handlers.
 */
class TAO_Export TAO_Connection_Handler
{

  //     Note: This class has NOT abstracted the GIOP specific
  //     details. It is just to be safe so that, we can reuse this
  //     class for any messaging protocol underneath. This way we need
  //     not touch the Cache setup even when  using other protocols (I
  //     mean messaging).

public:

  /// Constructor
  TAO_Connection_Handler (void);

  /// Constructor
  TAO_Connection_Handler (TAO_ORB_Core *orb_core);

  /// Destructor
  virtual ~TAO_Connection_Handler (void);

  void cache_map_entry (
      TAO_Connection_Cache_Manager::HASH_MAP_ENTRY *entry);

  /// Set/Get the Cache Map entry
  TAO_Connection_Cache_Manager::HASH_MAP_ENTRY *cache_map_entry (void);

  /// Make ourselves ready for use
  int make_idle (void);

  /// recache ourselves in the cache
  int recache_handler (TAO_Connection_Descriptor_Interface *);

  /// Increment the reference count
  void incr_ref_count (void);

  /// Decrement the reference count
  void decr_ref_count (void);

  /// Get and set method for the flag that indicates whether the
  /// handler has been registered with the reactor or not.
  CORBA::Boolean is_registered (void);
  void is_registered (CORBA::Boolean);

  /// Get the underlying handle
  virtual ACE_HANDLE fetch_handle (void) = 0;

  /// Purge our entry from the Connection Cache
  int purge_entry (void);

protected:

  /// Return our TAO_ORB_Core pointer
  TAO_ORB_Core *orb_core (void);

  /// Return our TSS Resources pointer
  TAO_ORB_Core_TSS_Resources* tss_resources (void);

  /// Set options on the socket
  int set_socket_option (ACE_SOCK &sock,
                         int snd_size,
                         int rcv_size);

  /// This method is invoked from the svc () method of the Svc_Handler
  /// Object.
  int svc_i (void);

  /// Need to be implemented by the underlying protocol objects
  virtual int handle_input_i (ACE_HANDLE = ACE_INVALID_HANDLE,
                              ACE_Time_Value *max_wait_time = 0) = 0;

private:

  /// Pointer to the TAO_ORB_Core
  TAO_ORB_Core *orb_core_;

  /// Cached tss resources of the ORB that activated this object.
  TAO_ORB_Core_TSS_Resources *tss_resources_;

  /// Reference count to the number of external references -- ie. the
  /// count of the number of places our references are being held.
  u_long ref_count_;

  /// The cache map entry -- where we are in the Connection Cache
  TAO_Connection_Cache_Manager::HASH_MAP_ENTRY *cache_map_entry_;

  /// Are we registered with the reactor?
  CORBA::Boolean is_registered_;
};

#if defined (__ACE_INLINE__)
#include "tao/Connection_Handler.inl"
#endif /* __ACE_INLINE__ */

#include "ace/post.h"
#endif /*TAO_CONNECTION_HANDLER_H*/
