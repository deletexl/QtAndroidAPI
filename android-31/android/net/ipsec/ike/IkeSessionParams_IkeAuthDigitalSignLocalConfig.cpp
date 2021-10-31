#include "../../../../java/security/cert/X509Certificate.hpp"
#include "./IkeSessionParams_IkeAuthDigitalSignLocalConfig.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// QAndroidJniObject forward
	IkeSessionParams_IkeAuthDigitalSignLocalConfig::IkeSessionParams_IkeAuthDigitalSignLocalConfig(QAndroidJniObject obj) : android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig(obj) {}
	
	// Constructors
	
	// Methods
	jboolean IkeSessionParams_IkeAuthDigitalSignLocalConfig::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	java::security::cert::X509Certificate IkeSessionParams_IkeAuthDigitalSignLocalConfig::getClientEndCertificate()
	{
		return callObjectMethod(
			"getClientEndCertificate",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	__JniBaseClass IkeSessionParams_IkeAuthDigitalSignLocalConfig::getIntermediateCertificates()
	{
		return callObjectMethod(
			"getIntermediateCertificates",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass IkeSessionParams_IkeAuthDigitalSignLocalConfig::getPrivateKey()
	{
		return callObjectMethod(
			"getPrivateKey",
			"()Ljava/security/PrivateKey;"
		);
	}
	jint IkeSessionParams_IkeAuthDigitalSignLocalConfig::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike
