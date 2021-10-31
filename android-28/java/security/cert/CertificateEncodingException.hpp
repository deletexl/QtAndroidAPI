#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"
#include "./CertificateException.hpp"


namespace java::security::cert
{
	class CertificateEncodingException : public java::security::cert::CertificateException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertificateEncodingException(const char *className, const char *sig, Ts...agv) : java::security::cert::CertificateException(className, sig, std::forward<Ts>(agv)...) {}
		CertificateEncodingException(QAndroidJniObject obj);
		
		// Constructors
		CertificateEncodingException();
		CertificateEncodingException(jstring arg0);
		CertificateEncodingException(jthrowable arg0);
		CertificateEncodingException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::security::cert
