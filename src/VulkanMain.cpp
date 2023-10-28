#include "VulkanMain.h"

void HelloTriangleApplication::Run()
{
    InitializeVulkan();
    MainLoop();
    Cleanup();
}

void HelloTriangleApplication::InitializeVulkan()
{
    std::cout << "[Lightweight Vulkan API]: Initializing..." << std::endl;
}

void HelloTriangleApplication::MainLoop()
{
    std::cout << "[Lightweight Vulkan API]: Running..." << std::endl;
}

void HelloTriangleApplication::Cleanup()
{
    std::cout << "[Lightweight Vulkan API]: Cleaning up..." << std::endl;
}