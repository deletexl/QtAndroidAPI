#include "./IOException.hpp"
#include "./ObjectInputStream.hpp"
#include "./UncheckedIOException.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	UncheckedIOException::UncheckedIOException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	UncheckedIOException::UncheckedIOException(java::io::IOException arg0)
		: java::lang::RuntimeException(
			"java.io.UncheckedIOException",
			"(Ljava/io/IOException;)V",
			arg0.object()
		) {}
	UncheckedIOException::UncheckedIOException(jstring arg0, java::io::IOException arg1)
		: java::lang::RuntimeException(
			"java.io.UncheckedIOException",
			"(Ljava/lang/String;Ljava/io/IOException;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	QAndroidJniObject UncheckedIOException::getCause()
	{
		return callObjectMethod(
			"getCause",
			"()Ljava/io/IOException;"
		);
	}
} // namespace java::io

