//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ScrollPerfTestRunner
{
    NSObject<OS_dispatch_queue> *_eventGeneratorQueue;	// 96 = 0x60
    long long _gestureState;	// 104 = 0x68
    double _gestureStartTime;	// 112 = 0x70
    unsigned int _scrollGestureCount;	// 120 = 0x78
    struct CGPoint _scrollOffsetAtGestureStart;	// 128 = 0x80
    long long _scrollDirection;	// 144 = 0x90
    int _pageIndex;	// 152 = 0x98
    double _startLoadTime;	// 160 = 0xa0
    double _endLoadTime;	// 168 = 0xa8
    double _startScrollingTime;	// 176 = 0xb0
    double _endScrollingTime;	// 184 = 0xb8
    double _lastFramerateTime;	// 192 = 0xc0
    unsigned int _lastFrameCounter;	// 200 = 0xc8
    NSMutableArray *_framerateHistory;	// 208 = 0xd0
    NSMutableDictionary *_outputData;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x00000000000f3b1e
- (id)outputDataForPage:(id)arg1;	// IMP=0x00000000000f3691
- (id)machineConfigInfo;	// IMP=0x00000000000f353a
- (id)finalStatusForPage:(id)arg1;	// IMP=0x00000000000f3435
- (void)finishedTestPage:(id)arg1;	// IMP=0x00000000000f3305
- (void)finishPage:(id)arg1 stats:(id)arg2 error:(id)arg3;	// IMP=0x00000000000f3268
- (_Bool)startPageAction:(id)arg1;	// IMP=0x00000000000f30cc
- (_Bool)isPageTooShortToScroll;	// IMP=0x00000000000f3039
- (void)determineScrollDirection;	// IMP=0x00000000000f2f2b
- (void)advanceGesture;	// IMP=0x00000000000f2b8c
- (struct CGPoint)touchPointForMoveIndex:(unsigned long long)arg1;	// IMP=0x00000000000f2b3e
- (void)appendToFramerateHistory;	// IMP=0x00000000000f2992
- (_Bool)performActionForPage:(id)arg1;	// IMP=0x00000000000f28e5
- (void)startingTestPage:(id)arg1;	// IMP=0x00000000000f2837
- (void)finishedTestRunner;	// IMP=0x00000000000f27bd
- (void)writeOutputData;	// IMP=0x00000000000f2376
- (id)pageScrollView;	// IMP=0x00000000000f2326
- (id)pageWebView;	// IMP=0x00000000000f2285
- (id)initWithTestName:(id)arg1 browserController:(id)arg2;	// IMP=0x00000000000f21b4

@end

