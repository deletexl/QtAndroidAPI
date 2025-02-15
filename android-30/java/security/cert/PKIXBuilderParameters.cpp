#include "../../../JString.hpp"
#include "../KeyStore.hpp"
#include "./PKIXBuilderParameters.hpp"

namespace java::security::cert
{
	// Fields
	
	// QJniObject forward
	PKIXBuilderParameters::PKIXBuilderParameters(QJniObject obj) : java::security::cert::PKIXParameters(obj) {}
	
	// Constructors
	PKIXBuilderParameters::PKIXBuilderParameters(java::security::KeyStore arg0, JObject arg1)
		: java::security::cert::PKIXParameters(
			"java.security.cert.PKIXBuilderParameters",
			"(Ljava/security/KeyStore;Ljava/security/cert/CertSelector;)V",
			arg0.object(),
			arg1.object()
		) {}
	PKIXBuilderParameters::PKIXBuilderParameters(JObject arg0, JObject arg1)
		: java::security::cert::PKIXParameters(
			"java.security.cert.PKIXBuilderParameters",
			"(Ljava/util/Set;Ljava/security/cert/CertSelector;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jint PKIXBuilderParameters::getMaxPathLength() const
	{
		return callMethod<jint>(
			"getMaxPathLength",
			"()I"
		);
	}
	void PKIXBuilderParameters::setMaxPathLength(jint arg0) const
	{
		callMethod<void>(
			"setMaxPathLength",
			"(I)V",
			arg0
		);
	}
	JString PKIXBuilderParameters::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert

