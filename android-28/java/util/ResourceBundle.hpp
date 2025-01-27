#pragma once

#include "../../JObject.hpp"

class JObjectArray;
class JArray;
class JClass;
namespace java::lang
{
	class ClassLoader;
}
class JObject;
class JString;
class JThrowable;
namespace java::lang::ref
{
	class ReferenceQueue;
}
namespace java::util
{
	class Locale;
}
namespace java::util
{
	class ResourceBundle_Control;
}
namespace java::util
{
	class ServiceLoader;
}

namespace java::util
{
	class ResourceBundle : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ResourceBundle(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ResourceBundle(QJniObject obj);
		
		// Constructors
		ResourceBundle();
		
		// Methods
		static void clearCache();
		static void clearCache(java::lang::ClassLoader arg0);
		static java::util::ResourceBundle getBundle(JString arg0);
		static java::util::ResourceBundle getBundle(JString arg0, JObject arg1);
		static java::util::ResourceBundle getBundle(JString arg0, java::util::Locale arg1);
		static java::util::ResourceBundle getBundle(JString arg0, java::util::ResourceBundle_Control arg1);
		static java::util::ResourceBundle getBundle(JString arg0, java::util::Locale arg1, java::lang::ClassLoader arg2);
		static java::util::ResourceBundle getBundle(JString arg0, java::util::Locale arg1, JObject arg2);
		static java::util::ResourceBundle getBundle(JString arg0, java::util::Locale arg1, java::util::ResourceBundle_Control arg2);
		static java::util::ResourceBundle getBundle(JString arg0, java::util::Locale arg1, java::lang::ClassLoader arg2, java::util::ResourceBundle_Control arg3);
		jboolean containsKey(JString arg0) const;
		JString getBaseBundleName() const;
		JObject getKeys() const;
		java::util::Locale getLocale() const;
		JObject getObject(JString arg0) const;
		JString getString(JString arg0) const;
		JArray getStringArray(JString arg0) const;
		JObject keySet() const;
	};
} // namespace java::util

