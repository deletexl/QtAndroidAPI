#include "./Permission.hpp"
#include "./PermissionCollection.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	PermissionCollection::PermissionCollection(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PermissionCollection::PermissionCollection()
		: JObject(
			"java.security.PermissionCollection",
			"()V"
		) {}
	
	// Methods
	void PermissionCollection::add(java::security::Permission arg0)
	{
		callMethod<void>(
			"add",
			"(Ljava/security/Permission;)V",
			arg0.object()
		);
	}
	JObject PermissionCollection::elements()
	{
		return callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;"
		);
	}
	JObject PermissionCollection::elementsAsStream()
	{
		return callObjectMethod(
			"elementsAsStream",
			"()Ljava/util/stream/Stream;"
		);
	}
	jboolean PermissionCollection::implies(java::security::Permission arg0)
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.object()
		);
	}
	jboolean PermissionCollection::isReadOnly()
	{
		return callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	void PermissionCollection::setReadOnly()
	{
		callMethod<void>(
			"setReadOnly",
			"()V"
		);
	}
	jstring PermissionCollection::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security

