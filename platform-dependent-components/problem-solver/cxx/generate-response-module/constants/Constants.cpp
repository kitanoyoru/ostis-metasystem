/*
 * This source file is part of an OSTIS project. For the latest info, see http://ostis.net
 * Distributed under the MIT License
 * (See accompanying file COPYING.MIT or copy at http://opensource.org/licenses/MIT)
 */

#include "Constants.hpp"

namespace generateResponseModule
{
std::string const Constants::generateAnswerAgentClassName = "GenerateAnswerAgent";

std::string const Constants::messageAddrParamName = "messageAddr";

std::string const Constants::answerAddrParamName = "answerAddr";

std::string const Constants::roleRelationMappingTemplateName = "role_relation_mapping_search_template";

std::string const Constants::findResponseActionTemplateName = "find_corresponding_action_template";

std::string const Constants::roleRelationDefaultArgValueTemplateName = "role_relation_default_arg_template";

std::string const Constants::targetRoleRelationVarName = "_target_role";

std::string const Constants::paramVarName = "_param";

std::string const Constants::messageVarName = "_message";

std::string const Constants::actionVarName = "_action";

std::string const Constants::defaultArgVarName = "_default_arg";

std::string const Constants::rrelWithDefaultArgVarName = "_rrel_with_default_arg";

}  // namespace generateResponseModule
