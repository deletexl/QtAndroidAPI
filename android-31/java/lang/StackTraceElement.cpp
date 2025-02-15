#include "../../JArray.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./StackTraceElement.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	StackTraceElement::StackTraceElement(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	StackTraceElement::StackTraceElement(JString arg0, JString arg1, JString arg2, jint arg3)
		: JObject(
			"java.lang.StackTraceElement",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3
		) {}
	StackTraceElement::StackTraceElement(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4, JString arg5, jint arg6)
		: JObject(
			"java.lang.StackTraceElement",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object<jstring>(),
			arg5.object<jstring>(),
			arg6
		) {}
	
	// Methods
	jboolean StackTraceElement::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString StackTraceElement::getClassLoaderName() const
	{
		return callObjectMethod(
			"getClassLoaderName",
			"()Ljava/lang/String;"
		);
	}
	JString StackTraceElement::getClassName() const
	{
		return callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		);
	}
	JString StackTraceElement::getFileName() const
	{
		return callObjectMethod(
			"getFileName",
			"()Ljava/lang/String;"
		);
	}
	jint StackTraceElement::getLineNumber() const
	{
		return callMethod<jint>(
			"getLineNumber",
			"()I"
		);
	}
	JString StackTraceElement::getMethodName() const
	{
		return callObjectMethod(
			"getMethodName",
			"()Ljava/lang/String;"
		);
	}
	JString StackTraceElement::getModuleName() const
	{
		return callObjectMethod(
			"getModuleName",
			"()Ljava/lang/String;"
		);
	}
	JString StackTraceElement::getModuleVersion() const
	{
		return callObjectMethod(
			"getModuleVersion",
			"()Ljava/lang/String;"
		);
	}
	jint StackTraceElement::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean StackTraceElement::isNativeMethod() const
	{
		return callMethod<jboolean>(
			"isNativeMethod",
			"()Z"
		);
	}
	JString StackTraceElement::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang

