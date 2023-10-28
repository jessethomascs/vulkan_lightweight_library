#ifndef VULKAN_MAIN_H
#define VULKAN_MAIN_H

#include <vulkan/vulkan.h>

#include <iostream>
#include <stdexcept>
#include <cstdlib>

class HelloTriangleApplication
{
public:
    void Run();

private:
    void InitializeVulkan();
    void MainLoop();
    void Cleanup();
};

#endif