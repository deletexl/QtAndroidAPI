#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::net
{
	class CacheRequest;
}
namespace java::net
{
	class CacheResponse;
}
namespace java::net
{
	class URI;
}
namespace java::net
{
	class URLConnection;
}

namespace java::net
{
	class ResponseCache : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ResponseCache(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ResponseCache(QAndroidJniObject obj);
		
		// Constructors
		ResponseCache();
		
		// Methods
		static QAndroidJniObject getDefault();
		static void setDefault(java::net::ResponseCache arg0);
		QAndroidJniObject get(java::net::URI arg0, jstring arg1, __JniBaseClass arg2);
		QAndroidJniObject put(java::net::URI arg0, java::net::URLConnection arg1);
	};
} // namespace java::net

