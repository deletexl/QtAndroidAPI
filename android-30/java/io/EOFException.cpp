#include "../../JString.hpp"
#include "./EOFException.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	EOFException::EOFException(QJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	EOFException::EOFException()
		: java::io::IOException(
			"java.io.EOFException",
			"()V"
		) {}
	EOFException::EOFException(JString arg0)
		: java::io::IOException(
			"java.io.EOFException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::io

