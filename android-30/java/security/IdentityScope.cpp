#include "../../JString.hpp"
#include "./Identity.hpp"
#include "./IdentityScope.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	IdentityScope::IdentityScope(QJniObject obj) : java::security::Identity(obj) {}
	
	// Constructors
	IdentityScope::IdentityScope(JString arg0)
		: java::security::Identity(
			"java.security.IdentityScope",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	IdentityScope::IdentityScope(JString arg0, java::security::IdentityScope &arg1)
		: java::security::Identity(
			"java.security.IdentityScope",
			"(Ljava/lang/String;Ljava/security/IdentityScope;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	java::security::IdentityScope IdentityScope::getSystemScope()
	{
		return callStaticObjectMethod(
			"java.security.IdentityScope",
			"getSystemScope",
			"()Ljava/security/IdentityScope;"
		);
	}
	void IdentityScope::addIdentity(java::security::Identity arg0) const
	{
		callMethod<void>(
			"addIdentity",
			"(Ljava/security/Identity;)V",
			arg0.object()
		);
	}
	java::security::Identity IdentityScope::getIdentity(JString arg0) const
	{
		return callObjectMethod(
			"getIdentity",
			"(Ljava/lang/String;)Ljava/security/Identity;",
			arg0.object<jstring>()
		);
	}
	java::security::Identity IdentityScope::getIdentity(JObject arg0) const
	{
		return callObjectMethod(
			"getIdentity",
			"(Ljava/security/Principal;)Ljava/security/Identity;",
			arg0.object()
		);
	}
	JObject IdentityScope::identities() const
	{
		return callObjectMethod(
			"identities",
			"()Ljava/util/Enumeration;"
		);
	}
	void IdentityScope::removeIdentity(java::security::Identity arg0) const
	{
		callMethod<void>(
			"removeIdentity",
			"(Ljava/security/Identity;)V",
			arg0.object()
		);
	}
	jint IdentityScope::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JString IdentityScope::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

