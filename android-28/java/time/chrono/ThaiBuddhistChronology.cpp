#include "../../io/ObjectInputStream.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../Clock.hpp"
#include "../Instant.hpp"
#include "../ZoneId.hpp"
#include "./ThaiBuddhistDate.hpp"
#include "./ThaiBuddhistEra.hpp"
#include "../format/ResolverStyle.hpp"
#include "../temporal/ChronoField.hpp"
#include "../temporal/ValueRange.hpp"
#include "../../util/HashMap.hpp"
#include "./ThaiBuddhistChronology.hpp"

namespace java::time::chrono
{
	// Fields
	java::time::chrono::ThaiBuddhistChronology ThaiBuddhistChronology::INSTANCE()
	{
		return getStaticObjectField(
			"java.time.chrono.ThaiBuddhistChronology",
			"INSTANCE",
			"Ljava/time/chrono/ThaiBuddhistChronology;"
		);
	}
	
	// QJniObject forward
	ThaiBuddhistChronology::ThaiBuddhistChronology(QJniObject obj) : java::time::chrono::AbstractChronology(obj) {}
	
	// Constructors
	
	// Methods
	java::time::chrono::ThaiBuddhistDate ThaiBuddhistChronology::date(JObject arg0) const
	{
		return callObjectMethod(
			"date",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	java::time::chrono::ThaiBuddhistDate ThaiBuddhistChronology::date(jint arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"date",
			"(III)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0,
			arg1,
			arg2
		);
	}
	java::time::chrono::ThaiBuddhistDate ThaiBuddhistChronology::date(JObject arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"date",
			"(Ljava/time/chrono/Era;III)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	java::time::chrono::ThaiBuddhistDate ThaiBuddhistChronology::dateEpochDay(jlong arg0) const
	{
		return callObjectMethod(
			"dateEpochDay",
			"(J)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0
		);
	}
	java::time::chrono::ThaiBuddhistDate ThaiBuddhistChronology::dateNow() const
	{
		return callObjectMethod(
			"dateNow",
			"()Ljava/time/chrono/ThaiBuddhistDate;"
		);
	}
	java::time::chrono::ThaiBuddhistDate ThaiBuddhistChronology::dateNow(java::time::Clock arg0) const
	{
		return callObjectMethod(
			"dateNow",
			"(Ljava/time/Clock;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	java::time::chrono::ThaiBuddhistDate ThaiBuddhistChronology::dateNow(java::time::ZoneId arg0) const
	{
		return callObjectMethod(
			"dateNow",
			"(Ljava/time/ZoneId;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	java::time::chrono::ThaiBuddhistDate ThaiBuddhistChronology::dateYearDay(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"dateYearDay",
			"(II)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0,
			arg1
		);
	}
	java::time::chrono::ThaiBuddhistDate ThaiBuddhistChronology::dateYearDay(JObject arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"dateYearDay",
			"(Ljava/time/chrono/Era;II)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	java::time::chrono::ThaiBuddhistEra ThaiBuddhistChronology::eraOf(jint arg0) const
	{
		return callObjectMethod(
			"eraOf",
			"(I)Ljava/time/chrono/ThaiBuddhistEra;",
			arg0
		);
	}
	JObject ThaiBuddhistChronology::eras() const
	{
		return callObjectMethod(
			"eras",
			"()Ljava/util/List;"
		);
	}
	JString ThaiBuddhistChronology::getCalendarType() const
	{
		return callObjectMethod(
			"getCalendarType",
			"()Ljava/lang/String;"
		);
	}
	JString ThaiBuddhistChronology::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	jboolean ThaiBuddhistChronology::isLeapYear(jlong arg0) const
	{
		return callMethod<jboolean>(
			"isLeapYear",
			"(J)Z",
			arg0
		);
	}
	JObject ThaiBuddhistChronology::localDateTime(JObject arg0) const
	{
		return callObjectMethod(
			"localDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoLocalDateTime;",
			arg0.object()
		);
	}
	jint ThaiBuddhistChronology::prolepticYear(JObject arg0, jint arg1) const
	{
		return callMethod<jint>(
			"prolepticYear",
			"(Ljava/time/chrono/Era;I)I",
			arg0.object(),
			arg1
		);
	}
	java::time::temporal::ValueRange ThaiBuddhistChronology::range(java::time::temporal::ChronoField arg0) const
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/ChronoField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	java::time::chrono::ThaiBuddhistDate ThaiBuddhistChronology::resolveDate(JObject arg0, java::time::format::ResolverStyle arg1) const
	{
		return callObjectMethod(
			"resolveDate",
			"(Ljava/util/Map;Ljava/time/format/ResolverStyle;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object(),
			arg1.object()
		);
	}
	JObject ThaiBuddhistChronology::zonedDateTime(JObject arg0) const
	{
		return callObjectMethod(
			"zonedDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoZonedDateTime;",
			arg0.object()
		);
	}
	JObject ThaiBuddhistChronology::zonedDateTime(java::time::Instant arg0, java::time::ZoneId arg1) const
	{
		return callObjectMethod(
			"zonedDateTime",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/chrono/ChronoZonedDateTime;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::time::chrono

