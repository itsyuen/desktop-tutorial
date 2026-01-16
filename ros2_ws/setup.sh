#!/usr/bin/env bash
# ROS 2 workspace setup script (safe to source multiple times)

set -e

# Get directory of this script (ros2_ws root)
WS_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# (Optional) ensure ~/bin is on PATH once
if [ -d "$HOME/bin" ] && [[ ":$PATH:" != *":$HOME/bin:"* ]]; then
  export PATH="$HOME/bin:$PATH"
fi

# Source ROS 2 base
if [ -f /opt/ros/jazzy/setup.bash ]; then
  source /opt/ros/jazzy/setup.bash
else
  echo "[ERROR] ROS 2 Jazzy not found at /opt/ros/jazzy. Install ROS 2 first."
  return 1 2>/dev/null || exit 1
fi

# Run environment check (if present)
if [ -x "$HOME/bin/check_dev_env.sh" ]; then
  "$HOME/bin/check_dev_env.sh"
else
  echo "[WARN] $HOME/bin/check_dev_env.sh not found or not executable."
fi

# Source workspace overlay (if built)
if [ -f "${WS_DIR}/install/setup.bash" ]; then
  source "${WS_DIR}/install/setup.bash"
fi
