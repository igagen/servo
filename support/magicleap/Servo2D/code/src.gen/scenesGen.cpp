// -- WARNING -- WARNING -- WARNING -- WARNING -- WARNING -- WARNING -- 
//
// THE CONTENTS OF THIS FILE IS GENERATED BY CODE AND
// ANY MODIFICATIONS WILL BE OVERWRITTEN
//
// -- WARNING -- WARNING -- WARNING -- WARNING -- WARNING -- WARNING -- 

// %BANNER_BEGIN%
// ---------------------------------------------------------------------
// %COPYRIGHT_BEGIN%
//
// Copyright (c) 2018 Magic Leap, Inc. All Rights Reserved.
// Use of this file is governed by the Creator Agreement, located
// here: https://id.magicleap.com/creator-terms
//
// %COPYRIGHT_END%
// ---------------------------------------------------------------------
// %BANNER_END%

#include <scenesGen.h>

namespace Servo2D_exportedNodes {
  const std::string contentPanel = "contentPanel";
  const std::string content = "content";
  const std::string backButton = "backButton";
  const std::string fwdButton = "fwdButton";
  const std::string urlBar = "urlBar";
  const std::string laser = "laser";
}

namespace scenes {

  const SceneDescriptor::ExportedNodeReferences Servo2D_exportedNodesMap = {
    {"contentPanel", Servo2D_exportedNodes::contentPanel},
    {"content", Servo2D_exportedNodes::content},
    {"backButton", Servo2D_exportedNodes::backButton},
    {"fwdButton", Servo2D_exportedNodes::fwdButton},
    {"urlBar", Servo2D_exportedNodes::urlBar},
    {"laser", Servo2D_exportedNodes::laser}
  };

  const SceneDescriptor Servo2D(
    "Servo2D",
    "root",
    "/assets/scenes/scenes/Servo2D.scene.xml",
    "/assets/scenes/scenes/Servo2D.scene.res.xml",
    Servo2D_exportedNodesMap,
    true);

  const SceneDescriptorReferences exportedScenes = {
    {Servo2D.getExportedName(), Servo2D}
  };
}
