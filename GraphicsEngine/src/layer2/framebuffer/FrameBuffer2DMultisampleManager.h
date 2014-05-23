/*
 * FrameBuffer2DMultisampleManager.h
 *
 *  Created on: 05.02.2013
 *      Author: nopper
 */

#ifndef FRAMEBUFFER2DMULTISAMPLEMANAGER_H_
#define FRAMEBUFFER2DMULTISAMPLEMANAGER_H_

#include "../../UsedLibs.h"

#include "../../layer0/stereotype/Singleton.h"

#include "FrameBuffer2DMultisample.h"

class FrameBuffer2DMultisampleManager : public Singleton<FrameBuffer2DMultisampleManager>
{

	friend class Singleton<FrameBuffer2DMultisampleManager>;

private:

	std::map<std::string, FrameBuffer2DMultisampleSP> allFrameBuffers;

	std::map<std::string, FrameBuffer2DMultisampleSP> allWindowFrameBuffers;

	FrameBuffer2DMultisampleManager();
	virtual ~FrameBuffer2DMultisampleManager();

public:

	bool containsFrameBuffer(const std::string& key) const;

	const FrameBuffer2DMultisampleSP& getFrameBuffer(const std::string& key) const;

	void addFrameBuffer(const std::string& key, const FrameBuffer2DMultisampleSP& framBuffer2DMultisample, bool windowFrameBuffer);

	FrameBuffer2DMultisampleSP createFrameBuffer(const std::string& key, boost::int32_t width, boost::int32_t height, bool windowFrameBuffer);

	void updateWidthHeight(boost::int32_t width, boost::int32_t height);
};

#endif /* FRAMEBUFFER2DMULTISAMPLEMANAGER_H_ */
