#pragma once

#include "../../java/security/GeneralSecurityException.hpp"

class JString;

namespace javax::crypto
{
	class BadPaddingException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BadPaddingException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		BadPaddingException(QJniObject obj);
		
		// Constructors
		BadPaddingException();
		BadPaddingException(JString arg0);
		
		// Methods
	};
} // namespace javax::crypto

