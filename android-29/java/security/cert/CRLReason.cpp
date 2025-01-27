#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./CRLReason.hpp"

namespace java::security::cert
{
	// Fields
	java::security::cert::CRLReason CRLReason::AA_COMPROMISE()
	{
		return getStaticObjectField(
			"java.security.cert.CRLReason",
			"AA_COMPROMISE",
			"Ljava/security/cert/CRLReason;"
		);
	}
	java::security::cert::CRLReason CRLReason::AFFILIATION_CHANGED()
	{
		return getStaticObjectField(
			"java.security.cert.CRLReason",
			"AFFILIATION_CHANGED",
			"Ljava/security/cert/CRLReason;"
		);
	}
	java::security::cert::CRLReason CRLReason::CA_COMPROMISE()
	{
		return getStaticObjectField(
			"java.security.cert.CRLReason",
			"CA_COMPROMISE",
			"Ljava/security/cert/CRLReason;"
		);
	}
	java::security::cert::CRLReason CRLReason::CERTIFICATE_HOLD()
	{
		return getStaticObjectField(
			"java.security.cert.CRLReason",
			"CERTIFICATE_HOLD",
			"Ljava/security/cert/CRLReason;"
		);
	}
	java::security::cert::CRLReason CRLReason::CESSATION_OF_OPERATION()
	{
		return getStaticObjectField(
			"java.security.cert.CRLReason",
			"CESSATION_OF_OPERATION",
			"Ljava/security/cert/CRLReason;"
		);
	}
	java::security::cert::CRLReason CRLReason::KEY_COMPROMISE()
	{
		return getStaticObjectField(
			"java.security.cert.CRLReason",
			"KEY_COMPROMISE",
			"Ljava/security/cert/CRLReason;"
		);
	}
	java::security::cert::CRLReason CRLReason::PRIVILEGE_WITHDRAWN()
	{
		return getStaticObjectField(
			"java.security.cert.CRLReason",
			"PRIVILEGE_WITHDRAWN",
			"Ljava/security/cert/CRLReason;"
		);
	}
	java::security::cert::CRLReason CRLReason::REMOVE_FROM_CRL()
	{
		return getStaticObjectField(
			"java.security.cert.CRLReason",
			"REMOVE_FROM_CRL",
			"Ljava/security/cert/CRLReason;"
		);
	}
	java::security::cert::CRLReason CRLReason::SUPERSEDED()
	{
		return getStaticObjectField(
			"java.security.cert.CRLReason",
			"SUPERSEDED",
			"Ljava/security/cert/CRLReason;"
		);
	}
	java::security::cert::CRLReason CRLReason::UNSPECIFIED()
	{
		return getStaticObjectField(
			"java.security.cert.CRLReason",
			"UNSPECIFIED",
			"Ljava/security/cert/CRLReason;"
		);
	}
	java::security::cert::CRLReason CRLReason::UNUSED()
	{
		return getStaticObjectField(
			"java.security.cert.CRLReason",
			"UNUSED",
			"Ljava/security/cert/CRLReason;"
		);
	}
	
	// QJniObject forward
	CRLReason::CRLReason(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::security::cert::CRLReason CRLReason::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.cert.CRLReason",
			"valueOf",
			"(Ljava/lang/String;)Ljava/security/cert/CRLReason;",
			arg0.object<jstring>()
		);
	}
	JArray CRLReason::values()
	{
		return callStaticObjectMethod(
			"java.security.cert.CRLReason",
			"values",
			"()[Ljava/security/cert/CRLReason;"
		);
	}
} // namespace java::security::cert

