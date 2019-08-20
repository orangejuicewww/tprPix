/*
 * ====================== sceneLoop.h =======================
 *                          -- tpr --
 *                                        CREATE -- 2019.04.29
 *                                        MODIFY -- 
 * ----------------------------------------------------------
 */
#ifndef TPR_SCENE_LOOP_H
#define TPR_SCENE_LOOP_H

//-------------------- CPP --------------------//
#include <functional> 



enum class SceneLoopType : int{
    Null,
    Begin, //- 最最基础的 游戏启动界面
    
    World  //- 主游戏
};


using F_SceneLoop = std::function<void(void)>;
//inline F_SceneLoop sceneLoopFunc {nullptr};

inline F_SceneLoop sceneRenderLoopFunc {nullptr};
inline F_SceneLoop sceneLogicLoopFunc {nullptr};


void prepare_for_sceneBegin();
void prepare_for_sceneWorld();

void switch_sceneLoop( const SceneLoopType &type_ );


#endif 
