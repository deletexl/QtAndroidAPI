#pragma once

#include "../lang/ClassLoader.hpp"

class JByteArray;
class JClass;
namespace java::lang
{
	class ClassLoader;
}
class JString;
namespace java::nio
{
	class ByteBuffer;
}
namespace java::security
{
	class CodeSource;
}
namespace java::security
{
	class PermissionCollection;
}
namespace java::security
{
	class ProtectionDomain;
}

namespace java::security
{
	class SecureClassLoader : public java::lang::ClassLoader
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SecureClassLoader(const char *className, const char *sig, Ts...agv) : java::lang::ClassLoader(className, sig, std::forward<Ts>(agv)...) {}
		SecureClassLoader(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::security

