#include "../../javax/security/auth/Subject.hpp"
#include "./AuthProvider.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	AuthProvider::AuthProvider(QAndroidJniObject obj) : java::security::Provider(obj) {}
	
	// Constructors
	
	// Methods
	void AuthProvider::login(javax::security::auth::Subject arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"login",
			"(Ljavax/security/auth/Subject;Ljavax/security/auth/callback/CallbackHandler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void AuthProvider::logout()
	{
		callMethod<void>(
			"logout",
			"()V"
		);
	}
	void AuthProvider::setCallbackHandler(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setCallbackHandler",
			"(Ljavax/security/auth/callback/CallbackHandler;)V",
			arg0.object()
		);
	}
} // namespace java::security

