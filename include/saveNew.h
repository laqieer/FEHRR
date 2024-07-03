#pragma once

bool IsValidSuspendSaveAlt(int save_id);
void WriteSuspendSaveAlt(int save_id);

struct PidStatsNew
{
    u32 loss_count          : 8;
    u32 act_count           : 8;
    u32 stat_view_count     : 8;
    u32 defeat_chapter      : 6;
    u32 defeat_turn         : 10;
    u32 deploy_count        : 6;
    u32 move_count          : 10;
    u32 defeat_cause        : 4;
    u32 exp_gained          : 12;
    u32 win_count           : 10;
    u32 battle_count        : 12;
    u32 killer_pid          : 9;
    u32 defeat_chapter_new  : 15;
};
