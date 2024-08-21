#pragma once

extern int sActiveMsg;

char const * GetMsg(int id);
const char * GetMsgKey(int id);
int GetMsgLines(int id);
char * DecodeMsgNew(int id);
