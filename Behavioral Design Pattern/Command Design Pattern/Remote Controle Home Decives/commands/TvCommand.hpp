#ifndef TV_COMMAND_HPP
#define TV_COMMAND_HPP

#include "Command.hpp"
#include "../devices/Television.hpp"

class TvOnCommand : public Command {
        shared_ptr<Television> tv_;

    public : 
        // Constructor.  
        TvOnCommand(shared_ptr<Television> tv) : tv_(tv) {};

        void execute() override {
            tv_->on();
        }
};

class TvOffCommand : public Command {
        shared_ptr<Television> tv_;
    
    public : 
        TvOffCommand(shared_ptr<Television> tv) : tv_(tv) {};
        void execute() override {
            tv_->off();
        }
};

class TvSetChannelCommand : public Command {
        shared_ptr<Television> tv_;
        int channel_;

    public : 
        TvSetChannelCommand(shared_ptr<Television> tv, int channel) : tv_(tv), channel_(channel) {};

        // sets the channel of the TV
        void execute() override {
            tv_->setChannel(channel_);
        }
};

#endif