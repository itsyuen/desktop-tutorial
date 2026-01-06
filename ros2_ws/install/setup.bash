# test overlay bash command installation

echo -e "\e[31mCurrent ROS2 runtime setup!!!\e[0m"
echo -e "\e[34mOverlay runtime is here!\e[0m"

# ros domain id assignment
if [ -z "$ROS_DOMAIN_ID" ]; then
  export ROS_DOMAIN_ID=10
  echo -e "\e[32mROS DOMAIN ID is:\e[0m$ROS_DOMAIN_ID"
fi

export PATH="~/GitHub/desktop-tutorial/ros2_ws:$PATH"
echo "The following paths are shortcut:"
echo $PATH