#pragma once

#include "../lang/RuntimeException.hpp"

namespace java::io
{
	class IOException;
}
namespace java::io
{
	class ObjectInputStream;
}
class JString;
class JThrowable;

namespace java::io
{
	class UncheckedIOException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UncheckedIOException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		UncheckedIOException(QJniObject obj);
		
		// Constructors
		UncheckedIOException(java::io::IOException arg0);
		UncheckedIOException(JString arg0, java::io::IOException arg1);
		
		// Methods
		java::io::IOException getCause() const;
	};
} // namespace java::io

