#pragma once

#include <opencv2/opencv.hpp>
#include <vector>
#include "Object_landmark.h"
#include "g2o_Object.h"

class Quadric_landmark;

class tracking_frame_quadric {
 public:
  int frame_seq_id;  // image topic sequence id, fixed
  cv::Mat frame_img;
  cv::Mat quadrics_2d_img;

  g2o::VertexSE3Expmap* pose_vertex;

  std::vector<Detection_result*> detect_result;  // object detection result
  g2o::SE3Quat cam_pose_Tcw;                     // optimized pose  world to cam
  g2o::SE3Quat cam_pose_Twc;                     // optimized pose  cam to world
};
