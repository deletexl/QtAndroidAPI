#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./SearchResult_MatchRange.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	SearchResult_MatchRange::SearchResult_MatchRange(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SearchResult_MatchRange::SearchResult_MatchRange(jint arg0, jint arg1)
		: JObject(
			"android.app.appsearch.SearchResult$MatchRange",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean SearchResult_MatchRange::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint SearchResult_MatchRange::getEnd() const
	{
		return callMethod<jint>(
			"getEnd",
			"()I"
		);
	}
	jint SearchResult_MatchRange::getStart() const
	{
		return callMethod<jint>(
			"getStart",
			"()I"
		);
	}
	jint SearchResult_MatchRange::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString SearchResult_MatchRange::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::app::appsearch

