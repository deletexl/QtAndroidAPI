#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../io/FileDescriptor.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Thread.hpp"
#include "./ThreadGroup.hpp"
#include "../net/InetAddress.hpp"
#include "../security/Permission.hpp"
#include "./SecurityManager.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	SecurityManager::SecurityManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SecurityManager::SecurityManager()
		: JObject(
			"java.lang.SecurityManager",
			"()V"
		) {}
	
	// Methods
	void SecurityManager::checkAccept(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"checkAccept",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void SecurityManager::checkAccess(java::lang::Thread arg0) const
	{
		callMethod<void>(
			"checkAccess",
			"(Ljava/lang/Thread;)V",
			arg0.object()
		);
	}
	void SecurityManager::checkAccess(java::lang::ThreadGroup arg0) const
	{
		callMethod<void>(
			"checkAccess",
			"(Ljava/lang/ThreadGroup;)V",
			arg0.object()
		);
	}
	void SecurityManager::checkConnect(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"checkConnect",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void SecurityManager::checkConnect(JString arg0, jint arg1, JObject arg2) const
	{
		callMethod<void>(
			"checkConnect",
			"(Ljava/lang/String;ILjava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jobject>()
		);
	}
	void SecurityManager::checkCreateClassLoader() const
	{
		callMethod<void>(
			"checkCreateClassLoader",
			"()V"
		);
	}
	void SecurityManager::checkDelete(JString arg0) const
	{
		callMethod<void>(
			"checkDelete",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void SecurityManager::checkExec(JString arg0) const
	{
		callMethod<void>(
			"checkExec",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void SecurityManager::checkExit(jint arg0) const
	{
		callMethod<void>(
			"checkExit",
			"(I)V",
			arg0
		);
	}
	void SecurityManager::checkLink(JString arg0) const
	{
		callMethod<void>(
			"checkLink",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void SecurityManager::checkListen(jint arg0) const
	{
		callMethod<void>(
			"checkListen",
			"(I)V",
			arg0
		);
	}
	void SecurityManager::checkMulticast(java::net::InetAddress arg0) const
	{
		callMethod<void>(
			"checkMulticast",
			"(Ljava/net/InetAddress;)V",
			arg0.object()
		);
	}
	void SecurityManager::checkMulticast(java::net::InetAddress arg0, jbyte arg1) const
	{
		callMethod<void>(
			"checkMulticast",
			"(Ljava/net/InetAddress;B)V",
			arg0.object(),
			arg1
		);
	}
	void SecurityManager::checkPackageAccess(JString arg0) const
	{
		callMethod<void>(
			"checkPackageAccess",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void SecurityManager::checkPackageDefinition(JString arg0) const
	{
		callMethod<void>(
			"checkPackageDefinition",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void SecurityManager::checkPermission(java::security::Permission arg0) const
	{
		callMethod<void>(
			"checkPermission",
			"(Ljava/security/Permission;)V",
			arg0.object()
		);
	}
	void SecurityManager::checkPermission(java::security::Permission arg0, JObject arg1) const
	{
		callMethod<void>(
			"checkPermission",
			"(Ljava/security/Permission;Ljava/lang/Object;)V",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	void SecurityManager::checkPrintJobAccess() const
	{
		callMethod<void>(
			"checkPrintJobAccess",
			"()V"
		);
	}
	void SecurityManager::checkPropertiesAccess() const
	{
		callMethod<void>(
			"checkPropertiesAccess",
			"()V"
		);
	}
	void SecurityManager::checkPropertyAccess(JString arg0) const
	{
		callMethod<void>(
			"checkPropertyAccess",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void SecurityManager::checkRead(java::io::FileDescriptor arg0) const
	{
		callMethod<void>(
			"checkRead",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	void SecurityManager::checkRead(JString arg0) const
	{
		callMethod<void>(
			"checkRead",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void SecurityManager::checkRead(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"checkRead",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	void SecurityManager::checkSecurityAccess(JString arg0) const
	{
		callMethod<void>(
			"checkSecurityAccess",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void SecurityManager::checkSetFactory() const
	{
		callMethod<void>(
			"checkSetFactory",
			"()V"
		);
	}
	void SecurityManager::checkWrite(java::io::FileDescriptor arg0) const
	{
		callMethod<void>(
			"checkWrite",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	void SecurityManager::checkWrite(JString arg0) const
	{
		callMethod<void>(
			"checkWrite",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	JObject SecurityManager::getSecurityContext() const
	{
		return callObjectMethod(
			"getSecurityContext",
			"()Ljava/lang/Object;"
		);
	}
	java::lang::ThreadGroup SecurityManager::getThreadGroup() const
	{
		return callObjectMethod(
			"getThreadGroup",
			"()Ljava/lang/ThreadGroup;"
		);
	}
} // namespace java::lang

