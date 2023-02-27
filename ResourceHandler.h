//
// Created by Haibin Cao on 2/27/23.
//

#ifndef SPRING_008_SHADOW_BOX_RESOURCEHANDLER_H
#define SPRING_008_SHADOW_BOX_RESOURCEHANDLER_H
#include "SFML/Graphics.hpp"
#include "map"

template <typename ID, typename Resource>
class ResourceHandler
{
private:
    static std::map<ID, Resource> resourceMap;
public:
    ResourceHandler();
    static void load(ID id, const std::string& fileName);
    static Resource& get(ID id);
};

#include "ResourceHandler.cpp"
#endif //SPRING_008_SHADOW_BOX_RESOURCEHANDLER_H
