#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "../../../../java/lang/Exception.hpp"

namespace android::app::appsearch
{
	class AppSearchResult;
}

namespace android::app::appsearch::exceptions
{
	class AppSearchException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppSearchException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchException(QAndroidJniObject obj);
		
		// Constructors
		AppSearchException(jint arg0);
		AppSearchException(jint arg0, jstring arg1);
		AppSearchException(jint arg0, jstring arg1, jthrowable arg2);
		
		// Methods
		jint getResultCode();
		android::app::appsearch::AppSearchResult toAppSearchResult();
	};
} // namespace android::app::appsearch::exceptions

