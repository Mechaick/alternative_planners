# Alternative planners

This ros2 package contain some additionnal nav2 planners, in order to understand how to make some and implement newer approaches


## Usage

Build this package and source it, then change the planer in your nav2 config file

```
planner_server:
  ros__parameters:
    expected_planner_frequency: 20.0
    use_sim_time: True
    planner_plugins: ["GridBased"]
    GridBased:
      plugin: "alternative_planners/WPE"
      interpolation_resolution: 0.1
      randomness: 10.0
```



## Straight line

A very simplistic planner provided in the nav2 examples, it features the parameter interpolation_resolution

## WPE

The Worst Planner Ever, a slight modification of the straight line, adding a randomness variable the noises every points

## ADMM planner

**WORK IN PROGRESS** A planner based on the work of https://arxiv.org/pdf/2012.09808 , implementing the Alternating direction method of multiplier, to ensure connectivity maintenance between various robots

