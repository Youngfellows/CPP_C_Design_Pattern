/**
 * @file AdvancedMediaPlayer.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-30
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef ADVANCED_MEDIA_PLAYER_H_
#define ADVANCED_MEDIA_PLAYER_H_

#include <string>
class AdvancedMediaPlayer {
   public:
    AdvancedMediaPlayer() = default;
    virtual ~AdvancedMediaPlayer() = default;
    virtual void PlayVlc(std::string file_name) = 0;
    virtual void PlayMp4(std::string file_name) = 0;
};

#endif  // ADVANCED_MEDIA_PLAYER_H_
