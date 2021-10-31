#include "../../io/InputStream.hpp"
#include "./CRL.hpp"
#include "./CertPath.hpp"
#include "./Certificate.hpp"
#include "./CertificateFactorySpi.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	CertificateFactorySpi::CertificateFactorySpi(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CertificateFactorySpi::CertificateFactorySpi()
		: __JniBaseClass(
			"java.security.cert.CertificateFactorySpi",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject CertificateFactorySpi::engineGenerateCRL(java::io::InputStream arg0)
	{
		return callObjectMethod(
			"engineGenerateCRL",
			"(Ljava/io/InputStream;)Ljava/security/cert/CRL;",
			arg0.object()
		);
	}
	QAndroidJniObject CertificateFactorySpi::engineGenerateCRLs(java::io::InputStream arg0)
	{
		return callObjectMethod(
			"engineGenerateCRLs",
			"(Ljava/io/InputStream;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	QAndroidJniObject CertificateFactorySpi::engineGenerateCertPath(java::io::InputStream arg0)
	{
		return callObjectMethod(
			"engineGenerateCertPath",
			"(Ljava/io/InputStream;)Ljava/security/cert/CertPath;",
			arg0.object()
		);
	}
	QAndroidJniObject CertificateFactorySpi::engineGenerateCertPath(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"engineGenerateCertPath",
			"(Ljava/util/List;)Ljava/security/cert/CertPath;",
			arg0.object()
		);
	}
	QAndroidJniObject CertificateFactorySpi::engineGenerateCertPath(java::io::InputStream arg0, jstring arg1)
	{
		return callObjectMethod(
			"engineGenerateCertPath",
			"(Ljava/io/InputStream;Ljava/lang/String;)Ljava/security/cert/CertPath;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject CertificateFactorySpi::engineGenerateCertificate(java::io::InputStream arg0)
	{
		return callObjectMethod(
			"engineGenerateCertificate",
			"(Ljava/io/InputStream;)Ljava/security/cert/Certificate;",
			arg0.object()
		);
	}
	QAndroidJniObject CertificateFactorySpi::engineGenerateCertificates(java::io::InputStream arg0)
	{
		return callObjectMethod(
			"engineGenerateCertificates",
			"(Ljava/io/InputStream;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	QAndroidJniObject CertificateFactorySpi::engineGetCertPathEncodings()
	{
		return callObjectMethod(
			"engineGetCertPathEncodings",
			"()Ljava/util/Iterator;"
		);
	}
} // namespace java::security::cert

