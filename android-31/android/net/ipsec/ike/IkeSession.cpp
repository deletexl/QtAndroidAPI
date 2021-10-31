#include "../../../content/Context.hpp"
#include "./ChildSessionParams.hpp"
#include "./IkeSessionParams.hpp"
#include "./IkeSession.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// QAndroidJniObject forward
	IkeSession::IkeSession(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	IkeSession::IkeSession(android::content::Context arg0, android::net::ipsec::ike::IkeSessionParams arg1, android::net::ipsec::ike::ChildSessionParams arg2, __JniBaseClass arg3, __JniBaseClass arg4, __JniBaseClass arg5)
		: __JniBaseClass(
			"android.net.ipsec.ike.IkeSession",
			"(Landroid/content/Context;Landroid/net/ipsec/ike/IkeSessionParams;Landroid/net/ipsec/ike/ChildSessionParams;Ljava/util/concurrent/Executor;Landroid/net/ipsec/ike/IkeSessionCallback;Landroid/net/ipsec/ike/ChildSessionCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5.object()
		) {}
	
	// Methods
	void IkeSession::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void IkeSession::closeChildSession(__JniBaseClass arg0)
	{
		callMethod<void>(
			"closeChildSession",
			"(Landroid/net/ipsec/ike/ChildSessionCallback;)V",
			arg0.object()
		);
	}
	void IkeSession::finalize()
	{
		callMethod<void>(
			"finalize",
			"()V"
		);
	}
	void IkeSession::kill()
	{
		callMethod<void>(
			"kill",
			"()V"
		);
	}
	void IkeSession::openChildSession(android::net::ipsec::ike::ChildSessionParams arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"openChildSession",
			"(Landroid/net/ipsec/ike/ChildSessionParams;Landroid/net/ipsec/ike/ChildSessionCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::net::ipsec::ike
