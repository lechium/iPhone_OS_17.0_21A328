//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface RotationTestProcessor
{
    int _iterationsRemaining;	// 80 = 0x50
    long long _testState;	// 88 = 0x58
}

@property(nonatomic) long long testState; // @synthesize testState=_testState;
@property(nonatomic) int iterationsRemaining; // @synthesize iterationsRemaining=_iterationsRemaining;
- (_Bool)performActionForPage:(id)arg1;	// IMP=0x00000000001ad12e
- (void)startRotation;	// IMP=0x00000000001acfdc
- (_Bool)startPageAction:(id)arg1;	// IMP=0x00000000001acf49
- (id)initWithTestName:(id)arg1 browserController:(id)arg2;	// IMP=0x00000000001acee9

@end

