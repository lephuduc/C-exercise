#ifndef _FUNC_
#define _FUNC_

namespace
{
	int demsochuso(int nInput)
	{
		if (nInput < 10)
		{
			return 1;
		}
		return 1 + demsochuso(nInput / 10);
	}
}
#endif
