#include "../../JArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../lang/Exception.hpp"
#include "../../JString.hpp"
#include "./PrivilegedActionException.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	PrivilegedActionException::PrivilegedActionException(QJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	PrivilegedActionException::PrivilegedActionException(java::lang::Exception arg0)
		: java::lang::Exception(
			"java.security.PrivilegedActionException",
			"(Ljava/lang/Exception;)V",
			arg0.object()
		) {}
	
	// Methods
	java::lang::Exception PrivilegedActionException::getException() const
	{
		return callObjectMethod(
			"getException",
			"()Ljava/lang/Exception;"
		);
	}
	JString PrivilegedActionException::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

