# test overlay bash command installation

echo -e "\e[31mNo special overlay sourced!!!\e[0m"

# ros domain id assignment
if [ -z "ROS_DOMAIN_ID" ]; then
  export ROS_DOMAIN_ID=10
  echo -e "\e[34mRuntime is here!\e[0m"
fi

echo -e "\e[32mROS DOMAIN ID is:\e[0m"
echo $ROS_DOMAIN_ID