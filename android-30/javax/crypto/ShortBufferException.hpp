#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/security/GeneralSecurityException.hpp"


namespace javax::crypto
{
	class ShortBufferException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ShortBufferException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		ShortBufferException(QAndroidJniObject obj);
		
		// Constructors
		ShortBufferException();
		ShortBufferException(jstring arg0);
		
		// Methods
	};
} // namespace javax::crypto

