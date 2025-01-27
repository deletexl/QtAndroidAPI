#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./AuthenticatorException.hpp"

namespace android::accounts
{
	// Fields
	
	// QJniObject forward
	AuthenticatorException::AuthenticatorException(QJniObject obj) : android::accounts::AccountsException(obj) {}
	
	// Constructors
	AuthenticatorException::AuthenticatorException()
		: android::accounts::AccountsException(
			"android.accounts.AuthenticatorException",
			"()V"
		) {}
	AuthenticatorException::AuthenticatorException(JString arg0)
		: android::accounts::AccountsException(
			"android.accounts.AuthenticatorException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	AuthenticatorException::AuthenticatorException(JThrowable arg0)
		: android::accounts::AccountsException(
			"android.accounts.AuthenticatorException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	AuthenticatorException::AuthenticatorException(JString arg0, JThrowable arg1)
		: android::accounts::AccountsException(
			"android.accounts.AuthenticatorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::accounts

