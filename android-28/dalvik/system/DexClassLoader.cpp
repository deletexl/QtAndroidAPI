#include "../../java/lang/ClassLoader.hpp"
#include "../../JString.hpp"
#include "./DexClassLoader.hpp"

namespace dalvik::system
{
	// Fields
	
	// QJniObject forward
	DexClassLoader::DexClassLoader(QJniObject obj) : dalvik::system::BaseDexClassLoader(obj) {}
	
	// Constructors
	DexClassLoader::DexClassLoader(JString arg0, JString arg1, JString arg2, java::lang::ClassLoader arg3)
		: dalvik::system::BaseDexClassLoader(
			"dalvik.system.DexClassLoader",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		) {}
	
	// Methods
} // namespace dalvik::system

