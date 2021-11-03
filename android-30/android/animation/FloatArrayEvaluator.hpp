#pragma once

#include "../../JObject.hpp"


namespace android::animation
{
	class FloatArrayEvaluator : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FloatArrayEvaluator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FloatArrayEvaluator(QAndroidJniObject obj);
		
		// Constructors
		FloatArrayEvaluator();
		FloatArrayEvaluator(jfloatArray arg0);
		
		// Methods
		jfloatArray evaluate(jfloat arg0, jfloatArray arg1, jfloatArray arg2);
		jobject evaluate(jfloat arg0, jobject arg1, jobject arg2);
	};
} // namespace android::animation

