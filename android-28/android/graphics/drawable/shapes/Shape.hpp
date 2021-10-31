#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Outline;
}
namespace android::graphics
{
	class Paint;
}

namespace android::graphics::drawable::shapes
{
	class Shape : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Shape(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Shape(QAndroidJniObject obj);
		
		// Constructors
		Shape();
		
		// Methods
		android::graphics::drawable::shapes::Shape clone();
		void draw(android::graphics::Canvas arg0, android::graphics::Paint arg1);
		jfloat getHeight();
		void getOutline(android::graphics::Outline arg0);
		jfloat getWidth();
		jboolean hasAlpha();
		void resize(jfloat arg0, jfloat arg1);
	};
} // namespace android::graphics::drawable::shapes
