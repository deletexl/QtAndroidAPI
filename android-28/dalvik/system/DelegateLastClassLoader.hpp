#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "./BaseDexClassLoader.hpp"
#include "./PathClassLoader.hpp"

namespace java::lang
{
	class ClassLoader;
}
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DelegateLastClassLoader(const char *className, const char *sig, Ts...agv) : dalvik::system::PathClassLoader(className, sig, std::forward<Ts>(agv)...) {}
		DelegateLastClassLoader(QAndroidJniObject obj);
		
		// Constructors
		DelegateLastClassLoader(jstring arg0, java::lang::ClassLoader arg1);
		DelegateLastClassLoader(jstring arg0, jstring arg1, java::lang::ClassLoader arg2);
		
		// Methods
		java::net::URL getResource(jstring arg0);
		JObject getResources(jstring arg0);
	};
} // namespace dalvik::system

