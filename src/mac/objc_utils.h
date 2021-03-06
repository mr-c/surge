/*
** Surge Synthesizer is Free and Open Source Software
**
** Surge is made available under the Gnu General Public License, v3.0
** https://www.gnu.org/licenses/gpl-3.0.en.html
**
** Copyright 2004-2020 by various individuals as described by the Git transaction log
**
** All source at: https://github.com/surge-synthesizer/surge.git
**
** Surge was a commercial product from 2004-2018, with Copyright and ownership
** in that period held by Claes Johanson at Vember Audio. Claes made Surge
** open source in September 2018.
*/

/*
 * Sometimes you just need to call some objective C you know, and
 * you want a place to hang it. This is that place.
 */

#pragma once
#include <string>
#include <functional>
#include "filesystem/import.h"

namespace Surge
{
namespace ObjCUtil
{
void loadUrlToPath(
    const std::string& url,
    const fs::path& path,
    const std::function<void(const std::string& url)>& onDone,
    const std::function<void(const std::string& url, const std::string& msg)>& onError);
}
} // namespace Surge
