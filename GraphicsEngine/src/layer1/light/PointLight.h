/*
 * PointLight.h
 *
 *  Created on: 24.09.2012
 *      Author: nopper
 */

#ifndef POINTLIGHT_H_
#define POINTLIGHT_H_

#include "../../layer0/math/Point4.h"

#include "Light.h"

class PointLight: public Light
{

protected:

	Point4 position;

	float constantAttenuation;
	float linearAttenuation;
	float quadraticAttenuation;

public:
	PointLight(const Point4& position, float constantAttenuation, float linearAttenuation, float quadraticAttenuation, const Color& ambient, const Color& diffuse,
			const Color& specular);
	virtual ~PointLight();

	const Point4& getPosition() const;
	void setPosition(const Point4& position);

	float getConstantAttenuation() const;
	void setConstantAttenuation(float constantAttenuation);
	float getLinearAttenuation() const;
	void setLinearAttenuation(float linearAttenuation);
	float getQuadraticAttenuation() const;
	void setQuadraticAttenuation(float quadraticAttenuation);

	virtual void setLightProperties(const ProgramSP& program) const;

};

#endif /* POINTLIGHT_H_ */