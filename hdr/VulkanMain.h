#ifndef VULKAN_MAIN_H
#define VULKAN_MAIN_H

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <vector>
#include <cstring>

const uint32_t WIDTH = 800;
const uint32_t HEIGHT = 600;

const std::vector<const char*> validationLayers = 
{
    "VK_LAYER_KHRONOS_VALIDATION"
};

#ifdef NDEBUG//preprocces debuggermode essentially NDEBUG is a macro part of c++ standerd for "notdebug" 
    const bool enableValidationLayers = false;
#else
    const bool enableValidationLayers = true;
#endif

class HelloTriangleApplication {
public:
    void Run();

private:
    GLFWwindow* window;
    VkInstance instance;

    void initWindow();
    void InitializeVulkan();
    void MainLoop();
    void Cleanup();
    void createInstance();
    bool checkValidationLayerSupport();
    std::vector<const char*> getRequiredExtensions();
    static VKAPI_ATTR VkBool32 VKAPI_CALL debugCallback(
    VkDebugUtilsMessageTypeFlagsEXT messageType,
    VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity,
    const VkDebugUtilsMessengerCallbackDataEXT *pCallbackData,
    void *pUserData);

    VkDebugUtilsMessengerEXT debugMessenger;//the callback msg are apart of this i guess now?
    VkDebugUtilsMessengerCreateInfoEXT createInfo{};
    
    void setupDebugMessenger();

};

#endif