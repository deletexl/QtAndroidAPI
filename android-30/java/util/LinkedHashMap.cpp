#include "../../JObjectArray.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JObject.hpp"
#include "./LinkedHashMap.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	LinkedHashMap::LinkedHashMap(QJniObject obj) : java::util::HashMap(obj) {}
	
	// Constructors
	LinkedHashMap::LinkedHashMap()
		: java::util::HashMap(
			"java.util.LinkedHashMap",
			"()V"
		) {}
	LinkedHashMap::LinkedHashMap(jint arg0)
		: java::util::HashMap(
			"java.util.LinkedHashMap",
			"(I)V",
			arg0
		) {}
	LinkedHashMap::LinkedHashMap(JObject arg0)
		: java::util::HashMap(
			"java.util.LinkedHashMap",
			"(Ljava/util/Map;)V",
			arg0.object()
		) {}
	LinkedHashMap::LinkedHashMap(jint arg0, jfloat arg1)
		: java::util::HashMap(
			"java.util.LinkedHashMap",
			"(IF)V",
			arg0,
			arg1
		) {}
	LinkedHashMap::LinkedHashMap(jint arg0, jfloat arg1, jboolean arg2)
		: java::util::HashMap(
			"java.util.LinkedHashMap",
			"(IFZ)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	void LinkedHashMap::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean LinkedHashMap::containsValue(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject LinkedHashMap::entrySet() const
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	void LinkedHashMap::forEach(JObject arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.object()
		);
	}
	JObject LinkedHashMap::get(JObject arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	JObject LinkedHashMap::getOrDefault(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"getOrDefault",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	JObject LinkedHashMap::keySet() const
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	void LinkedHashMap::replaceAll(JObject arg0) const
	{
		callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.object()
		);
	}
	JObject LinkedHashMap::values() const
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::util

