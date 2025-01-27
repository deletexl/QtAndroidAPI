#pragma once

#include "./NumberRangeFormatterSettings.hpp"

namespace android::icu::number
{
	class LocalizedNumberRangeFormatter;
}
namespace android::icu::util
{
	class ULocale;
}
namespace java::util
{
	class Locale;
}

namespace android::icu::number
{
	class UnlocalizedNumberRangeFormatter : public android::icu::number::NumberRangeFormatterSettings
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UnlocalizedNumberRangeFormatter(const char *className, const char *sig, Ts...agv) : android::icu::number::NumberRangeFormatterSettings(className, sig, std::forward<Ts>(agv)...) {}
		UnlocalizedNumberRangeFormatter(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::icu::number::LocalizedNumberRangeFormatter locale(android::icu::util::ULocale arg0) const;
		android::icu::number::LocalizedNumberRangeFormatter locale(java::util::Locale arg0) const;
	};
} // namespace android::icu::number

