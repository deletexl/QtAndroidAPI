#include "../../JString.hpp"
#include "./InputMismatchException.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	InputMismatchException::InputMismatchException(QJniObject obj) : java::util::NoSuchElementException(obj) {}
	
	// Constructors
	InputMismatchException::InputMismatchException()
		: java::util::NoSuchElementException(
			"java.util.InputMismatchException",
			"()V"
		) {}
	InputMismatchException::InputMismatchException(JString arg0)
		: java::util::NoSuchElementException(
			"java.util.InputMismatchException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::util

