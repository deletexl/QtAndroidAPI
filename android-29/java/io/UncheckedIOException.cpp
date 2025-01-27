#include "./IOException.hpp"
#include "./ObjectInputStream.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./UncheckedIOException.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	UncheckedIOException::UncheckedIOException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	UncheckedIOException::UncheckedIOException(java::io::IOException arg0)
		: java::lang::RuntimeException(
			"java.io.UncheckedIOException",
			"(Ljava/io/IOException;)V",
			arg0.object()
		) {}
	UncheckedIOException::UncheckedIOException(JString arg0, java::io::IOException arg1)
		: java::lang::RuntimeException(
			"java.io.UncheckedIOException",
			"(Ljava/lang/String;Ljava/io/IOException;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	java::io::IOException UncheckedIOException::getCause() const
	{
		return callObjectMethod(
			"getCause",
			"()Ljava/io/IOException;"
		);
	}
} // namespace java::io

