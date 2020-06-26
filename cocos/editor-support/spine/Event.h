/******************************************************************************
 * Spine Runtimes License Agreement
 * Last updated January 1, 2020. Replaces all prior versions.
 *
 * Copyright (c) 2013-2020, Esoteric Software LLC
 *
 * Integration of the Spine Runtimes into software or otherwise creating
 * derivative works of the Spine Runtimes is permitted under the terms and
 * conditions of Section 2 of the Spine Editor License Agreement:
 * http://esotericsoftware.com/spine-editor-license
 *
 * Otherwise, it is permitted to integrate the Spine Runtimes into software
 * or otherwise create derivative works of the Spine Runtimes (collectively,
 * "Products"), provided that each user of the Products must obtain their own
 * Spine Editor license and redistribution of the Products in any form must
 * include this license and copyright notice.
 *
 * THE SPINE RUNTIMES ARE PROVIDED BY ESOTERIC SOFTWARE LLC "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL ESOTERIC SOFTWARE LLC BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES,
 * BUSINESS INTERRUPTION, OR LOSS OF USE, DATA, OR PROFITS) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THE SPINE RUNTIMES, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *****************************************************************************/

#ifndef Spine_Event_h
#define Spine_Event_h

#include "spine/SpineObject.h"
#include "spine/SpineString.h"

namespace spine {
class EventData;

/// Stores the current pose values for an Event.
class SP_API Event : public SpineObject {
	friend class SkeletonBinary;

	friend class SkeletonJson;

	friend class AnimationState;

public:
	Event(float time, const EventData &data);

	const EventData &getData();

	/// The animation time this event was keyed.
	float getTime();

	int getIntValue();

	void setIntValue(int inValue);

	float getFloatValue();

	void setFloatValue(float inValue);

	const String &getStringValue();

	void setStringValue(const String &inValue);

	float getVolume();

	void setVolume(float inValue);

	float getBalance();

	void setBalance(float inValue);

private:
	const EventData &_data;
	const float _time;
	int _intValue;
	float _floatValue;
	String _stringValue;
	float _volume;
	float _balance;
};
}

#endif /* Spine_Event_h */
