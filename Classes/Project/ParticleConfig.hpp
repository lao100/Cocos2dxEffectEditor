//
//  ParticleConfig.hpp
//  EffectEditor
//
//  Created by Matrix on 16/8/1.
//
//

#ifndef ParticleConfig_hpp
#define ParticleConfig_hpp

#include <stdio.h>
#include "GlobalDefine.hpp"

NS_EE_BEGIN

class ParticleConfig
{
public:
    std::string id;
    std::string file;
    std::string timeline;
    cocos2d::Vec3 position;
};

NS_EE_END


#endif /* ParticleConfig_hpp */
