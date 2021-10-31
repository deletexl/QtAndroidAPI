#include "./Permission.hpp"
#include "./PermissionCollection.hpp"
#include "./AllPermission.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	AllPermission::AllPermission(QAndroidJniObject obj) : java::security::Permission(obj) {}
	
	// Constructors
	AllPermission::AllPermission()
		: java::security::Permission(
			"java.security.AllPermission",
			"()V"
		) {}
	AllPermission::AllPermission(jstring arg0, jstring arg1)
		: java::security::Permission(
			"java.security.AllPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean AllPermission::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring AllPermission::getActions()
	{
		return callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AllPermission::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean AllPermission::implies(java::security::Permission arg0)
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.object()
		);
	}
	QAndroidJniObject AllPermission::newPermissionCollection()
	{
		return callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
	}
} // namespace java::security

