#include "../../JString.hpp"
#include "./RemoteException.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	RemoteException::RemoteException(QJniObject obj) : android::util::AndroidException(obj) {}
	
	// Constructors
	RemoteException::RemoteException()
		: android::util::AndroidException(
			"android.os.RemoteException",
			"()V"
		) {}
	RemoteException::RemoteException(JString arg0)
		: android::util::AndroidException(
			"android.os.RemoteException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::os

