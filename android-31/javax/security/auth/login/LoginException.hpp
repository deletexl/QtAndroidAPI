#pragma once

#include "../../../../java/security/GeneralSecurityException.hpp"

class JString;

namespace javax::security::auth::login
{
	class LoginException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LoginException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		LoginException(QJniObject obj);
		
		// Constructors
		LoginException();
		LoginException(JString arg0);
		
		// Methods
	};
} // namespace javax::security::auth::login

