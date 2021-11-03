#include "./TrustAnchor.hpp"
#include "./PKIXCertPathValidatorResult.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	PKIXCertPathValidatorResult::PKIXCertPathValidatorResult(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PKIXCertPathValidatorResult::PKIXCertPathValidatorResult(java::security::cert::TrustAnchor arg0, JObject arg1, JObject arg2)
		: JObject(
			"java.security.cert.PKIXCertPathValidatorResult",
			"(Ljava/security/cert/TrustAnchor;Ljava/security/cert/PolicyNode;Ljava/security/PublicKey;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	jobject PKIXCertPathValidatorResult::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	JObject PKIXCertPathValidatorResult::getPolicyTree()
	{
		return callObjectMethod(
			"getPolicyTree",
			"()Ljava/security/cert/PolicyNode;"
		);
	}
	JObject PKIXCertPathValidatorResult::getPublicKey()
	{
		return callObjectMethod(
			"getPublicKey",
			"()Ljava/security/PublicKey;"
		);
	}
	java::security::cert::TrustAnchor PKIXCertPathValidatorResult::getTrustAnchor()
	{
		return callObjectMethod(
			"getTrustAnchor",
			"()Ljava/security/cert/TrustAnchor;"
		);
	}
	jstring PKIXCertPathValidatorResult::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::cert

