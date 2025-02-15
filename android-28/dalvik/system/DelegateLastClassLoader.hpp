#pragma once

#include "./PathClassLoader.hpp"

class JClass;
namespace java::lang
{
	class ClassLoader;
}
class JString;
namespace java::net
{
	class URL;
}

namespace dalvik::system
{
	class DelegateLastClassLoader : public dalvik::system::PathClassLoader
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DelegateLastClassLoader(const char *className, const char *sig, Ts...agv) : dalvik::system::PathClassLoader(className, sig, std::forward<Ts>(agv)...) {}
		DelegateLastClassLoader(QJniObject obj);
		
		// Constructors
		DelegateLastClassLoader(JString arg0, java::lang::ClassLoader arg1);
		DelegateLastClassLoader(JString arg0, JString arg1, java::lang::ClassLoader arg2);
		
		// Methods
		java::net::URL getResource(JString arg0) const;
		JObject getResources(JString arg0) const;
	};
} // namespace dalvik::system

