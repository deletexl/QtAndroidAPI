#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./WrongMethodTypeException.hpp"

namespace java::lang::invoke
{
	// Fields
	
	// QJniObject forward
	WrongMethodTypeException::WrongMethodTypeException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	WrongMethodTypeException::WrongMethodTypeException()
		: java::lang::RuntimeException(
			"java.lang.invoke.WrongMethodTypeException",
			"()V"
		) {}
	WrongMethodTypeException::WrongMethodTypeException(JString arg0)
		: java::lang::RuntimeException(
			"java.lang.invoke.WrongMethodTypeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang::invoke

