#include "../io/ObjectInputStream.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Clock.hpp"
#include "./Instant.hpp"
#include "./LocalDate.hpp"
#include "./LocalTime.hpp"
#include "./OffsetDateTime.hpp"
#include "./ZoneId.hpp"
#include "./ZoneOffset.hpp"
#include "./format/DateTimeFormatter.hpp"
#include "./temporal/ValueRange.hpp"
#include "./OffsetTime.hpp"

namespace java::time
{
	// Fields
	java::time::OffsetTime OffsetTime::MAX()
	{
		return getStaticObjectField(
			"java.time.OffsetTime",
			"MAX",
			"Ljava/time/OffsetTime;"
		);
	}
	java::time::OffsetTime OffsetTime::MIN()
	{
		return getStaticObjectField(
			"java.time.OffsetTime",
			"MIN",
			"Ljava/time/OffsetTime;"
		);
	}
	
	// QJniObject forward
	OffsetTime::OffsetTime(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::time::OffsetTime OffsetTime::from(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.time.OffsetTime",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/OffsetTime;",
			arg0.object()
		);
	}
	java::time::OffsetTime OffsetTime::now()
	{
		return callStaticObjectMethod(
			"java.time.OffsetTime",
			"now",
			"()Ljava/time/OffsetTime;"
		);
	}
	java::time::OffsetTime OffsetTime::now(java::time::Clock arg0)
	{
		return callStaticObjectMethod(
			"java.time.OffsetTime",
			"now",
			"(Ljava/time/Clock;)Ljava/time/OffsetTime;",
			arg0.object()
		);
	}
	java::time::OffsetTime OffsetTime::now(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.time.OffsetTime",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/OffsetTime;",
			arg0.object()
		);
	}
	java::time::OffsetTime OffsetTime::of(java::time::LocalTime arg0, java::time::ZoneOffset arg1)
	{
		return callStaticObjectMethod(
			"java.time.OffsetTime",
			"of",
			"(Ljava/time/LocalTime;Ljava/time/ZoneOffset;)Ljava/time/OffsetTime;",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::OffsetTime OffsetTime::of(jint arg0, jint arg1, jint arg2, jint arg3, java::time::ZoneOffset arg4)
	{
		return callStaticObjectMethod(
			"java.time.OffsetTime",
			"of",
			"(IIIILjava/time/ZoneOffset;)Ljava/time/OffsetTime;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	java::time::OffsetTime OffsetTime::ofInstant(java::time::Instant arg0, java::time::ZoneId arg1)
	{
		return callStaticObjectMethod(
			"java.time.OffsetTime",
			"ofInstant",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/OffsetTime;",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::OffsetTime OffsetTime::parse(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.OffsetTime",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/OffsetTime;",
			arg0.object<jstring>()
		);
	}
	java::time::OffsetTime OffsetTime::parse(JString arg0, java::time::format::DateTimeFormatter arg1)
	{
		return callStaticObjectMethod(
			"java.time.OffsetTime",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/OffsetTime;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JObject OffsetTime::adjustInto(JObject arg0) const
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	java::time::OffsetDateTime OffsetTime::atDate(java::time::LocalDate arg0) const
	{
		return callObjectMethod(
			"atDate",
			"(Ljava/time/LocalDate;)Ljava/time/OffsetDateTime;",
			arg0.object()
		);
	}
	jint OffsetTime::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint OffsetTime::compareTo(java::time::OffsetTime arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/time/OffsetTime;)I",
			arg0.object()
		);
	}
	jboolean OffsetTime::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString OffsetTime::format(java::time::format::DateTimeFormatter arg0) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.object()
		);
	}
	jint OffsetTime::get(JObject arg0) const
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	jint OffsetTime::getHour() const
	{
		return callMethod<jint>(
			"getHour",
			"()I"
		);
	}
	jlong OffsetTime::getLong(JObject arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	jint OffsetTime::getMinute() const
	{
		return callMethod<jint>(
			"getMinute",
			"()I"
		);
	}
	jint OffsetTime::getNano() const
	{
		return callMethod<jint>(
			"getNano",
			"()I"
		);
	}
	java::time::ZoneOffset OffsetTime::getOffset() const
	{
		return callObjectMethod(
			"getOffset",
			"()Ljava/time/ZoneOffset;"
		);
	}
	jint OffsetTime::getSecond() const
	{
		return callMethod<jint>(
			"getSecond",
			"()I"
		);
	}
	jint OffsetTime::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean OffsetTime::isAfter(java::time::OffsetTime arg0) const
	{
		return callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/OffsetTime;)Z",
			arg0.object()
		);
	}
	jboolean OffsetTime::isBefore(java::time::OffsetTime arg0) const
	{
		return callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/OffsetTime;)Z",
			arg0.object()
		);
	}
	jboolean OffsetTime::isEqual(java::time::OffsetTime arg0) const
	{
		return callMethod<jboolean>(
			"isEqual",
			"(Ljava/time/OffsetTime;)Z",
			arg0.object()
		);
	}
	jboolean OffsetTime::isSupported(JObject arg0) const
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	java::time::OffsetTime OffsetTime::minus(JObject arg0) const
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/OffsetTime;",
			arg0.object()
		);
	}
	java::time::OffsetTime OffsetTime::minus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/OffsetTime;",
			arg0,
			arg1.object()
		);
	}
	java::time::OffsetTime OffsetTime::minusHours(jlong arg0) const
	{
		return callObjectMethod(
			"minusHours",
			"(J)Ljava/time/OffsetTime;",
			arg0
		);
	}
	java::time::OffsetTime OffsetTime::minusMinutes(jlong arg0) const
	{
		return callObjectMethod(
			"minusMinutes",
			"(J)Ljava/time/OffsetTime;",
			arg0
		);
	}
	java::time::OffsetTime OffsetTime::minusNanos(jlong arg0) const
	{
		return callObjectMethod(
			"minusNanos",
			"(J)Ljava/time/OffsetTime;",
			arg0
		);
	}
	java::time::OffsetTime OffsetTime::minusSeconds(jlong arg0) const
	{
		return callObjectMethod(
			"minusSeconds",
			"(J)Ljava/time/OffsetTime;",
			arg0
		);
	}
	java::time::OffsetTime OffsetTime::plus(JObject arg0) const
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/OffsetTime;",
			arg0.object()
		);
	}
	java::time::OffsetTime OffsetTime::plus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/OffsetTime;",
			arg0,
			arg1.object()
		);
	}
	java::time::OffsetTime OffsetTime::plusHours(jlong arg0) const
	{
		return callObjectMethod(
			"plusHours",
			"(J)Ljava/time/OffsetTime;",
			arg0
		);
	}
	java::time::OffsetTime OffsetTime::plusMinutes(jlong arg0) const
	{
		return callObjectMethod(
			"plusMinutes",
			"(J)Ljava/time/OffsetTime;",
			arg0
		);
	}
	java::time::OffsetTime OffsetTime::plusNanos(jlong arg0) const
	{
		return callObjectMethod(
			"plusNanos",
			"(J)Ljava/time/OffsetTime;",
			arg0
		);
	}
	java::time::OffsetTime OffsetTime::plusSeconds(jlong arg0) const
	{
		return callObjectMethod(
			"plusSeconds",
			"(J)Ljava/time/OffsetTime;",
			arg0
		);
	}
	JObject OffsetTime::query(JObject arg0) const
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	java::time::temporal::ValueRange OffsetTime::range(JObject arg0) const
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	jlong OffsetTime::toEpochSecond(java::time::LocalDate arg0) const
	{
		return callMethod<jlong>(
			"toEpochSecond",
			"(Ljava/time/LocalDate;)J",
			arg0.object()
		);
	}
	java::time::LocalTime OffsetTime::toLocalTime() const
	{
		return callObjectMethod(
			"toLocalTime",
			"()Ljava/time/LocalTime;"
		);
	}
	JString OffsetTime::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	java::time::OffsetTime OffsetTime::truncatedTo(JObject arg0) const
	{
		return callObjectMethod(
			"truncatedTo",
			"(Ljava/time/temporal/TemporalUnit;)Ljava/time/OffsetTime;",
			arg0.object()
		);
	}
	jlong OffsetTime::until(JObject arg0, JObject arg1) const
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::OffsetTime OffsetTime::with(JObject arg0) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/OffsetTime;",
			arg0.object()
		);
	}
	java::time::OffsetTime OffsetTime::with(JObject arg0, jlong arg1) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/OffsetTime;",
			arg0.object(),
			arg1
		);
	}
	java::time::OffsetTime OffsetTime::withHour(jint arg0) const
	{
		return callObjectMethod(
			"withHour",
			"(I)Ljava/time/OffsetTime;",
			arg0
		);
	}
	java::time::OffsetTime OffsetTime::withMinute(jint arg0) const
	{
		return callObjectMethod(
			"withMinute",
			"(I)Ljava/time/OffsetTime;",
			arg0
		);
	}
	java::time::OffsetTime OffsetTime::withNano(jint arg0) const
	{
		return callObjectMethod(
			"withNano",
			"(I)Ljava/time/OffsetTime;",
			arg0
		);
	}
	java::time::OffsetTime OffsetTime::withOffsetSameInstant(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"withOffsetSameInstant",
			"(Ljava/time/ZoneOffset;)Ljava/time/OffsetTime;",
			arg0.object()
		);
	}
	java::time::OffsetTime OffsetTime::withOffsetSameLocal(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"withOffsetSameLocal",
			"(Ljava/time/ZoneOffset;)Ljava/time/OffsetTime;",
			arg0.object()
		);
	}
	java::time::OffsetTime OffsetTime::withSecond(jint arg0) const
	{
		return callObjectMethod(
			"withSecond",
			"(I)Ljava/time/OffsetTime;",
			arg0
		);
	}
} // namespace java::time

