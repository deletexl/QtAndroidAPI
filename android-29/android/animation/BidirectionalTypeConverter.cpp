#include "./BidirectionalTypeConverter.hpp"

namespace android::animation
{
	// Fields
	
	// QAndroidJniObject forward
	BidirectionalTypeConverter::BidirectionalTypeConverter(QAndroidJniObject obj) : android::animation::TypeConverter(obj) {}
	
	// Constructors
	BidirectionalTypeConverter::BidirectionalTypeConverter(jclass arg0, jclass arg1)
		: android::animation::TypeConverter(
			"android.animation.BidirectionalTypeConverter",
			"(Ljava/lang/Class;Ljava/lang/Class;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jobject BidirectionalTypeConverter::convertBack(jobject arg0)
	{
		return callObjectMethod(
			"convertBack",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	QAndroidJniObject BidirectionalTypeConverter::invert()
	{
		return callObjectMethod(
			"invert",
			"()Landroid/animation/BidirectionalTypeConverter;"
		);
	}
} // namespace android::animation

