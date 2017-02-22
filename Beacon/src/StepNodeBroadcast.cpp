/*******************************************************************************
 * Project:  Beacon
 * @file     StepNodeBroadcast.cpp
 * @brief 
 * @author   bwar
 * @date:    Dec 28, 2016
 * @note
 * Modify history:
 ******************************************************************************/
#include "StepNodeBroadcast.hpp"

namespace beacon
{

StepNodeBroadcast::StepNodeBroadcast(const std::string& strNodeIdentity, uint32 uiCmd, const MsgBody& oMsgBody)
    : m_strTargetNodeIdentity(strNodeIdentity), m_uiCmd(uiCmd), m_oMsgBody(oMsgBody)
{
}

StepNodeBroadcast::~StepNodeBroadcast()
{
}

neb::E_CMD_STATUS StepNodeBroadcast::Emit(int iErrno, const std::string& strErrMsg, void* data)
{
    // Step::SendTo(m_stCtx, m_uiCmd, GetSequence(), m_oMsgBody);
    if (SendTo(m_stCtx, m_uiCmd, GetSequence(), m_oMsgBody))
    {
        return(neb::CMD_STATUS_RUNNING);
    }
    else
    {
        return(neb::CMD_STATUS_FAULT);
    }
}

neb::E_CMD_STATUS StepNodeBroadcast::Callback(const neb::tagChannelContext& stCtx, const MsgHead& oInMsgHead, const MsgBody& oInMsgBody, void* data)
{
    if (neb::ERR_OK == oInMsgBody.rsp_result().code())
    {
        return(neb::CMD_STATUS_COMPLETED);
    }
    else
    {
        LOG4_ERROR("error %d: %s!", oInMsgBody.rsp_result().code(), oInMsgBody.rsp_result().msg().c_str());
        return(neb::CMD_STATUS_FAULT);
    }
}

neb::E_CMD_STATUS StepNodeBroadcast::Timeout()
{
    LOG4_ERROR("timeout!");
    return(neb::CMD_STATUS_FAULT);
}

} /* namespace beacon */