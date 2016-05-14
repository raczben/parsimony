/**
* @brief Represents a CPU thread barrier
* @note The barrier automatically resets after all threads are synced
*/

#ifndef BARRIER_H
#define BARRIER_H

#include <mutex>
#include <condition_variable>


class Barrier {
private:
	std::mutex mMutex;
	std::condition_variable mCond;
	const std::size_t mThreshold;
	std::size_t mCount;
	bool mGeneration;

public:
	explicit Barrier(std::size_t iCount) :
		mThreshold(iCount),
		mCount(iCount),
		mGeneration(false) {
	}

	void synch_threads() {
		bool lGen = mGeneration;
		std::unique_lock<std::mutex> lLock{ mMutex };
		if (!--mCount) {
			mGeneration = !mGeneration;
			mCount = mThreshold;
			mCond.notify_all();
		}
		else {
			mCond.wait(lLock, [this, lGen] { return lGen != mGeneration; });
		}
	}

};



#endif  // BARRIER_H