# 簡介
對CesiumForUnreal中使用自定義角色在地面進行探索時可能出現的位置瞬移以及攝像機視角閃爍的修復 

# 使用方法
根據使用場景可以劃分兩種使用方法（本人也是正在學習虛幻引擎，以下方法都是基於至少有藍圖參與角色創建所使用的方法，純C++創建角色應該太低效了吧）
## 1.已經使用UE默認Character構建了自己的角色
 
   打開你的角色藍圖，在`Components`菜單欄裏面選中`CharacterMovementComponent`，在details菜單欄裏面找到`Variable`子菜單，更改裏面的`Component Class`，選擇你的自定義`CharacterMovementComponent`，然後點擊編譯。   
## 2.還沒有創建自己的角色

   選擇自定義的Character C++文件創建角色即可。
# Introduction

A fix for potential character position teleportation and camera flickering when exploring on the ground with a custom character in Cesium for Unreal.

# Usage

There are two ways to use this solution depending on your situation.

I'm also still learning Unreal Engine, so the following methods assume that Blueprint is involved in character creation to some extent. Creating and configuring an entire character purely in C++ seems a bit inefficient, especially when frequent adjustments and visual testing are required.

## 1.If You Have Already Created Your Own Character Based on UE's Default Character Class

Open your Character Blueprint and select the `CharacterMovementComponent` in the **Components** panel.

In the **Details** panel, find the **Variable** section and change the **Component Class** to your custom `CharacterMovementComponent`.

Then click **Compile**.

## 2.If You Haven't Created a Custom Character Yet

Simply create your Character Blueprint using the custom C++ `Character` class provided in this project as its parent class.
