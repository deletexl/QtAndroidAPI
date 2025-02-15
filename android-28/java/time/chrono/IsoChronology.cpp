#include "../../io/ObjectInputStream.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../Clock.hpp"
#include "../Instant.hpp"
#include "../LocalDate.hpp"
#include "../LocalDateTime.hpp"
#include "../Period.hpp"
#include "../ZoneId.hpp"
#include "../ZoneOffset.hpp"
#include "../ZonedDateTime.hpp"
#include "./IsoEra.hpp"
#include "../format/ResolverStyle.hpp"
#include "../temporal/ChronoField.hpp"
#include "../temporal/ValueRange.hpp"
#include "./IsoChronology.hpp"

namespace java::time::chrono
{
	// Fields
	java::time::chrono::IsoChronology IsoChronology::INSTANCE()
	{
		return getStaticObjectField(
			"java.time.chrono.IsoChronology",
			"INSTANCE",
			"Ljava/time/chrono/IsoChronology;"
		);
	}
	
	// QJniObject forward
	IsoChronology::IsoChronology(QJniObject obj) : java::time::chrono::AbstractChronology(obj) {}
	
	// Constructors
	
	// Methods
	java::time::LocalDate IsoChronology::date(JObject arg0) const
	{
		return callObjectMethod(
			"date",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	java::time::LocalDate IsoChronology::date(jint arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"date",
			"(III)Ljava/time/LocalDate;",
			arg0,
			arg1,
			arg2
		);
	}
	java::time::LocalDate IsoChronology::date(JObject arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"date",
			"(Ljava/time/chrono/Era;III)Ljava/time/LocalDate;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	java::time::LocalDate IsoChronology::dateEpochDay(jlong arg0) const
	{
		return callObjectMethod(
			"dateEpochDay",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	java::time::LocalDate IsoChronology::dateNow() const
	{
		return callObjectMethod(
			"dateNow",
			"()Ljava/time/LocalDate;"
		);
	}
	java::time::LocalDate IsoChronology::dateNow(java::time::Clock arg0) const
	{
		return callObjectMethod(
			"dateNow",
			"(Ljava/time/Clock;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	java::time::LocalDate IsoChronology::dateNow(java::time::ZoneId arg0) const
	{
		return callObjectMethod(
			"dateNow",
			"(Ljava/time/ZoneId;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	java::time::LocalDate IsoChronology::dateYearDay(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"dateYearDay",
			"(II)Ljava/time/LocalDate;",
			arg0,
			arg1
		);
	}
	java::time::LocalDate IsoChronology::dateYearDay(JObject arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"dateYearDay",
			"(Ljava/time/chrono/Era;II)Ljava/time/LocalDate;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jlong IsoChronology::epochSecond(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, java::time::ZoneOffset arg6) const
	{
		return callMethod<jlong>(
			"epochSecond",
			"(IIIIIILjava/time/ZoneOffset;)J",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.object()
		);
	}
	java::time::chrono::IsoEra IsoChronology::eraOf(jint arg0) const
	{
		return callObjectMethod(
			"eraOf",
			"(I)Ljava/time/chrono/IsoEra;",
			arg0
		);
	}
	JObject IsoChronology::eras() const
	{
		return callObjectMethod(
			"eras",
			"()Ljava/util/List;"
		);
	}
	JString IsoChronology::getCalendarType() const
	{
		return callObjectMethod(
			"getCalendarType",
			"()Ljava/lang/String;"
		);
	}
	JString IsoChronology::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	jboolean IsoChronology::isLeapYear(jlong arg0) const
	{
		return callMethod<jboolean>(
			"isLeapYear",
			"(J)Z",
			arg0
		);
	}
	java::time::LocalDateTime IsoChronology::localDateTime(JObject arg0) const
	{
		return callObjectMethod(
			"localDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/LocalDateTime;",
			arg0.object()
		);
	}
	java::time::Period IsoChronology::period(jint arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"period",
			"(III)Ljava/time/Period;",
			arg0,
			arg1,
			arg2
		);
	}
	jint IsoChronology::prolepticYear(JObject arg0, jint arg1) const
	{
		return callMethod<jint>(
			"prolepticYear",
			"(Ljava/time/chrono/Era;I)I",
			arg0.object(),
			arg1
		);
	}
	java::time::temporal::ValueRange IsoChronology::range(java::time::temporal::ChronoField arg0) const
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/ChronoField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	java::time::LocalDate IsoChronology::resolveDate(JObject arg0, java::time::format::ResolverStyle arg1) const
	{
		return callObjectMethod(
			"resolveDate",
			"(Ljava/util/Map;Ljava/time/format/ResolverStyle;)Ljava/time/LocalDate;",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::ZonedDateTime IsoChronology::zonedDateTime(JObject arg0) const
	{
		return callObjectMethod(
			"zonedDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	java::time::ZonedDateTime IsoChronology::zonedDateTime(java::time::Instant arg0, java::time::ZoneId arg1) const
	{
		return callObjectMethod(
			"zonedDateTime",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::time::chrono

