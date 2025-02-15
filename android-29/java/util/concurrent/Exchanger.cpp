#include "../../../JArray.hpp"
#include "../../../JObject.hpp"
#include "./TimeUnit.hpp"
#include "./Exchanger.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	Exchanger::Exchanger(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Exchanger::Exchanger()
		: JObject(
			"java.util.concurrent.Exchanger",
			"()V"
		) {}
	
	// Methods
	JObject Exchanger::exchange(JObject arg0) const
	{
		return callObjectMethod(
			"exchange",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	JObject Exchanger::exchange(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const
	{
		return callObjectMethod(
			"exchange",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1,
			arg2.object()
		);
	}
} // namespace java::util::concurrent

