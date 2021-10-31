#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class DataInputStream;
}
namespace java::util
{
	class HashSet;
}
namespace java::util
{
	class Locale;
}
namespace java::util
{
	class Optional;
}
namespace java::util
{
	class Properties;
}
namespace java::util::regex
{
	class Pattern;
}

namespace java::util
{
	class Currency : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Currency(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Currency(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject getAvailableCurrencies();
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(java::util::Locale arg0);
		jstring getCurrencyCode();
		jint getDefaultFractionDigits();
		jstring getDisplayName();
		jstring getDisplayName(java::util::Locale arg0);
		jint getNumericCode();
		jstring getNumericCodeAsString();
		jstring getSymbol();
		jstring getSymbol(java::util::Locale arg0);
		jstring toString();
	};
} // namespace java::util

