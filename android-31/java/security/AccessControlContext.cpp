#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JObject.hpp"
#include "./Permission.hpp"
#include "./ProtectionDomain.hpp"
#include "./AccessControlContext.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	AccessControlContext::AccessControlContext(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AccessControlContext::AccessControlContext(JArray arg0)
		: JObject(
			"java.security.AccessControlContext",
			"([Ljava/security/ProtectionDomain;)V",
			arg0.object<jarray>()
		) {}
	AccessControlContext::AccessControlContext(java::security::AccessControlContext &arg0, JObject arg1)
		: JObject(
			"java.security.AccessControlContext",
			"(Ljava/security/AccessControlContext;Ljava/security/DomainCombiner;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void AccessControlContext::checkPermission(java::security::Permission arg0) const
	{
		callMethod<void>(
			"checkPermission",
			"(Ljava/security/Permission;)V",
			arg0.object()
		);
	}
	jboolean AccessControlContext::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject AccessControlContext::getDomainCombiner() const
	{
		return callObjectMethod(
			"getDomainCombiner",
			"()Ljava/security/DomainCombiner;"
		);
	}
	jint AccessControlContext::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace java::security

