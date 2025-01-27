#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;

namespace android::icu::util
{
	class Calendar_WeekData : public JObject
	{
	public:
		// Fields
		jint firstDayOfWeek();
		jint minimalDaysInFirstWeek();
		jint weekendCease();
		jint weekendCeaseMillis();
		jint weekendOnset();
		jint weekendOnsetMillis();
		
		// QJniObject forward
		template<typename ...Ts> explicit Calendar_WeekData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Calendar_WeekData(QJniObject obj);
		
		// Constructors
		Calendar_WeekData(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::icu::util

