#pragma once

#include <memory>
#include <unordered_map>

#include <TerrainDemo/interfaces/IVisualizationTechnique.h>
#include <TerrainDemo/core/Camera.h>
#include <TerrainDemo/core/Scene.h>
#include <TerrainDemo/core/Entity.h>
#include <TerrainDemo/TerrainScene.h>

namespace TerrainDemo
{
    class TerrainVT : public interfaces::IVisualizationTechnique
    {
    public:
        TerrainVT();
        void draw() override;
        void drawSetUp() override;
        void setScene(std::shared_ptr<core::Scene> scene) override;
        inline void setCamera(std::shared_ptr<core::Camera> camera) { _camera = camera; }
    protected:
        std::shared_ptr<TerrainScene> _scene = nullptr;
        std::shared_ptr<core::Camera> _camera = nullptr;
    };
} // namespace TerrainDemo
