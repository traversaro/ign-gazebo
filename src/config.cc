/*
 * Copyright (C) 2022 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/

#include <ignition/gazebo/config.hh>

#include <filesystem>

namespace ignition
{
  namespace gazebo
  {

    std::string getGUIConfigPath()
    {
      std::filesystem::path relative_ret_path(IGNITION_GAZEBO_GUI_CONFIG_RELATIVE_PATH);
      std::filesystem::path install_prefix(getInstallPrefix());
      std::filesystem::path ret_path = install_prefix / relative_ret_path;
      return ret_path.string();
    }

    std::string getSystemConfigPath()
    {
      std::filesystem::path relative_ret_path(IGNITION_GAZEBO_SYSTEM_CONFIG_RELATIVE_PATH);
      std::filesystem::path install_prefix(getInstallPrefix());
      std::filesystem::path ret_path = install_prefix / relative_ret_path;
      return ret_path.string();
    }

    std::string getServerConfigPath()
    {
      std::filesystem::path relative_ret_path(IGNITION_GAZEBO_SERVER_CONFIG_RELATIVE_PATH);
      std::filesystem::path install_prefix(getInstallPrefix());
      std::filesystem::path ret_path = install_prefix / relative_ret_path;
      return ret_path.string();
    }

    std::string getPluginInstallDir()
    {
      std::filesystem::path relative_ret_path(IGN_GAZEBO_PLUGIN_RELATIVE_INSTALL_DIR);
      std::filesystem::path install_prefix(getInstallPrefix());
      std::filesystem::path ret_path = install_prefix / relative_ret_path;
      return ret_path.string();
    }

    std::string getGUIPluginInstallDir()
    {
      std::filesystem::path relative_ret_path(IGN_GAZEBO_GUI_PLUGIN_RELATIVE_INSTALL_DIR);
      std::filesystem::path install_prefix(getInstallPrefix());
      std::filesystem::path ret_path = install_prefix / relative_ret_path;
      return ret_path.string();
    }

    std::string getWorldInstallDir()
    {
      std::filesystem::path relative_ret_path(IGN_GAZEBO_WORLD_RELATIVE_INSTALL_DIR);
      std::filesystem::path install_prefix(getInstallPrefix());
      std::filesystem::path ret_path = install_prefix / relative_ret_path;
      return ret_path.string();
    }

  }
}
